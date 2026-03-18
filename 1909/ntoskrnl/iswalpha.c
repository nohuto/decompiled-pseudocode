/*
 * XREFs of iswalpha @ 0x1401A0F3C
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x140878010 (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     iswctype @ 0x1401A3358 (iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
