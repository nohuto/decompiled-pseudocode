/*
 * XREFs of CmpValueEnumStackCleanup @ 0x140800D38
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x14026C868 (CmpGetValueCountForKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407ED370 (CmEnumerateValueFromLayeredKey.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140804EA0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpValueEnumStackEntryCleanup @ 0x14026CA18 (CmpValueEnumStackEntryCleanup.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14080099C (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpValueEnumStackCleanup(__int64 a1)
{
  __int16 i; // di
  _QWORD *EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v4; // rcx

  for ( i = 0; i <= *(__int16 *)(a1 + 12); ++i )
  {
    EntryAtLayerHeight = (_QWORD *)CmpValueEnumStackGetEntryAtLayerHeight(a1, i);
    CmpValueEnumStackEntryCleanup(EntryAtLayerHeight);
  }
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 80);
  if ( v4 )
    CmSiFreeMemory(v4);
}
