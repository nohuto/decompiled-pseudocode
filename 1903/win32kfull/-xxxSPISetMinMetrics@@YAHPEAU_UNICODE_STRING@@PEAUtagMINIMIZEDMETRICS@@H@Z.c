/*
 * XREFs of ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x1C00E1194
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00E1130 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C00E122C (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01D9E48 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 */

__int64 __fastcall xxxSPISetMinMetrics(struct _UNICODE_STRING *a1, struct tagMINIMIZEDMETRICS *a2, int a3)
{
  BOOL v6; // r14d
  unsigned int v7; // edi
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // ax
  INT v11; // ebx
  int v12; // edi
  int v13; // edi
  int v14; // edi

  v6 = a3 == 0;
  v7 = 0;
  v8 = *(_WORD *)(PsGetCurrentProcessWin32Process(a1, a2) + 284);
  v9 = *(_WORD *)(gpsi + 6998LL);
  if ( v8 != v9 )
  {
    v11 = v8;
    *((_DWORD *)a2 + 1) = EngMulDiv(*((_DWORD *)a2 + 1), v9, v8);
    *((_DWORD *)a2 + 2) = EngMulDiv(*((_DWORD *)a2 + 2), *(unsigned __int16 *)(gpsi + 6998LL), v11);
    *((_DWORD *)a2 + 3) = EngMulDiv(*((_DWORD *)a2 + 3), *(unsigned __int16 *)(gpsi + 6998LL), v11);
  }
  if ( a3 )
  {
    v12 = SetWindowMetricInt(a1, 0x92u, *((_DWORD *)a2 + 1));
    v13 = SetWindowMetricInt(a1, 0x93u, *((_DWORD *)a2 + 2)) & v12;
    v14 = SetWindowMetricInt(a1, 0x94u, *((_DWORD *)a2 + 3)) & v13;
    v7 = SetWindowMetricInt(a1, 0x96u, *((_DWORD *)a2 + 4)) & v14;
    v6 = v7;
  }
  if ( v6 )
    xxxSetAndDrawMinMetrics(a1, a2);
  return v7;
}
