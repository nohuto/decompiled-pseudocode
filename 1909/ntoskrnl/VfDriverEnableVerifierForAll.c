/*
 * XREFs of VfDriverEnableVerifierForAll @ 0x140966538
 * Callers:
 *     VfAddVerifierEntry @ 0x14098A1F4 (VfAddVerifierEntry.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     RtlImageNtHeaderEx @ 0x14005F3C0 (RtlImageNtHeaderEx.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     MmIsSessionAddress @ 0x1400C6CC0 (MmIsSessionAddress.c)
 *     MiIsImportOptimizationEnabled @ 0x140154A74 (MiIsImportOptimizationEnabled.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VfDriverLock @ 0x14096043C (VfDriverLock.c)
 *     VfUtilIsProtectedDriver @ 0x140964664 (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x140966398 (VfDriverEnableVerifier.c)
 *     VfSuspectDriversAllocateEntry @ 0x140976D68 (VfSuspectDriversAllocateEntry.c)
 */

__int64 VfDriverEnableVerifierForAll()
{
  int v0; // edi
  PVOID *i; // rbx
  PVOID v3; // rbp
  __int64 Entry; // rax
  void *v5; // rsi
  int v6; // [rsp+40h] [rbp+8h] BYREF
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
      if ( MmIsSessionAddress((unsigned __int64)v3) || RtlImageNtHeaderEx(1u, v3, 0LL, &NtHeader) >= 0 )
      {
        Entry = VfSuspectDriversAllocateEntry(i + 11);
        v5 = (void *)Entry;
        if ( !Entry )
        {
          v0 = -1073741670;
          break;
        }
        v6 = 0;
        v0 = VfDriverEnableVerifier(Entry, (__int64)i, &v6);
        if ( !v6 )
          ExFreePoolWithTag(v5, 0);
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
