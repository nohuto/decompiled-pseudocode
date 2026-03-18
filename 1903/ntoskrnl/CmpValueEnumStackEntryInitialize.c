/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x1402805D4
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14028061C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackInitialize @ 0x14083A2A4 (CmpValueEnumStackInitialize.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvpGetCellContextInitialize @ 0x140832B6C (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(char *a1)
{
  memset(a1, 0, 0x20uLL);
  return HvpGetCellContextInitialize(a1 + 16);
}
