/*
 * XREFs of CmpKeyEnumStackReset @ 0x1407FF9A0
 * Callers:
 *     CmpSubtreeEnumeratorAdvance @ 0x1407FA5CC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorReset @ 0x1407FA8F4 (CmpSubtreeEnumeratorReset.c)
 * Callees:
 *     CmpResetKeyNodeStack @ 0x1407FA378 (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x1407FF5E8 (CmpKeyEnumStackEntryCleanup.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x1407FF678 (CmpKeyEnumStackEntryInitialize.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1407FF888 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpKeyEnumStackReset(__int64 a1)
{
  __int16 v1; // di
  _QWORD *EntryAtLayerHeight; // rbx

  v1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
  CmpResetKeyNodeStack((__int16 *)(a1 + 8));
  while ( v1 <= *(__int16 *)a1 )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyEnumStackGetEntryAtLayerHeight(a1, v1);
    CmpKeyEnumStackEntryCleanup(EntryAtLayerHeight);
    CmpKeyEnumStackEntryInitialize((__int64)EntryAtLayerHeight);
    ++v1;
  }
}
