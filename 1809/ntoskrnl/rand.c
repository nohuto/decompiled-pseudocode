/*
 * XREFs of rand @ 0x140196A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_140401E90 = 214013 * dword_140401E90 + 2531011;
  return (dword_140401E90 >> 16) & 0x7FFF;
}
