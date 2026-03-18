/*
 * XREFs of _ultow_s @ 0x1401A4FE0
 * Callers:
 *     LocalConvertAclToString @ 0x1405B28CC (LocalConvertAclToString.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140703888 (_CmCreateOrdinalInstanceKey.c)
 *     BiDeleteElement @ 0x14073C8D8 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14073D70C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14073D8EC (BcdGetElementDataWithFlags.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408E7210 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x1401A5140 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
