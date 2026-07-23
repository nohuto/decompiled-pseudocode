/*
 * XREFs of MiAddSubRegionEntropy @ 0x1409D3DC0
 * Callers:
 *     MiAssignTopLevelRanges @ 0x1409D3A80 (MiAssignTopLevelRanges.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 */

unsigned __int64 MiAddSubRegionEntropy()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int64 result; // rax

  v0 = qword_14043CB70;
  v1 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  v2 = v1 | (unsigned int)ExGenRandom(1);
  v3 = qword_14043CB80;
  qword_14043CB70 = v0 + (v2 & 0x7FFFFFFFF8LL);
  qword_14043B5A8[0] = ((unsigned __int64)(unsigned __int8)ExGenRandom(1) << 30) + v3;
  result = ((unsigned __int64)(unsigned __int8)ExGenRandom(1) << 30)
         + ((qword_14043B5A8[0] + 0x8FFFFFFFFFLL) & 0xFFFFFF8000000000uLL);
  qword_14043B5E8 = result;
  qword_14043B5F0 = ((result + 0x8010803FFFLL) & 0xFFFFFF8000000000uLL) - 1;
  return result;
}
