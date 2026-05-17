/*
 * XREFs of RtlProcessFlsData @ 0x180076270
 * Callers:
 *     LdrShutdownThread @ 0x1800232A0 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x1800290F0 (LdrShutdownProcess.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlProcessFlsData(_QWORD *a1, char *a2, unsigned __int64 *a3, __int64 a4)
{
  struct _PEB *v4; // rsi
  struct _TEB *v6; // rdi
  __int64 Heap; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  _LIST_ENTRY *v11; // rbx
  _LIST_ENTRY *Blink; // rcx
  unsigned int FlsHighIndex; // ebp
  unsigned int i; // edi
  _QWORD *v16; // r15
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r14
  struct _FLS_CALLBACK_INFO *FlsCallback; // rdx
  void (*v21)(void); // rax

  v4 = NtCurrentPeb();
  if ( a1 )
  {
    FlsHighIndex = v4->FlsHighIndex;
    for ( i = 1; i <= FlsHighIndex; ++i )
    {
      v16 = &a1[i];
      if ( v16[2] )
      {
        v19 = 16LL * i;
        RtlAcquireSRWLockShared((volatile signed __int64 *)((char *)v4->FlsCallback + v19 + 8), a2, (__int64)a3, a4);
        FlsCallback = v4->FlsCallback;
        v21 = *(void (**)(void))((char *)FlsCallback + v19);
        if ( v21 && v16[2] )
        {
          v21();
          v16[2] = 0LL;
          FlsCallback = v4->FlsCallback;
        }
        RtlReleaseSRWLockShared((volatile signed __int64 *)((char *)FlsCallback + v19 + 8));
      }
    }
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpFlsLock, (unsigned __int64)a2, a3, a4);
    v17 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) == a1 )
    {
      v18 = (_QWORD *)a1[1];
      if ( (_QWORD *)*v18 == a1 )
      {
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        goto LABEL_5;
      }
    }
LABEL_16:
    __fastfail(3u);
  }
  v6 = NtCurrentTeb();
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (NtdllBaseTag + 2883584) | 8u, 1040LL);
  v11 = (_LIST_ENTRY *)Heap;
  if ( Heap )
  {
    v6->FlsData = (void *)Heap;
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpFlsLock, v8, v9, v10);
    Blink = v4->FlsListHead.Blink;
    if ( Blink->Flink == &v4->FlsListHead )
    {
      v11->Flink = &v4->FlsListHead;
      v11->Blink = Blink;
      Blink->Flink = v11;
      v4->FlsListHead.Blink = v11;
LABEL_5:
      RtlReleaseSRWLockExclusive(&RtlpFlsLock);
      return 0LL;
    }
    goto LABEL_16;
  }
  return 3221225495LL;
}
