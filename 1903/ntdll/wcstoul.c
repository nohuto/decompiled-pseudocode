/*
 * XREFs of wcstoul @ 0x1800928A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009261C @ 0x18009261C (sub_18009261C.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return sub_18009261C((__int64)&off_180118AE8, (unsigned __int16 *)String, EndPtr, Radix, 1, 0);
}
