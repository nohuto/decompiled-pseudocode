/*
 * XREFs of ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0113280
 * Callers:
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00E84F0 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014C9EC (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014CCC4 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C01BEE70 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01BFA94 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     <none>
 */

int *__fastcall DXGADAPTER::GetAdapterType(DXGADAPTER *this, int *a2)
{
  int v2; // r8d
  int v3; // r11d
  int v5; // eax
  int v6; // edx
  int v7; // r8d
  bool v8; // cc
  int *result; // rax

  v2 = *((_DWORD *)this + 77);
  *a2 = 0;
  v3 = 0;
  v5 = 0;
  if ( (v2 & 0x100) != 0 )
    v5 = 64;
  v6 = 0;
  if ( *((_BYTE *)this + 185) )
    v6 = 128;
  v7 = v6 | v5 | v2 & 4 | (*((_QWORD *)this + 315) != 0LL ? 2 : 0) | (*((_QWORD *)this + 316) != 0LL) | (8 * (v2 & 1)) | (*((_BYTE *)this + 188) != 0 ? 0x100 : 0);
  v8 = *((_DWORD *)this + 540) < 8704;
  *a2 = v7;
  if ( !v8 && *((_DWORD *)this + 428) >= 0x7007u && *((_QWORD *)this + 133) && *((_QWORD *)this + 114) )
    v3 = 512;
  result = a2;
  *a2 = v3 | v7 | (16
                 * (*((_BYTE *)this + 2367) & 1 | (2
                                                 * (*((_BYTE *)this + 2372) & 1 | (16 * (*((_DWORD *)this + 600) & 2))))));
  return result;
}
