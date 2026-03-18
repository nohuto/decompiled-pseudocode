/*
 * XREFs of CmpValueEnumStackGetEntryAtLayerHeight @ 0x14080099C
 * Callers:
 *     CmpValueEnumStackGetCurrentValueHive @ 0x14026CA70 (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14026CA8C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpSortedValueEnumStackAdvanceInternal @ 0x140800668 (CmpSortedValueEnumStackAdvanceInternal.c)
 *     CmpSortedValueEnumStackCleanup @ 0x140800770 (CmpSortedValueEnumStackCleanup.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140800A00 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackAdvance @ 0x140800BDC (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x140800D38 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x140800DE0 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpValueEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 < 2 )
    return a1 + 32LL * a2 + 16;
  else
    return *(_QWORD *)(a1 + 80) + 32LL * (__int16)(a2 - 2);
}
