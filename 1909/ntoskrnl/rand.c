/*
 * XREFs of rand @ 0x1401A1990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_1404281A0 = 214013 * dword_1404281A0 + 2531011;
  return (dword_1404281A0 >> 16) & 0x7FFF;
}
