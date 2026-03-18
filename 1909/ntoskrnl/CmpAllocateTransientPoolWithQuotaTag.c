/*
 * XREFs of CmpAllocateTransientPoolWithQuotaTag @ 0x14008CFF8
 * Callers:
 *     NtQueryValueKey @ 0x1405FEFD0 (NtQueryValueKey.c)
 *     CmpBounceContextStart @ 0x1406002B0 (CmpBounceContextStart.c)
 *     NtSetValueKey @ 0x140630190 (NtSetValueKey.c)
 *     CmLoadDifferencingKey @ 0x14063BC6C (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x14063C850 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14063DE1C (CmpCaptureKeyValueArray.c)
 *     CmCreateKey @ 0x14063E600 (CmCreateKey.c)
 *     CmUnloadKey @ 0x1406B8CA4 (CmUnloadKey.c)
 *     NtCompactKeys @ 0x140823240 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140823B70 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140823E80 (NtRenameKey.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithQuotaTag(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a2, a3);
}
