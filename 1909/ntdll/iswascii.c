/*
 * XREFs of iswascii @ 0x180090700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl iswascii(wint_t C)
{
  return C < 0x80u;
}
