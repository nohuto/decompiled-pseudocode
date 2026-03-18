/*
 * XREFs of MmAddVerifierSpecialThunks @ 0x140888C30
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x1400FB388 (MiLookupDataTableEntry.c)
 *     MmReleaseLoadLock @ 0x1406A5B10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A5B70 (MmAcquireLoadLock.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140975E88 (VfThunkAddSpecialDriverThunks.c)
 */

NTSTATUS __stdcall MmAddVerifierSpecialThunks(ULONG_PTR EntryRoutine, PVOID ThunkBuffer, ULONG ThunkBufferSize)
{
  int v7; // edi
  struct _KTHREAD *Lock; // rsi
  __int64 v9; // rax
  __int64 v10; // r9
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
  v9 = MiLookupDataTableEntry(EntryRoutine, 0LL);
  v10 = v9;
  if ( v9 && (v11 = *(_QWORD *)(v9 + 48), retaddr >= v11) && (v12 = v11 + *(unsigned int *)(v9 + 64), retaddr < v12) )
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
