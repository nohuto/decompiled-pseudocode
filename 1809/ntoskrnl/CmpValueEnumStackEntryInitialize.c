/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x14026CD34
 * Callers:
 *     CmpValueEnumStackInitialize @ 0x140801F78 (CmpValueEnumStackInitialize.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     HvpGetCellContextInitialize @ 0x1407FA888 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(char *a1)
{
  memset(a1, 0, 0x20uLL);
  return HvpGetCellContextInitialize(a1 + 16);
}
