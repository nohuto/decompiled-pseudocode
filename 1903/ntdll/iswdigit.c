/*
 * XREFs of iswdigit @ 0x180090080
 * Callers:
 *     sub_1800285E0 @ 0x1800285E0 (sub_1800285E0.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
