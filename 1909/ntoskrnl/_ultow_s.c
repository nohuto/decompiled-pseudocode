/*
 * XREFs of _ultow_s @ 0x1401A5700
 * Callers:
 *     LocalConvertAclToString @ 0x1405B2CA8 (LocalConvertAclToString.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140705668 (_CmCreateOrdinalInstanceKey.c)
 *     BiDeleteElement @ 0x14073E7D8 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14073F60C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14073F7EC (BcdGetElementDataWithFlags.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408E6B18 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x1401A5860 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
