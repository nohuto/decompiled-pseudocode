/*
 * XREFs of MmAddVerifierThunks @ 0x14084EDA0
 * Callers:
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1400DA610 (MiLookupDataTableEntry.c)
 *     MmReleaseLoadLock @ 0x140652BE0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140652C20 (MmAcquireLoadLock.c)
 *     VfThunkAddDriverThunks @ 0x140937724 (VfThunkAddDriverThunks.c)
 */

NTSTATUS __stdcall MmAddVerifierThunks(PVOID ThunkBuffer, ULONG ThunkBufferSize)
{
  int v5; // ebx
  unsigned __int64 *v6; // rsi
  struct _KTHREAD *Lock; // r15
  PVOID *v8; // rax
  PVOID *v9; // r8
  PVOID v10; // r10
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
  v8 = (PVOID *)MiLookupDataTableEntry(*(_QWORD *)ThunkBuffer, 0);
  v9 = v8;
  if ( v8 )
  {
    v10 = v8[6];
    v11 = 0;
    v12 = (PVOID *)PsLoadedModuleList;
    v13 = (unsigned __int64)v10 + *((unsigned int *)v8 + 16);
    while ( 1 )
    {
      if ( v12 == &PsLoadedModuleList )
        goto LABEL_10;
      if ( v8 == v12 )
        break;
      v12 = (PVOID *)*v12;
      if ( (unsigned int)++v11 >= 2 )
      {
LABEL_10:
        while ( *v6 >= (unsigned __int64)v10 )
        {
          if ( *v6 >= v13 )
            break;
          v14 = v6[1];
          if ( v14 < (unsigned __int64)v10 || v14 >= v13 )
            break;
          v6 += 2;
          if ( ++v5 >= ThunkBufferSize >> 4 )
          {
            v15 = VfThunkAddDriverThunks(ThunkBuffer, ThunkBufferSize, v9, v13);
            goto LABEL_17;
          }
        }
        break;
      }
    }
  }
  v15 = -1073741584;
LABEL_17:
  MmReleaseLoadLock((__int64)Lock);
  return v15;
}
