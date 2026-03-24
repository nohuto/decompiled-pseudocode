/*
 * XREFs of _ultow_s @ 0x14019A770
 * Callers:
 *     _CmCreateOrdinalInstanceKey @ 0x1406E7C80 (_CmCreateOrdinalInstanceKey.c)
 *     BiDeleteElement @ 0x14071259C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140713370 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140713550 (BcdGetElementDataWithFlags.c)
 *     LocalConvertAclToString @ 0x1408A4F50 (LocalConvertAclToString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408A9FD4 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x14019A8D0 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
