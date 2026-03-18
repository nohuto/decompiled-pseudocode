/*
 * XREFs of CmpAllocateTransientPoolWithQuotaTag @ 0x14008BCF8
 * Callers:
 *     NtQueryValueKey @ 0x1405FD5A0 (NtQueryValueKey.c)
 *     CmpBounceContextStart @ 0x1405FE880 (CmpBounceContextStart.c)
 *     NtSetValueKey @ 0x14062C340 (NtSetValueKey.c)
 *     CmLoadDifferencingKey @ 0x140638BDC (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x1406397C0 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14063AD8C (CmpCaptureKeyValueArray.c)
 *     CmCreateKey @ 0x14063B570 (CmCreateKey.c)
 *     CmUnloadKey @ 0x14069A6C4 (CmUnloadKey.c)
 *     NtCompactKeys @ 0x140823B40 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140824470 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140824780 (NtRenameKey.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithQuotaTag(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a2, a3);
}
