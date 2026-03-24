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
  byte_14040E874 = 100;
  byte_14040F31C = 100;
  result = &unk_14040F31E;
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
  word_14040E868 = 0;
  word_14040F310 = 0;
  dword_14040E870 = 1;
  dword_14040F318 = 1;
  dword_14040E86C = 1;
  dword_14040F314 = 1;
  word_14040E864 = 24902;
  word_14040F30C = 24902;
  byte_14040E866 = 20;
  byte_14040F30E = 20;
  return result;
}
