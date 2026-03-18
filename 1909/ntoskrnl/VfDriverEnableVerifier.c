/*
 * XREFs of VfDriverEnableVerifier @ 0x140966398
 * Callers:
 *     MmEnableVerifierForDriver @ 0x140963D48 (MmEnableVerifierForDriver.c)
 *     VfDriverEnableVerifierForAll @ 0x140966538 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 *     MmHasImageBeenImportOptimized @ 0x14088CC18 (MmHasImageBeenImportOptimized.c)
 *     VfDriverLoadImage @ 0x14095FF80 (VfDriverLoadImage.c)
 *     ViSuspectDriversLookupEntry @ 0x1409603F8 (ViSuspectDriversLookupEntry.c)
 *     VfDriverLock @ 0x14096043C (VfDriverLock.c)
 *     VfUtilIsProtectedDriver @ 0x140964664 (VfUtilIsProtectedDriver.c)
 */

__int64 __fastcall VfDriverEnableVerifier(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // r12d
  int v6; // r15d
  unsigned int v7; // ebp
  unsigned int v8; // ebx
  PVOID *v9; // rsi
  __int64 *v10; // rax

  *a3 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  VfDriverLock();
  if ( ViSuspectDriversLookupEntry((PCUNICODE_STRING)(a1 + 24)) )
    goto LABEL_24;
  if ( !a2 )
  {
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    v9 = (PVOID *)PsLoadedModuleList;
    v6 = 1;
    if ( PsLoadedModuleList == &PsLoadedModuleList )
      goto LABEL_7;
    do
    {
      a2 = (__int64)v9;
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 24), (PCUNICODE_STRING)(v9 + 11), 1u) )
        break;
      v9 = (PVOID *)*v9;
      ++v7;
    }
    while ( v9 != &PsLoadedModuleList );
    v8 = 0;
    if ( v9 == &PsLoadedModuleList )
LABEL_7:
      a2 = 0LL;
    if ( !a2 )
      goto LABEL_17;
  }
  if ( (~VerifierModifyableOptions & MmVerifierData) != 0 )
  {
LABEL_10:
    v8 = -1073741554;
    goto LABEL_22;
  }
  if ( !MmHasImageBeenImportOptimized() )
  {
    if ( v6 && (v7 <= 1 || (unsigned int)VfUtilIsProtectedDriver((PCUNICODE_STRING)(a2 + 88))) )
      goto LABEL_10;
    v5 = 1;
LABEL_17:
    v10 = (__int64 *)qword_140435E48;
    if ( *(__int64 **)qword_140435E48 != &VfSuspectDriversList )
      __fastfail(3u);
    *(_QWORD *)(a1 + 8) = qword_140435E48;
    *(_QWORD *)a1 = &VfSuspectDriversList;
    *v10 = a1;
    qword_140435E48 = a1;
    *a3 = 1;
    if ( v5 )
      VfDriverLoadImage(a2, a1, 0, 1u);
    ++dword_140446398;
    goto LABEL_22;
  }
  v8 = -1073741637;
LABEL_22:
  if ( v6 )
    ExReleaseResourceLite(&PsLoadedModuleResource);
LABEL_24:
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return v8;
}
