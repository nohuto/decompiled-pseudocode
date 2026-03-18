/*
 * XREFs of ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0240BF8
 * Callers:
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0241328 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     xxxSBTrackInit @ 0x1C0242698 (xxxSBTrackInit.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 */

void __fastcall CalcTrackDragRect(struct tagSBTRACK *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int DpiForSystem; // eax
  int v7; // ebx
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  int DpiDependentMetric; // eax
  __int64 v11; // rcx
  int v12; // edx
  int v13; // r9d

  v4 = *(_DWORD *)a1;
  DpiForSystem = GetDpiForSystem((__int64)a1, a2, a3, a4);
  v7 = v4 & 2;
  v8 = v7 != 0 ? 4 : 0;
  v9 = -(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFFFCuLL;
  DpiDependentMetric = GetDpiDependentMetric(4 - (unsigned int)(v7 != 0), DpiForSystem);
  v11 = *((_QWORD *)a1 + 12);
  v12 = *(_DWORD *)(v11 + 24);
  v13 = 8 * (*(_DWORD *)(v11 + 28) - v12);
  *(_DWORD *)((char *)a1 + v9 + 36) = v12 - v13;
  *(_DWORD *)((char *)a1 + v8 + 32) = *(_DWORD *)(*((_QWORD *)a1 + 12) + 16LL) - 2 * DpiDependentMetric;
  *(_DWORD *)((char *)a1 + v9 + 44) = v13 + *(_DWORD *)(*((_QWORD *)a1 + 12) + 28LL);
  *(_DWORD *)((char *)a1 + v8 + 40) = 2 * DpiDependentMetric + *(_DWORD *)(*((_QWORD *)a1 + 12) + 20LL);
}
