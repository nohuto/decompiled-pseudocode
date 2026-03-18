/*
 * XREFs of CmpAddValueToList @ 0x140839838
 * Callers:
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406E23D8 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpSyncKeyValues @ 0x140837924 (CmpSyncKeyValues.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14083E630 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmpAddValueToListEx @ 0x14062EEC0 (CmpAddValueToListEx.c)
 */

__int64 __fastcall CmpAddValueToList(ULONG_PTR a1, int a2, unsigned int a3, unsigned int a4, unsigned int *a5)
{
  return CmpAddValueToListEx(a1, a2, a3, a4, a5, 1);
}
