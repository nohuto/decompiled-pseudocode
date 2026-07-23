/*
 * XREFs of iswprint @ 0x180093810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl iswprint(wint_t C)
{
  return iswctype(C, 0x157u);
}
