/*
 * XREFs of PpmInitHeteroPolicy @ 0x140A1A2F4
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PpmInitHeteroPolicy()
{
  char *v0; // rdx
  unsigned int v1; // r8d
  char v2; // cl
  char v3; // cl
  char v4; // cl
  __int64 result; // rax

  PpmHeteroMinRelativePerformance = 0x10000;
  v0 = (char *)&unk_14043814D;
  v1 = 0;
  do
  {
    v2 = v1 != 0 ? 80 : 90;
    *(v0 - 2728) = v2;
    *v0 = v2;
    v3 = -(v1++ != 0);
    v4 = (v3 & 0x14) + 30;
    *(v0 - 4008) = v4;
    *(v0 - 1280) = v4;
    ++v0;
  }
  while ( v1 < 0x40 );
  result = 5LL;
  byte_1404371A3 = 3;
  dword_140437BAC = 5;
  dword_140438654 = 5;
  dword_140437BA8 = 5;
  dword_140438650 = 5;
  byte_140437C4B = 3;
  word_140437BA5 = 12850;
  word_14043864D = 12850;
  return result;
}
