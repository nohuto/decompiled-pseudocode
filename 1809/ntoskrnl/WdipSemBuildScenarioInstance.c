/*
 * XREFs of WdipSemBuildScenarioInstance @ 0x140717AFC
 * Callers:
 *     WdipSemReserveInstanceTableEntry @ 0x140717A28 (WdipSemReserveInstanceTableEntry.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     WdipSemFastAllocate @ 0x140717DFC (WdipSemFastAllocate.c)
 */

_DWORD *__fastcall WdipSemBuildScenarioInstance(__int64 a1, __int128 *a2)
{
  _DWORD *v2; // rbx
  _DWORD *v5; // rax
  __int128 v6; // xmm0

  v2 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v5 = (_DWORD *)WdipSemFastAllocate(3LL, 544LL);
      v2 = v5;
      if ( v5 )
      {
        memset(v5, 0, 0x220uLL);
        v6 = *a2;
        v2[10] = 0;
        *((_QWORD *)v2 + 4) = a1;
        *((_OWORD *)v2 + 1) = v6;
        v2[11] = 1;
      }
    }
  }
  return v2;
}
