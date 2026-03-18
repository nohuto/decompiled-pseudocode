/*
 * XREFs of MmAreBaseSystemImagesWriteProtected @ 0x14019E360
 * Callers:
 *     KiVerifyXcpt15 @ 0x1409D02F0 (KiVerifyXcpt15.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 */

_BOOL8 MmAreBaseSystemImagesWriteProtected()
{
  return !(unsigned int)MI_IS_PHYSICAL_ADDRESS(0x140000000LL)
      && !(unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)PsHalImageBase);
}
