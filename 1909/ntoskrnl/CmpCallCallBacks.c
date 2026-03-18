/*
 * XREFs of CmpCallCallBacks @ 0x1406007F8
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
 *     CmpCallCallBacksEx @ 0x1405F8BA0 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmpCallCallBacks(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  return CmpCallCallBacksEx(a1, a2, 0LL, 1, a4, a5, a6);
}
