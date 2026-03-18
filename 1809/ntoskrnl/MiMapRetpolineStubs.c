/*
 * XREFs of MiMapRetpolineStubs @ 0x140853C9C
 * Callers:
 *     MmLoadSystemImageEx @ 0x140681018 (MmLoadSystemImageEx.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409B88C4 (MiApplyRetpolineToBootDrivers.c)
 * Callees:
 *     MiMapSinglePage @ 0x14012185C (MiMapSinglePage.c)
 */

__int64 __fastcall MiMapRetpolineStubs(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 i; // rdi

  v2 = 0;
  v3 = qword_140438E38;
  for ( i = a1 + ((a2 + ((unsigned int)dword_140438E74 >> 12) + ((dword_140438E74 & 0xFFF) != 0)) << 12);
        v2 < dword_140438E60;
        ++v2 )
  {
    MiMapSinglePage(i + (v2 << 12), *(_QWORD *)(v3 + 8LL * v2 + 48), 0x80000000, 0);
  }
  return i;
}
