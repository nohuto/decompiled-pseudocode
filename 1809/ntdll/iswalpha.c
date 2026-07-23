/*
 * XREFs of iswalpha @ 0x1800937B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
