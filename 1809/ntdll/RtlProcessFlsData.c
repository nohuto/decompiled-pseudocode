/*
 * XREFs of RtlProcessFlsData @ 0x180076280
 * Callers:
 *     LdrShutdownThread @ 0x1800232A0 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x1800290F0 (LdrShutdownProcess.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlProcessFlsData(_QWORD *a1)
{
  struct _PEB *v1; // rsi
  struct _TEB *v3; // rdi
  _LIST_ENTRY *Heap; // rax
  _LIST_ENTRY *v5; // rbx
  _LIST_ENTRY *Blink; // rcx
  unsigned int FlsHighIndex; // ebp
  unsigned int i; // edi
  _QWORD *v10; // r15
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r14
  struct _FLS_CALLBACK_INFO *FlsCallback; // rdx
  void (*v15)(void); // rax

  v1 = NtCurrentPeb();
  if ( a1 )
  {
    FlsHighIndex = v1->FlsHighIndex;
    for ( i = 1; i <= FlsHighIndex; ++i )
    {
      v10 = &a1[i];
      if ( v10[2] )
      {
        v13 = 16LL * i;
        RtlAcquireSRWLockShared((PRTL_SRWLOCK)((char *)v1->FlsCallback + v13 + 8));
        FlsCallback = v1->FlsCallback;
        v15 = *(void (**)(void))((char *)FlsCallback + v13);
        if ( v15 && v10[2] )
        {
          v15();
          v10[2] = 0LL;
          FlsCallback = v1->FlsCallback;
        }
        RtlReleaseSRWLockShared((PRTL_SRWLOCK)((char *)FlsCallback + v13 + 8));
      }
    }
    RtlAcquireSRWLockExclusive(&RtlpFlsLock);
    v11 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) == a1 )
    {
      v12 = (_QWORD *)a1[1];
      if ( (_QWORD *)*v12 == a1 )
      {
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        goto LABEL_5;
      }
    }
LABEL_16:
    __fastfail(3u);
  }
  v3 = NtCurrentTeb();
  Heap = (_LIST_ENTRY *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (NtdllBaseTag + 2883584) | 8, 0x410uLL);
  v5 = Heap;
  if ( Heap )
  {
    v3->FlsData = Heap;
    RtlAcquireSRWLockExclusive(&RtlpFlsLock);
    Blink = v1->FlsListHead.Blink;
    if ( Blink->Flink == &v1->FlsListHead )
    {
      v5->Flink = &v1->FlsListHead;
      v5->Blink = Blink;
      Blink->Flink = v5;
      v1->FlsListHead.Blink = v5;
LABEL_5:
      RtlReleaseSRWLockExclusive(&RtlpFlsLock);
      return 0LL;
    }
    goto LABEL_16;
  }
  return 3221225495LL;
}
