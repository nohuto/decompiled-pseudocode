/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x140280334
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14028037C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackInitialize @ 0x140839904 (CmpValueEnumStackInitialize.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvpGetCellContextInitialize @ 0x1408321CC (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(char *a1)
{
  memset(a1, 0, 0x20uLL);
  return HvpGetCellContextInitialize(a1 + 16);
}
