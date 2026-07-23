/*
 * XREFs of _ultow_s @ 0x14019A8B0
 * Callers:
 *     _CmCreateOrdinalInstanceKey @ 0x1406E8F20 (_CmCreateOrdinalInstanceKey.c)
 *     BiDeleteElement @ 0x14071383C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140714610 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407147F0 (BcdGetElementDataWithFlags.c)
 *     LocalConvertAclToString @ 0x1408A61B0 (LocalConvertAclToString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408AB234 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x14019AA10 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
