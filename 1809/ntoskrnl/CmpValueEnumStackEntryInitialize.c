/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x14026CB44
 * Callers:
 *     CmpValueEnumStackInitialize @ 0x140800D78 (CmpValueEnumStackInitialize.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     HvpGetCellContextInitialize @ 0x1407F9688 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(char *a1)
{
  memset(a1, 0, 0x20uLL);
  return HvpGetCellContextInitialize(a1 + 16);
}
