/*
 * XREFs of iswalnum @ 0x140196170
 * Callers:
 *     GetAttributeName @ 0x1408A85D0 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x1408A9D84 (IsEncodedAttributeChar.c)
 * Callees:
 *     iswctype @ 0x140198528 (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
