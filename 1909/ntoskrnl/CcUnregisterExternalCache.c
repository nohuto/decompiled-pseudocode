/*
 * XREFs of CcUnregisterExternalCache @ 0x14027CE90
 * Callers:
 *     <none>
 * Callees:
 *     CcDeductDirtyPagesFromExternalCache @ 0x14016D790 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcRemoveExternalCache @ 0x14027CDB0 (CcRemoveExternalCache.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall CcUnregisterExternalCache(_QWORD *P)
{
  CcRemoveExternalCache((__int64)P);
  CcDeductDirtyPagesFromExternalCache((__int64)P, P[1]);
  ExFreePoolWithTag(P, 0x43456343u);
}
