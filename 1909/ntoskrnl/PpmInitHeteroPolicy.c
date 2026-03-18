/*
 * XREFs of PpmInitHeteroPolicy @ 0x140A1A56C
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
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
  v0 = (char *)&unk_1404380CD;
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
  byte_140437123 = 3;
  dword_140437B2C = 5;
  dword_1404385D4 = 5;
  dword_140437B28 = 5;
  dword_1404385D0 = 5;
  byte_140437BCB = 3;
  word_140437B25 = 12850;
  word_1404385CD = 12850;
  return result;
}
