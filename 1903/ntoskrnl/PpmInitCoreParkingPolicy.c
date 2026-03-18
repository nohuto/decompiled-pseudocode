/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x140A2169C
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_140437194 = 100;
  byte_140437C3C = 100;
  result = &unk_140437C3E;
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
  word_140437188 = 0;
  word_140437C30 = 0;
  dword_140437190 = 1;
  dword_140437C38 = 1;
  dword_14043718C = 1;
  dword_140437C34 = 1;
  word_140437184 = 24902;
  word_140437C2C = 24902;
  byte_140437186 = 20;
  byte_140437C2E = 20;
  return result;
}
