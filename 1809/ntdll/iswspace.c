/*
 * XREFs of iswspace @ 0x180093820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
