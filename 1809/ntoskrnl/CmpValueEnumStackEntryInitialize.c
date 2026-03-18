/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x14026CA44
 * Callers:
 *     CmpValueEnumStackInitialize @ 0x140800D98 (CmpValueEnumStackInitialize.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 *     HvpGetCellContextInitialize @ 0x1407F96A8 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(char *a1)
{
  memset(a1, 0, 0x20uLL);
  return HvpGetCellContextInitialize(a1 + 16);
}
