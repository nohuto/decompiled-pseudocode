/*
 * XREFs of CmpValueEnumStackGetEntryAtLayerHeight @ 0x1408394F8
 * Callers:
 *     CmpValueEnumStackGetCurrentValueHive @ 0x140280360 (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14028037C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpSortedValueEnumStackAdvanceInternal @ 0x1408391C8 (CmpSortedValueEnumStackAdvanceInternal.c)
 *     CmpSortedValueEnumStackCleanup @ 0x1408392D0 (CmpSortedValueEnumStackCleanup.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14083955C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackAdvance @ 0x140839748 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x1408398A4 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x140839950 (CmpValueEnumStackMatchingValueInUpperLayer.c)
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
