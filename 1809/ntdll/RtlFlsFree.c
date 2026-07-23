/*
 * XREFs of RtlFlsFree @ 0x180035A00
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlClearBits @ 0x180035B30 (RtlClearBits.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl RtlFlsFree(ULONG FlsIndex)
{
  _PEB *ProcessEnvironmentBlock; // rdi
  _RTL_BITMAP *FlsBitmap; // rcx
  unsigned __int8 v4; // si
  struct _FLS_CALLBACK_INFO *FlsCallback; // rax
  __int64 v6; // r14
  __int64 v7; // rbp
  void (*v8)(void); // r15
  _LIST_ENTRY *i; // rbx

  if ( FlsIndex - 1 > 0x7E )
    return -1073741811;
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  RtlAcquireSRWLockExclusive(&RtlpFlsLock);
  FlsBitmap = (_RTL_BITMAP *)ProcessEnvironmentBlock->FlsBitmap;
  if ( FlsIndex >= FlsBitmap->SizeOfBitMap )
  {
    v4 = 0;
  }
  else
  {
    v4 = _bittest((const signed __int32 *)FlsBitmap->Buffer, FlsIndex);
    if ( v4 )
    {
      RtlClearBits(FlsBitmap, FlsIndex, 1u);
      FlsCallback = ProcessEnvironmentBlock->FlsCallback;
      v6 = 16LL * FlsIndex;
      v7 = FlsIndex;
      v8 = *(void (**)(void))((char *)FlsCallback + v6);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)((char *)FlsCallback + v6 + 8));
      for ( i = ProcessEnvironmentBlock->FlsListHead.Flink; i != &ProcessEnvironmentBlock->FlsListHead; i = i->Flink )
      {
        if ( v8 )
        {
          if ( *((_QWORD *)&i[1].Flink + v7) )
            v8();
        }
        *((_QWORD *)&i[1].Flink + v7) = 0LL;
      }
      *(_QWORD *)((char *)ProcessEnvironmentBlock->FlsCallback + v6) = 0LL;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)((char *)ProcessEnvironmentBlock->FlsCallback + v6 + 8));
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpFlsLock);
  if ( v4 )
    return 0;
  else
    return -1073741811;
}
