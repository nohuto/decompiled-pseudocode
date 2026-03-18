/*
 * XREFs of CmpKeyEnumStackReset @ 0x140838380
 * Callers:
 *     CmpSubtreeEnumeratorAdvance @ 0x140832F94 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorReset @ 0x1408332F8 (CmpSubtreeEnumeratorReset.c)
 * Callees:
 *     CmpResetKeyNodeStack @ 0x140832D38 (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x140837FC0 (CmpKeyEnumStackEntryCleanup.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x140838050 (CmpKeyEnumStackEntryInitialize.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140838268 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpKeyEnumStackReset(__int64 a1)
{
  __int16 v1; // di
  _QWORD *EntryAtLayerHeight; // rbx

  v1 = 0;
  *(_BYTE *)(a1 + 2) = 0;
  CmpResetKeyNodeStack((__int16 *)(a1 + 8));
  while ( v1 <= *(__int16 *)a1 )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyEnumStackGetEntryAtLayerHeight(a1, v1);
    CmpKeyEnumStackEntryCleanup(EntryAtLayerHeight);
    CmpKeyEnumStackEntryInitialize((__int64)EntryAtLayerHeight);
    ++v1;
  }
}
