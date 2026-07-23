/*
 * XREFs of CmPostCallbackNotificationEx @ 0x140640AC0
 * Callers:
 *     NtDeleteKey @ 0x1405AA940 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x1405B5DBC (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x1405B7030 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1405B8130 (NtQueryMultipleValueKey.c)
 *     CmpSecurityMethod @ 0x1405CC2E0 (CmpSecurityMethod.c)
 *     NtSetValueKey @ 0x1405CD8E0 (NtSetValueKey.c)
 *     CmPostCallbackNotification @ 0x1405D2A94 (CmPostCallbackNotification.c)
 *     CmpParseKey @ 0x140642370 (CmpParseKey.c)
 *     CmUnloadKey @ 0x140692FD8 (CmUnloadKey.c)
 *     NtFlushKey @ 0x1406C1210 (NtFlushKey.c)
 *     NtRenameKey @ 0x1407EAD80 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1407EB270 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407EB5F0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x1407EB8B0 (NtSaveKeyEx.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmPostCallbackNotificationEx(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _SLIST_ENTRY *a6)
{
  _SLIST_ENTRY *v10; // r8
  _QWORD v12[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v13; // [rsp+50h] [rbp-48h] BYREF
  __int64 v14; // [rsp+58h] [rbp-40h]
  __int64 v15; // [rsp+60h] [rbp-38h]
  __int64 v16; // [rsp+68h] [rbp-30h]
  __int64 v17; // [rsp+70h] [rbp-28h]
  __int64 v18; // [rsp+78h] [rbp-20h]
  __int64 v19; // [rsp+80h] [rbp-18h]

  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() || a6->Next == a6 )
    return a3;
  v14 = 0LL;
  v10 = (_SLIST_ENTRY *)v12;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v12[0] = &v13;
  v12[1] = a5;
  if ( !a5 )
    v10 = 0LL;
  v13 = a2;
  LODWORD(v14) = a3;
  LODWORD(v16) = a3;
  v15 = a4;
  CmpCallCallBacksEx(a1, (__int64)&v13, v10, 0, a1, a2, a6);
  return (unsigned int)v16;
}
