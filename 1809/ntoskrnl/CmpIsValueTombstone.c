/*
 * XREFs of CmpIsValueTombstone @ 0x1406CEEA8
 * Callers:
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1407EE82C (CmQueryMultipleValueForLayeredKey.c)
 *     CmpValueEnumStackAdvance @ 0x140801DBC (CmpValueEnumStackAdvance.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsValueTombstone(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 160) & 0x80000) != 0 && (*(_BYTE *)(a2 + 16) & 2) != 0;
}
