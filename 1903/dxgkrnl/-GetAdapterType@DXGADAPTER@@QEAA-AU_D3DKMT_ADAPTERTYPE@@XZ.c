/*
 * XREFs of ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00FF710
 * Callers:
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00DFCEC (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EAD1C (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0122320 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015DEE0 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015E4D8 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C01EE3E0 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01EEFE8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     <none>
 */

int *__fastcall DXGADAPTER::GetAdapterType(DXGADAPTER *this, int *a2)
{
  int v2; // r11d
  int v4; // r9d
  int v5; // eax
  int v6; // ecx
  int v7; // r9d
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  bool v11; // cc
  int v13; // ecx
  int v14; // eax

  v2 = 0;
  v4 = *((_DWORD *)this + 77) & 4 | (*((_QWORD *)this + 320) != 0LL) | (2
                                                                      * ((4 * (*((_DWORD *)this + 77) & 1)) | (*((_QWORD *)this + 319) != 0LL)));
  v5 = 0;
  if ( (*((_DWORD *)this + 77) & 0x100) != 0 )
    v5 = 64;
  v6 = 0;
  v7 = v5 | v4;
  if ( *((_BYTE *)this + 185) )
    v6 = 128;
  v8 = v6 | v7 | (*((_BYTE *)this + 188) != 0 ? 0x100 : 0);
  if ( *((int *)this + 546) >= 8704
    && *((_DWORD *)this + 432) >= 0x7007u
    && *((_QWORD *)this + 131)
    && *((_QWORD *)this + 112) )
  {
    v2 = 512;
  }
  v9 = *((_DWORD *)this + 606);
  v10 = v2 | v8 | (16 * (*((_BYTE *)this + 2391) & 1 | (2 * ((16 * (v9 & 2)) | *((_BYTE *)this + 2396) & 1))));
  v11 = *((_DWORD *)this + 613) < 2600;
  *a2 = v10;
  if ( !v11 && (v9 & 8) != 0 )
  {
    v13 = *((_DWORD *)this + 479);
    v14 = v10 | 0x800;
    *a2 = v14;
    if ( (v13 & 0x80u) == 0 && (v13 & 0x40) == 0 )
      *a2 = v14 | 0x1000;
  }
  return a2;
}
