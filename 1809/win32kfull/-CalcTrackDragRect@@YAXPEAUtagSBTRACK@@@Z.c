/*
 * XREFs of ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C022856C
 * Callers:
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02288AC (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     xxxSBTrackInit @ 0x1C0229BD0 (xxxSBTrackInit.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 */

void __fastcall CalcTrackDragRect(struct tagSBTRACK *a1)
{
  int v1; // ebx
  unsigned int DpiForSystem; // eax
  int v4; // ebx
  __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  __int64 v7; // r8
  int DpiDependentMetric; // eax
  __int64 v9; // rcx
  int v10; // edx
  int v11; // r9d

  v1 = *(_DWORD *)a1;
  DpiForSystem = GetDpiForSystem();
  v4 = v1 & 2;
  v5 = v4 != 0 ? 4 : 0;
  v6 = -(__int64)(v4 != 0) & 0xFFFFFFFFFFFFFFFCuLL;
  DpiDependentMetric = GetDpiDependentMetric(4 - (unsigned int)(v4 != 0), DpiForSystem, v7);
  v9 = *((_QWORD *)a1 + 12);
  v10 = *(_DWORD *)(v9 + 24);
  v11 = 8 * (*(_DWORD *)(v9 + 28) - v10);
  *(_DWORD *)((char *)a1 + v6 + 36) = v10 - v11;
  *(_DWORD *)((char *)a1 + v5 + 32) = *(_DWORD *)(*((_QWORD *)a1 + 12) + 16LL) - 2 * DpiDependentMetric;
  *(_DWORD *)((char *)a1 + v6 + 44) = v11 + *(_DWORD *)(*((_QWORD *)a1 + 12) + 28LL);
  *(_DWORD *)((char *)a1 + v5 + 40) = 2 * DpiDependentMetric + *(_DWORD *)(*((_QWORD *)a1 + 12) + 20LL);
}
