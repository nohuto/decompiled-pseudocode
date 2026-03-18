/*
 * XREFs of CmPostCallbackNotification @ 0x1405FECFC
 * Callers:
 *     CmpDoQueryKeyName @ 0x140092BC0 (CmpDoQueryKeyName.c)
 *     NtQueryValueKey @ 0x1405FD5A0 (NtQueryValueKey.c)
 *     CmpDeleteKeyObject @ 0x140602160 (CmpDeleteKeyObject.c)
 *     NtDeleteKey @ 0x140638040 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x1406397C0 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14063B060 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14064D920 (NtEnumerateValueKey.c)
 *     CmpSecurityMethod @ 0x14064F260 (CmpSecurityMethod.c)
 *     CmUnloadKey @ 0x14069A6C4 (CmUnloadKey.c)
 *     NtSetInformationKey @ 0x1406BC830 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x140824780 (NtRenameKey.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14003F5C0 (ExIsResourceAcquiredSharedLite.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpCallCallBacksEx @ 0x1405F7B50 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmPostCallbackNotification(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  _QWORD v10[8]; // [rsp+50h] [rbp-48h] BYREF

  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)*a5 != a5 )
  {
    memset(v10, 0, 0x38uLL);
    v10[0] = a2;
    LODWORD(v10[1]) = a3;
    LODWORD(v10[3]) = a3;
    v10[2] = a4;
    CmpCallCallBacksEx(a1, (__int64)v10, 0LL, 0, a1, a2, (__int64)a5);
    return LODWORD(v10[3]);
  }
  return a3;
}
