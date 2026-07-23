/*
 * XREFs of CmpIsRegistryLockAcquired @ 0x1401B30F8
 * Callers:
 *     CmpDoQueryKeyName @ 0x140016840 (CmpDoQueryKeyName.c)
 *     NtDeleteKey @ 0x1405AA940 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x1405B5DBC (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x1405B7030 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1405B8130 (NtQueryMultipleValueKey.c)
 *     CmpSecurityMethod @ 0x1405CC2E0 (CmpSecurityMethod.c)
 *     NtSetValueKey @ 0x1405CD8E0 (NtSetValueKey.c)
 *     NtEnumerateKey @ 0x1405D32F0 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405D4890 (NtEnumerateValueKey.c)
 *     CmpDeleteKeyObject @ 0x140640520 (CmpDeleteKeyObject.c)
 *     CmPostCallbackNotificationEx @ 0x140640AC0 (CmPostCallbackNotificationEx.c)
 *     NtQueryKey @ 0x140640BB0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140641360 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x140642370 (CmpParseKey.c)
 *     CmUnloadKey @ 0x140692FD8 (CmUnloadKey.c)
 *     NtSetInformationKey @ 0x1406981A0 (NtSetInformationKey.c)
 *     NtFlushKey @ 0x1406C1210 (NtFlushKey.c)
 *     NtRenameKey @ 0x1407EAD80 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1407EB270 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407EB5F0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x1407EB8B0 (NtSaveKeyEx.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x1400B9A20 (ExIsResourceAcquiredSharedLite.c)
 *     CmpThreadInfoLogStack @ 0x1401B3194 (CmpThreadInfoLogStack.c)
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
