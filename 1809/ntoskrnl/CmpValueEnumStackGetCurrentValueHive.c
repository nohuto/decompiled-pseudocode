/*
 * XREFs of CmpValueEnumStackGetCurrentValueHive @ 0x14026CA70
 * Callers:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140804EA0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14080099C (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpValueEnumStackGetCurrentValueHive(__int64 a1)
{
  return *(_QWORD *)CmpValueEnumStackGetEntryAtLayerHeight(a1, *(unsigned __int16 *)(a1 + 6));
}
