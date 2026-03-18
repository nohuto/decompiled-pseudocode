/*
 * XREFs of ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N@Z @ 0x1C0297448
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B44E8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298900 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029CE54 (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C029DDC8 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C001E720 (DpiFdoGetChildDescriptor.c)
 *     ?DisplayID_GetPrimaryUseCase@@YAJPEAUDisplayIDObj@@PEAW4DISPLAY_USE_CASE@@@Z @ 0x1C0050258 (-DisplayID_GetPrimaryUseCase@@YAJPEAUDisplayIDObj@@PEAW4DISPLAY_USE_CASE@@@Z.c)
 *     ?_ReadUsageFromEDIDForMsftVSDB@DXGMONITOR@@AEAAJPEAW4DISPLAY_USE_CASE@@PEA_N@Z @ 0x1C029D0B0 (-_ReadUsageFromEDIDForMsftVSDB@DXGMONITOR@@AEAAJPEAW4DISPLAY_USE_CASE@@PEA_N@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetIntendedUsageFromDescriptor(
        DXGMONITOR *this,
        enum _DXGK_DISPLAY_USAGE *a2,
        bool *a3)
{
  __int64 v3; // rax
  _QWORD *ChildDescriptor; // rax
  __int64 v6; // r10
  bool *v7; // r11
  _QWORD *v8; // r9
  __int64 v9; // rax
  char v10; // al
  int v11; // ecx
  int PrimaryUseCase; // eax
  char v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 4);
  *a3 = 0;
  ChildDescriptor = DpiFdoGetChildDescriptor(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL) + 192LL) + 64LL),
                      *((_DWORD *)this + 11));
  v8 = ChildDescriptor;
  if ( ChildDescriptor && (v9 = ChildDescriptor[13]) != 0 )
  {
    v10 = *(_BYTE *)(v9 + 121);
    v11 = 0;
  }
  else
  {
    v10 = 0;
    v11 = v8 != 0LL ? -1071841279 : -1073741811;
  }
  if ( v11 >= 0 )
    goto LABEL_17;
  v14 = 0;
  if ( *(_QWORD *)(v6 + 168) )
  {
    PrimaryUseCase = DisplayID_GetPrimaryUseCase((struct DisplayIDObj *)(v6 + 168), (enum DISPLAY_USE_CASE *)&v14);
  }
  else
  {
    if ( !*(_DWORD *)(v6 + 128) )
      goto LABEL_11;
    PrimaryUseCase = DXGMONITOR::_ReadUsageFromEDIDForMsftVSDB((DXGMONITOR *)v6, (enum DISPLAY_USE_CASE *)&v14, v7);
  }
  v11 = PrimaryUseCase;
LABEL_11:
  if ( v11 >= 0 )
  {
    if ( v14 == 7 )
    {
      v10 = 3;
    }
    else if ( v14 == 8 )
    {
      v10 = 2;
    }
    else
    {
      v10 = 1;
    }
LABEL_17:
    *(_BYTE *)a2 = v10;
  }
  return (unsigned int)v11;
}
