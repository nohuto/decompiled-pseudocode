/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x1409DF034
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_14040F8D4 = 100;
  byte_14041037C = 100;
  result = &unk_14041037E;
  do
  {
    *(result - 2728) = 100;
    *result = 100;
    *(result - 2749) = 0;
    *(result - 21) = 0;
    ++result;
    --v0;
  }
  while ( v0 );
  word_14040F8C8 = 0;
  word_140410370 = 0;
  dword_14040F8D0 = 1;
  dword_140410378 = 1;
  dword_14040F8CC = 1;
  dword_140410374 = 1;
  word_14040F8C4 = 24902;
  word_14041036C = 24902;
  byte_14040F8C6 = 20;
  byte_14041036E = 20;
  return result;
}
