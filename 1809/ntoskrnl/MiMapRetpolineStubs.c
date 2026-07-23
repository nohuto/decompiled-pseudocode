/*
 * XREFs of MiMapRetpolineStubs @ 0x140854EDC
 * Callers:
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409B98C4 (MiApplyRetpolineToBootDrivers.c)
 * Callees:
 *     MiMapSinglePage @ 0x14012194C (MiMapSinglePage.c)
 */

__int64 __fastcall MiMapRetpolineStubs(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 i; // rdi

  v2 = 0;
  v3 = qword_140439EF8;
  for ( i = a1 + ((a2 + ((unsigned int)dword_140439F34 >> 12) + ((dword_140439F34 & 0xFFF) != 0)) << 12);
        v2 < dword_140439F20;
        ++v2 )
  {
    MiMapSinglePage(i + (v2 << 12), *(_QWORD *)(v3 + 8LL * v2 + 48), 0x80000000, 0);
  }
  return i;
}
