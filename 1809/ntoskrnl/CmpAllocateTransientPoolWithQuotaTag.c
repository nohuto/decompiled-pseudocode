/*
 * XREFs of CmpAllocateTransientPoolWithQuotaTag @ 0x140013018
 * Callers:
 *     CmLoadDifferencingKey @ 0x1405B5DBC (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x1405B6A60 (CmCreateKey.c)
 *     NtDeleteValueKey @ 0x1405B7030 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x1405CD8E0 (NtSetValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x1405CE130 (CmpCaptureKeyValueArray.c)
 *     CmpBounceContextStart @ 0x1405D3F60 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x140641360 (NtQueryValueKey.c)
 *     CmUnloadKey @ 0x140692FD8 (CmUnloadKey.c)
 *     NtCompactKeys @ 0x1407EA0B0 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407EAA10 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1407EAD80 (NtRenameKey.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithQuotaTag(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a2, a3);
}
