/*
 * XREFs of VfDriverEnableVerifierForAll @ 0x140929018
 * Callers:
 *     VfAddVerifierEntry @ 0x14094B814 (VfAddVerifierEntry.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     MmIsSessionAddress @ 0x1400245B0 (MmIsSessionAddress.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     RtlImageNtHeaderEx @ 0x14009D7A0 (RtlImageNtHeaderEx.c)
 *     MiIsImportOptimizationEnabled @ 0x1400DA590 (MiIsImportOptimizationEnabled.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     VfDriverLock @ 0x1409226E0 (VfDriverLock.c)
 *     VfUtilIsProtectedDriver @ 0x1409271C4 (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x140928E78 (VfDriverEnableVerifier.c)
 *     VfSuspectDriversAllocateEntry @ 0x1409384B4 (VfSuspectDriversAllocateEntry.c)
 */

__int64 VfDriverEnableVerifierForAll()
{
  int v0; // edi
  PVOID *i; // rbx
  PVOID v3; // rbp
  int v4; // eax
  __int64 Entry; // rax
  void *v6; // rsi
  int v7; // [rsp+40h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS NtHeader; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  if ( MiIsImportOptimizationEnabled() )
    return 3221225659LL;
  VfDriverLock();
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  for ( i = *(PVOID **)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( !(unsigned int)VfUtilIsProtectedDriver((PCUNICODE_STRING)(i + 11)) )
    {
      v3 = i[6];
      LOBYTE(v4) = MmIsSessionAddress((unsigned __int64)v3);
      if ( v4 || RtlImageNtHeaderEx(1u, v3, 0LL, &NtHeader) >= 0 )
      {
        Entry = VfSuspectDriversAllocateEntry(i + 11);
        v6 = (void *)Entry;
        if ( !Entry )
        {
          v0 = -1073741670;
          break;
        }
        v7 = 0;
        v0 = VfDriverEnableVerifier(Entry, (__int64)i, &v7);
        if ( !v7 )
          ExFreePoolWithTag(v6, 0);
        if ( v0 < 0 )
          break;
      }
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return (unsigned int)v0;
}
