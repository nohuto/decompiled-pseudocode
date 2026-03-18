/*
 * XREFs of CmPostCallbackNotification @ 0x14060072C
 * Callers:
 *     CmpDoQueryKeyName @ 0x1400CFEE0 (CmpDoQueryKeyName.c)
 *     NtQueryValueKey @ 0x1405FEFD0 (NtQueryValueKey.c)
 *     CmpDeleteKeyObject @ 0x140603C70 (CmpDeleteKeyObject.c)
 *     NtDeleteKey @ 0x14063B0D0 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x14063C850 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14063E0F0 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x140660AE0 (NtEnumerateValueKey.c)
 *     CmpSecurityMethod @ 0x140662420 (CmpSecurityMethod.c)
 *     NtSetInformationKey @ 0x1406B8050 (NtSetInformationKey.c)
 *     CmUnloadKey @ 0x1406B8CA4 (CmUnloadKey.c)
 *     NtRenameKey @ 0x140823E80 (NtRenameKey.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14003F300 (ExIsResourceAcquiredSharedLite.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpCallCallBacksEx @ 0x1405F8BA0 (CmpCallCallBacksEx.c)
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
