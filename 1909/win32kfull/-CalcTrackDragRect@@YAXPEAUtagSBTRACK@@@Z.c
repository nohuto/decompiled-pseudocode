/*
 * XREFs of ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02405D8
 * Callers:
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0240D08 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     xxxSBTrackInit @ 0x1C0242078 (xxxSBTrackInit.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 */

void __fastcall CalcTrackDragRect(struct tagSBTRACK *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  unsigned int DpiForSystem; // eax
  int v6; // ebx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  int DpiDependentMetric; // eax
  __int64 v10; // rcx
  int v11; // edx
  int v12; // r9d

  v3 = *(_DWORD *)a1;
  DpiForSystem = GetDpiForSystem((__int64)a1, a2, a3);
  v6 = v3 & 2;
  v7 = v6 != 0 ? 4 : 0;
  v8 = -(__int64)(v6 != 0) & 0xFFFFFFFFFFFFFFFCuLL;
  DpiDependentMetric = GetDpiDependentMetric(4 - (unsigned int)(v6 != 0), DpiForSystem);
  v10 = *((_QWORD *)a1 + 12);
  v11 = *(_DWORD *)(v10 + 24);
  v12 = 8 * (*(_DWORD *)(v10 + 28) - v11);
  *(_DWORD *)((char *)a1 + v8 + 36) = v11 - v12;
  *(_DWORD *)((char *)a1 + v7 + 32) = *(_DWORD *)(*((_QWORD *)a1 + 12) + 16LL) - 2 * DpiDependentMetric;
  *(_DWORD *)((char *)a1 + v8 + 44) = v12 + *(_DWORD *)(*((_QWORD *)a1 + 12) + 28LL);
  *(_DWORD *)((char *)a1 + v7 + 40) = 2 * DpiDependentMetric + *(_DWORD *)(*((_QWORD *)a1 + 12) + 20LL);
}
