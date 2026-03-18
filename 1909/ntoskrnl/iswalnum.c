/*
 * XREFs of iswalnum @ 0x1401A0F20
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x140878010 (PiDrvDbFindSystemFilePathToken.c)
 *     GetAttributeName @ 0x1408E3FF0 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x1408E56F4 (IsEncodedAttributeChar.c)
 * Callees:
 *     iswctype @ 0x1401A3358 (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
