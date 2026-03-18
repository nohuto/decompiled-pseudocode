/*
 * XREFs of iswalpha @ 0x1401A081C
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x140878910 (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     iswctype @ 0x1401A2C38 (iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
