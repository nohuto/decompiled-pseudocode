/*
 * XREFs of MmAddVerifierSpecialThunks @ 0x14084ECA0
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x1400DA610 (MiLookupDataTableEntry.c)
 *     MmReleaseLoadLock @ 0x140652BE0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140652C20 (MmAcquireLoadLock.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1409377A8 (VfThunkAddSpecialDriverThunks.c)
 */

NTSTATUS __stdcall MmAddVerifierSpecialThunks(ULONG_PTR EntryRoutine, PVOID ThunkBuffer, ULONG ThunkBufferSize)
{
  int v7; // edi
  struct _KTHREAD *Lock; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 *i; // rax
  NTSTATUS v14; // ebx
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (MiFlags & 1) == 0 )
    return -1073741637;
  v7 = 0;
  if ( !(ThunkBufferSize >> 4) )
    return -1073741583;
  Lock = MmAcquireLoadLock();
  v9 = MiLookupDataTableEntry(EntryRoutine, 0);
  v10 = v9;
  if ( v9 && (v11 = v9[6], retaddr >= v11) && (v12 = v11 + *((unsigned int *)v9 + 16), retaddr < v12) )
  {
    for ( i = (unsigned __int64 *)((char *)ThunkBuffer + 8); *i >= v11 && *i < v12; i += 2 )
    {
      if ( ++v7 >= ThunkBufferSize >> 4 )
      {
        v14 = VfThunkAddSpecialDriverThunks(EntryRoutine, ThunkBuffer, ThunkBufferSize, v10);
        MmReleaseLoadLock((__int64)Lock);
        return v14;
      }
    }
    MmReleaseLoadLock((__int64)Lock);
    return -1073741584;
  }
  else
  {
    MmReleaseLoadLock((__int64)Lock);
    return -1073741585;
  }
}
