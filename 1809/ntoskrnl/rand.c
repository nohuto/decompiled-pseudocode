/*
 * XREFs of rand @ 0x140196BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_140402E90 = 214013 * dword_140402E90 + 2531011;
  return (dword_140402E90 >> 16) & 0x7FFF;
}
