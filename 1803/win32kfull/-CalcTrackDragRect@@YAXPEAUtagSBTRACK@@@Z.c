/*
 * XREFs of ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C01FFB84
 * Callers:
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C01FFE90 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     xxxSBTrackInit @ 0x1C020117C (xxxSBTrackInit.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 */

void __fastcall CalcTrackDragRect(struct tagSBTRACK *a1)
{
  int v1; // ebx
  _DWORD *v2; // rsi
  unsigned int DpiForSystem; // eax
  int v5; // ebx
  _DWORD *v6; // rdi
  int DpiDependentMetric; // eax
  __int64 v8; // rcx
  int v9; // edx
  int v10; // r9d

  v1 = *(_DWORD *)a1;
  v2 = (_DWORD *)((char *)a1 + 32);
  DpiForSystem = GetDpiForSystem();
  v5 = v1 & 2;
  v6 = v2 + 1;
  if ( !v5 )
    v6 = v2++;
  DpiDependentMetric = GetDpiDependentMetric(4 - (unsigned int)(v5 != 0), DpiForSystem);
  v8 = *((_QWORD *)a1 + 12);
  v9 = *(_DWORD *)(v8 + 24);
  v10 = 8 * (*(_DWORD *)(v8 + 28) - v9);
  *v2 = v9 - v10;
  *v6 = *(_DWORD *)(*((_QWORD *)a1 + 12) + 16LL) - 2 * DpiDependentMetric;
  v2[2] = v10 + *(_DWORD *)(*((_QWORD *)a1 + 12) + 28LL);
  v6[2] = 2 * DpiDependentMetric + *(_DWORD *)(*((_QWORD *)a1 + 12) + 20LL);
}
