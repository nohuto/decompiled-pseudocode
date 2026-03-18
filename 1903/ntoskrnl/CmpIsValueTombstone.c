/*
 * XREFs of CmpIsValueTombstone @ 0x1406BF030
 * Callers:
 *     CmQueryValueKey @ 0x1405FD190 (CmQueryValueKey.c)
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1408280E4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpValueEnumStackAdvance @ 0x14083A0E8 (CmpValueEnumStackAdvance.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsValueTombstone(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 160) & 0x80000) != 0 && (*(_BYTE *)(a2 + 16) & 2) != 0;
}
