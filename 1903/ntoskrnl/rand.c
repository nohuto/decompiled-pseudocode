/*
 * XREFs of rand @ 0x1401A1270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_140428190 = 214013 * dword_140428190 + 2531011;
  return (dword_140428190 >> 16) & 0x7FFF;
}
