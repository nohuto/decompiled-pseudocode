/*
 * XREFs of iswalnum @ 0x140196030
 * Callers:
 *     GetAttributeName @ 0x1408A7370 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x1408A8B24 (IsEncodedAttributeChar.c)
 * Callees:
 *     iswctype @ 0x1401983E8 (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
