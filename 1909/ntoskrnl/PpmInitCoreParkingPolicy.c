/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x140A21780
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_140437114 = 100;
  byte_140437BBC = 100;
  result = &unk_140437BBE;
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
  word_140437108 = 0;
  word_140437BB0 = 0;
  dword_140437110 = 1;
  dword_140437BB8 = 1;
  dword_14043710C = 1;
  dword_140437BB4 = 1;
  word_140437104 = 24902;
  word_140437BAC = 24902;
  byte_140437106 = 20;
  byte_140437BAE = 20;
  return result;
}
