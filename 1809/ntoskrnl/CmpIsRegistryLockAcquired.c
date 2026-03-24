/*
 * XREFs of CmpIsRegistryLockAcquired @ 0x1401B2FB8
 * Callers:
 *     CmpDoQueryKeyName @ 0x140016840 (CmpDoQueryKeyName.c)
 *     NtDeleteKey @ 0x1405A9940 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x1405B4DBC (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x1405B6030 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1405B7130 (NtQueryMultipleValueKey.c)
 *     CmpSecurityMethod @ 0x1405CB2E0 (CmpSecurityMethod.c)
 *     NtSetValueKey @ 0x1405CC8E0 (NtSetValueKey.c)
 *     NtEnumerateKey @ 0x1405D22F0 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405D3890 (NtEnumerateValueKey.c)
 *     CmpDeleteKeyObject @ 0x14063F500 (CmpDeleteKeyObject.c)
 *     CmPostCallbackNotificationEx @ 0x14063FAA0 (CmPostCallbackNotificationEx.c)
 *     NtQueryKey @ 0x14063FB90 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140640340 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x140641350 (CmpParseKey.c)
 *     CmUnloadKey @ 0x140691E18 (CmUnloadKey.c)
 *     NtSetInformationKey @ 0x140696FE0 (NtSetInformationKey.c)
 *     NtFlushKey @ 0x1406BFF70 (NtFlushKey.c)
 *     NtRenameKey @ 0x1407E9B80 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1407EA070 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407EA3F0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x1407EA6B0 (NtSaveKeyEx.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x1400B9AE0 (ExIsResourceAcquiredSharedLite.c)
 *     CmpThreadInfoLogStack @ 0x1401B3054 (CmpThreadInfoLogStack.c)
 */

ULONG CmpIsRegistryLockAcquired()
{
  _DWORD *SparePtr; // rcx

  SparePtr = KeGetCurrentThread()[1].WaitBlock[2].SparePtr;
  if ( SparePtr )
    return SparePtr[2];
  CmpThreadInfoLogStack();
  return ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock);
}
