/*
 * XREFs of RtlFlsFree @ 0x180035A00
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlClearBits @ 0x180035B30 (RtlClearBits.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlFlsFree(unsigned int a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  _PEB *ProcessEnvironmentBlock; // rdi
  const signed __int32 **FlsBitmap; // rcx
  unsigned __int8 v7; // si
  struct _FLS_CALLBACK_INFO *FlsCallback; // rax
  __int64 v9; // r14
  __int64 v10; // rbp
  void (*v11)(void); // r15
  unsigned __int64 v12; // rdx
  unsigned __int64 *v13; // r8
  __int64 v14; // r9
  _LIST_ENTRY *i; // rbx

  if ( a1 - 1 > 0x7E )
    return 3221225485LL;
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpFlsLock, a2, a3, a4);
  FlsBitmap = (const signed __int32 **)ProcessEnvironmentBlock->FlsBitmap;
  if ( a1 >= *(_DWORD *)FlsBitmap )
  {
    v7 = 0;
  }
  else
  {
    v7 = _bittest(FlsBitmap[1], a1);
    if ( v7 )
    {
      RtlClearBits(FlsBitmap, a1, 1LL);
      FlsCallback = ProcessEnvironmentBlock->FlsCallback;
      v9 = 16LL * a1;
      v10 = a1;
      v11 = *(void (**)(void))((char *)FlsCallback + v9);
      RtlAcquireSRWLockExclusive((unsigned __int64)FlsCallback + v9 + 8, v12, v13, v14);
      for ( i = ProcessEnvironmentBlock->FlsListHead.Flink; i != &ProcessEnvironmentBlock->FlsListHead; i = i->Flink )
      {
        if ( v11 )
        {
          if ( *((_QWORD *)&i[1].Flink + v10) )
            v11();
        }
        *((_QWORD *)&i[1].Flink + v10) = 0LL;
      }
      *(_QWORD *)((char *)ProcessEnvironmentBlock->FlsCallback + v9) = 0LL;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)((char *)ProcessEnvironmentBlock->FlsCallback + v9 + 8));
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpFlsLock);
  if ( v7 )
    return 0LL;
  else
    return 3221225485LL;
}
