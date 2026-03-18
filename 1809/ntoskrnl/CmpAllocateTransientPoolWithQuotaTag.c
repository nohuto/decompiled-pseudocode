/*
 * XREFs of CmpAllocateTransientPoolWithQuotaTag @ 0x140013018
 * Callers:
 *     CmLoadDifferencingKey @ 0x1405B4DBC (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x1405B5A60 (CmCreateKey.c)
 *     NtDeleteValueKey @ 0x1405B6030 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x1405CC8E0 (NtSetValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x1405CD130 (CmpCaptureKeyValueArray.c)
 *     CmpBounceContextStart @ 0x1405D2F60 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x140640360 (NtQueryValueKey.c)
 *     CmUnloadKey @ 0x140691E38 (CmUnloadKey.c)
 *     NtCompactKeys @ 0x1407E8ED0 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407E9830 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1407E9BA0 (NtRenameKey.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400B7650 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithQuotaTag(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a2, a3);
}
