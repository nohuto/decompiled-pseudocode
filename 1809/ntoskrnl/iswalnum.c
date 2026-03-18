/*
 * XREFs of iswalnum @ 0x140196010
 * Callers:
 *     GetAttributeName @ 0x1408A7390 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x1408A8B44 (IsEncodedAttributeChar.c)
 * Callees:
 *     iswctype @ 0x1401983C8 (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
