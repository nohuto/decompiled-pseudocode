/*
 * XREFs of ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01C6B50
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00C14C4 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     ?RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01C5E60 (-RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01C6A84 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01C6DC4 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 */

__int64 __fastcall xxxSPISetNCMetrics(struct _UNICODE_STRING *a1, struct tagNONCLIENTMETRICSW *a2, int a3)
{
  BOOL v6; // ebp
  unsigned int v7; // esi
  int v8; // edi
  unsigned int DpiForSystem; // eax
  __int64 v10; // r8
  int DpiDependentMetric; // eax
  int v12; // edx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // r8d
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
  int v29; // esi

  v6 = a3 == 0;
  v7 = 0;
  v8 = 1;
  if ( *(_DWORD *)a2 != 504 )
  {
    *(_DWORD *)a2 = 504;
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(29LL, DpiForSystem, v10);
    v12 = *((_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 125) = DpiDependentMetric;
    v13 = v12 - DpiDependentMetric;
    *((_DWORD *)a2 + 1) = v13;
    if ( v13 < 1 )
    {
      *((_DWORD *)a2 + 1) = 1;
      v14 = 0;
      if ( v12 - 1 >= 0 )
        v14 = v12 - 1;
      *((_DWORD *)a2 + 125) = v14;
    }
  }
  RescaleNonClientMetrics(a2);
  v15 = 50;
  if ( *((int *)a2 + 1) > 1 )
    v8 = *((_DWORD *)a2 + 1);
  if ( v8 < 50 )
    v15 = v8;
  *((_DWORD *)a2 + 1) = v15;
  if ( a3 )
  {
    v16 = SetWindowMetricInt(a1, 0x88u, v15);
    v17 = SetWindowMetricInt(a1, 0x98u, *((_DWORD *)a2 + 2)) & v16;
    v18 = SetWindowMetricInt(a1, 0x99u, *((_DWORD *)a2 + 3)) & v17;
    v19 = SetWindowMetricInt(a1, 0x89u, *((_DWORD *)a2 + 4)) & v18;
    v20 = SetWindowMetricInt(a1, 0x8Au, *((_DWORD *)a2 + 5)) & v19;
    v21 = SetWindowMetricInt(a1, 0x8Cu, *((_DWORD *)a2 + 29)) & v20;
    v22 = SetWindowMetricInt(a1, 0x8Du, *((_DWORD *)a2 + 30)) & v21;
    v23 = SetWindowMetricInt(a1, 0x8Fu, *((_DWORD *)a2 + 54)) & v22;
    v24 = SetWindowMetricInt(a1, 0x90u, *((_DWORD *)a2 + 55)) & v23;
    v25 = FastWriteProfileValue(a1, 23LL, 139LL, 3LL, (char *)a2 + 24, 92) & v24;
    v26 = FastWriteProfileValue(a1, 23LL, 142LL, 3LL, (char *)a2 + 124, 92) & v25;
    v27 = FastWriteProfileValue(a1, 23LL, 145LL, 3LL, (char *)a2 + 224, 92) & v26;
    v28 = FastWriteProfileValue(a1, 23LL, 156LL, 3LL, (char *)a2 + 316, 92) & v27;
    v29 = FastWriteProfileValue(a1, 23LL, 157LL, 3LL, (char *)a2 + 408, 92) & v28;
    v7 = SetWindowMetricInt(a1, 0x9Eu, *((_DWORD *)a2 + 125)) & v29;
    v6 = v7;
  }
  if ( v6 )
    xxxSetAndDrawNCMetrics(a1, *((_DWORD *)a2 + 1), a2);
  return v7;
}
