/*
 * XREFs of _ultow_s @ 0x14019A750
 * Callers:
 *     _CmCreateOrdinalInstanceKey @ 0x1406E7CA0 (_CmCreateOrdinalInstanceKey.c)
 *     BiDeleteElement @ 0x1407125BC (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140713390 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140713570 (BcdGetElementDataWithFlags.c)
 *     LocalConvertAclToString @ 0x1408A4F70 (LocalConvertAclToString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408A9FF4 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x14019A8B0 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
