/*
 * XREFs of PpmInitHeteroPolicy @ 0x1409D731C
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PpmInitHeteroPolicy()
{
  char *v0; // rdx
  unsigned int v1; // r8d
  char v2; // cl
  __int64 result; // rax
  char v4; // cl
  char v5; // cl

  PpmHeteroMinRelativePerformance = 0x10000;
  v0 = (char *)&unk_14040F82D;
  v1 = 0;
  do
  {
    v2 = v1 != 0 ? 80 : 90;
    *(v0 - 2728) = v2;
    result = -v1;
    *v0 = v2;
    v4 = -(v1++ != 0);
    v5 = (v4 & 0x14) + 30;
    *(v0 - 4008) = v5;
    *(v0 - 1280) = v5;
    ++v0;
  }
  while ( v1 < 0x40 );
  byte_14040E883 = 3;
  byte_14040F32B = 3;
  word_14040F285 = 12850;
  word_14040FD2D = 12850;
  return result;
}
