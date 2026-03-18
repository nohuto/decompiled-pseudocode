/*
 * XREFs of MmAddVerifierThunks @ 0x140888D30
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1400FB388 (MiLookupDataTableEntry.c)
 *     MmReleaseLoadLock @ 0x1406A5B10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A5B70 (MmAcquireLoadLock.c)
 *     VfThunkAddDriverThunks @ 0x140975E04 (VfThunkAddDriverThunks.c)
 */

NTSTATUS __stdcall MmAddVerifierThunks(PVOID ThunkBuffer, ULONG ThunkBufferSize)
{
  int v5; // ebx
  unsigned __int64 *v6; // rsi
  struct _KTHREAD *Lock; // r15
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // r10
  int v11; // edx
  PVOID *v12; // rcx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rax
  NTSTATUS v15; // ebx

  if ( (MiFlags & 1) == 0 )
    return -1073741637;
  v5 = 0;
  v6 = (unsigned __int64 *)ThunkBuffer;
  if ( !(ThunkBufferSize >> 4) )
    return -1073741585;
  Lock = MmAcquireLoadLock();
  v8 = MiLookupDataTableEntry(*(_QWORD *)ThunkBuffer, 0LL);
  v9 = v8;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 48);
    v11 = 0;
    v12 = (PVOID *)PsLoadedModuleList;
    v13 = v10 + *(unsigned int *)(v8 + 64);
    while ( 1 )
    {
      if ( v12 == &PsLoadedModuleList )
        goto LABEL_11;
      if ( (PVOID *)v8 == v12 )
        break;
      if ( (unsigned int)++v11 >= 2 )
      {
LABEL_11:
        while ( *v6 >= v10 )
        {
          if ( *v6 >= v13 )
            break;
          v14 = v6[1];
          if ( v14 < v10 || v14 >= v13 )
            break;
          v6 += 2;
          if ( ++v5 >= ThunkBufferSize >> 4 )
          {
            v15 = VfThunkAddDriverThunks(ThunkBuffer, ThunkBufferSize, v9, v13);
            goto LABEL_18;
          }
        }
        break;
      }
      v12 = (PVOID *)*v12;
    }
  }
  v15 = -1073741584;
LABEL_18:
  MmReleaseLoadLock((__int64)Lock);
  return v15;
}
