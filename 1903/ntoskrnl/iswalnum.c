/*
 * XREFs of iswalnum @ 0x1401A0800
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x140878910 (PiDrvDbFindSystemFilePathToken.c)
 *     GetAttributeName @ 0x1408E46E8 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x1408E5DEC (IsEncodedAttributeChar.c)
 * Callees:
 *     iswctype @ 0x1401A2C38 (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
