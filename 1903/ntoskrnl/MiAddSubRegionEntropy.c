/*
 * XREFs of MiAddSubRegionEntropy @ 0x1409F0A04
 * Callers:
 *     MiAssignTopLevelRanges @ 0x1409F06A0 (MiAssignTopLevelRanges.c)
 * Callees:
 *     MiHyperSpaceSize @ 0x140075C50 (MiHyperSpaceSize.c)
 *     ExGenRandom @ 0x1400BC4C0 (ExGenRandom.c)
 */

__int64 MiAddSubRegionEntropy()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // r10

  v0 = qword_1404675A0;
  v1 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  v2 = v1 | (unsigned int)ExGenRandom(1);
  v3 = qword_1404675B0;
  qword_1404675A0 = v0 + (v2 & 0x7FFFFFFFF8LL);
  qword_140465E98[0] = ((unsigned __int64)(unsigned __int8)ExGenRandom(1) << 30) + v3;
  qword_140465ED8 = ((qword_140465E98[0] + 0x8FFFFFFFFFLL) & 0xFFFFFF8000000000uLL)
                  + ((unsigned __int64)(unsigned __int8)ExGenRandom(1) << 30);
  result = MiHyperSpaceSize();
  qword_140465EE0 = (v5 & (qword_140465ED8 + result + 0x7FFFFFFFFFLL)) - 1;
  return result;
}
