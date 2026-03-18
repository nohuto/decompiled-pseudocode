/*
 * XREFs of CmpAddValueToList @ 0x140838E98
 * Callers:
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406E3A58 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpSyncKeyValues @ 0x140836F84 (CmpSyncKeyValues.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14083DC90 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmpAddValueToListEx @ 0x140632D40 (CmpAddValueToListEx.c)
 */

__int64 __fastcall CmpAddValueToList(ULONG_PTR a1, int a2, unsigned int a3, unsigned int a4, unsigned int *a5)
{
  return CmpAddValueToListEx(a1, a2, a3, a4, a5, 1);
}
