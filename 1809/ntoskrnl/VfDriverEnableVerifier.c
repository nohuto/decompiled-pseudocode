/*
 * XREFs of VfDriverEnableVerifier @ 0x140928E78
 * Callers:
 *     MmEnableVerifierForDriver @ 0x140925BB8 (MmEnableVerifierForDriver.c)
 *     VfDriverEnableVerifierForAll @ 0x140929018 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     MmHasImageBeenImportOptimized @ 0x1405832B0 (MmHasImageBeenImportOptimized.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     VfDriverLoadImage @ 0x140922264 (VfDriverLoadImage.c)
 *     VfDriverLock @ 0x1409226E0 (VfDriverLock.c)
 *     VfUtilIsProtectedDriver @ 0x1409271C4 (VfUtilIsProtectedDriver.c)
 *     ViSuspectDriversLookupEntry @ 0x140938D80 (ViSuspectDriversLookupEntry.c)
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
    v10 = (__int64 *)qword_14040E7E8;
    if ( *(__int64 **)qword_14040E7E8 != &VfSuspectDriversList )
      __fastfail(3u);
    *(_QWORD *)(a1 + 8) = qword_14040E7E8;
    *(_QWORD *)a1 = &VfSuspectDriversList;
    *v10 = a1;
    qword_14040E7E8 = a1;
    *a3 = 1;
    if ( v5 )
      VfDriverLoadImage(a2, a1, 0, 1u);
    ++dword_14041BAD8;
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
