/*
 * XREFs of CmpIsValueTombstone @ 0x1406BEAE0
 * Callers:
 *     CmQueryValueKey @ 0x1405FE220 (CmQueryValueKey.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1408277E4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpValueEnumStackAdvance @ 0x140839748 (CmpValueEnumStackAdvance.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsValueTombstone(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 160) & 0x80000) != 0 && (*(_BYTE *)(a2 + 16) & 2) != 0;
}
