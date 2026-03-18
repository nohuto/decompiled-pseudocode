/*
 * XREFs of ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C00E122C
 * Callers:
 *     ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x1C00E1194 (-xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C00C3B70 (xxxInternalInvalidate.c)
 *     SetMinMetrics @ 0x1C00E463C (SetMinMetrics.c)
 *     xxxMetricsRecalc @ 0x1C01DA8E4 (xxxMetricsRecalc.c)
 */

__int64 __fastcall xxxSetAndDrawMinMetrics(struct _UNICODE_STRING *a1, struct tagMINIMIZEDMETRICS *a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // edx
  struct tagWND *v5; // rbx
  int v6; // r8d
  __int64 v7; // rax

  v2 = *(_DWORD *)(gpsi + 2124LL);
  v3 = *(_DWORD *)(gpsi + 2128LL);
  SetMinMetrics(a1);
  v4 = *(_DWORD *)(gpsi + 2124LL) - v2;
  v5 = 0LL;
  v6 = *(_DWORD *)(gpsi + 2128LL) - v3;
  if ( v4 || v6 )
    xxxMetricsRecalc(4, v4, v6, 0, 0, 0, 0);
  v7 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v7 )
    v5 = *(struct tagWND **)(*(_QWORD *)(v7 + 8) + 24LL);
  xxxInternalInvalidate(v5, (HRGN)1, 0x10485u);
  return 1LL;
}
