/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x1409DE034
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_14040E854 = 100;
  byte_14040F2FC = 100;
  result = &unk_14040F2FE;
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
  word_14040E848 = 0;
  word_14040F2F0 = 0;
  dword_14040E850 = 1;
  dword_14040F2F8 = 1;
  dword_14040E84C = 1;
  dword_14040F2F4 = 1;
  word_14040E844 = 24902;
  word_14040F2EC = 24902;
  byte_14040E846 = 20;
  byte_14040F2EE = 20;
  return result;
}
