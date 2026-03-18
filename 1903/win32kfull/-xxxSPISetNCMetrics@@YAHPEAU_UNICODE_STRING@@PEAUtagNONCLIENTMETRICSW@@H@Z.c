/*
 * XREFs of ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01D9F14
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00E1130 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     ?RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D9204 (-RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01D9E48 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01DA188 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 */

__int64 __fastcall xxxSPISetNCMetrics(
        struct _UNICODE_STRING *a1,
        struct tagNONCLIENTMETRICSW *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // r14d
  struct tagNONCLIENTMETRICSW *v5; // rbx
  BOOL v7; // ebp
  unsigned int v8; // esi
  int v9; // edi
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // r8d
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // esi
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // esi

  v4 = a3;
  v5 = a2;
  v7 = a3 == 0;
  v8 = 0;
  v9 = 1;
  if ( *(_DWORD *)a2 != 504 )
  {
    *(_DWORD *)a2 = 504;
    DpiForSystem = GetDpiForSystem((__int64)a1, (__int64)a2, a3, a4);
    DpiDependentMetric = GetDpiDependentMetric(29LL, DpiForSystem);
    a2 = (struct tagNONCLIENTMETRICSW *)*((unsigned int *)v5 + 1);
    *((_DWORD *)v5 + 125) = DpiDependentMetric;
    v12 = (_DWORD)a2 - DpiDependentMetric;
    *((_DWORD *)v5 + 1) = v12;
    if ( v12 < 1 )
    {
      *((_DWORD *)v5 + 1) = 1;
      v13 = 0;
      if ( (int)a2 - 1 >= 0 )
        v13 = (_DWORD)a2 - 1;
      *((_DWORD *)v5 + 125) = v13;
    }
  }
  RescaleNonClientMetrics(v5, (__int64)a2);
  v14 = 50;
  if ( *((int *)v5 + 1) > 1 )
    v9 = *((_DWORD *)v5 + 1);
  if ( v9 < 50 )
    v14 = v9;
  *((_DWORD *)v5 + 1) = v14;
  if ( v4 )
  {
    v15 = SetWindowMetricInt(a1, 0x88u, v14);
    v16 = SetWindowMetricInt(a1, 0x98u, *((_DWORD *)v5 + 2)) & v15;
    v17 = SetWindowMetricInt(a1, 0x99u, *((_DWORD *)v5 + 3)) & v16;
    v18 = SetWindowMetricInt(a1, 0x89u, *((_DWORD *)v5 + 4)) & v17;
    v19 = SetWindowMetricInt(a1, 0x8Au, *((_DWORD *)v5 + 5)) & v18;
    v20 = SetWindowMetricInt(a1, 0x8Cu, *((_DWORD *)v5 + 29)) & v19;
    v21 = SetWindowMetricInt(a1, 0x8Du, *((_DWORD *)v5 + 30)) & v20;
    v22 = SetWindowMetricInt(a1, 0x8Fu, *((_DWORD *)v5 + 54)) & v21;
    v23 = SetWindowMetricInt(a1, 0x90u, *((_DWORD *)v5 + 55)) & v22;
    v24 = FastWriteProfileValue(a1, 23LL, 139LL, 3LL, (char *)v5 + 24, 92) & v23;
    v25 = FastWriteProfileValue(a1, 23LL, 142LL, 3LL, (char *)v5 + 124, 92) & v24;
    v26 = FastWriteProfileValue(a1, 23LL, 145LL, 3LL, (char *)v5 + 224, 92) & v25;
    v27 = FastWriteProfileValue(a1, 23LL, 156LL, 3LL, (char *)v5 + 316, 92) & v26;
    v28 = FastWriteProfileValue(a1, 23LL, 157LL, 3LL, (char *)v5 + 408, 92) & v27;
    v8 = SetWindowMetricInt(a1, 0x9Eu, *((_DWORD *)v5 + 125)) & v28;
    v7 = v8;
  }
  if ( v7 )
    xxxSetAndDrawNCMetrics(a1, *((_DWORD *)v5 + 1), v5);
  return v8;
}
