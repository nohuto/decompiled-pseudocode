/*
 * XREFs of ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z @ 0x1C01763F8
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017398C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0173E0C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178698 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02D027C (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C001A8D8 (DpiFdoGetChildDescriptor.c)
 *     ?DisplayID_GetPrimaryUseCase@@YAJPEAUDisplayIDObj@@PEAW4DISPLAY_USE_CASE@@@Z @ 0x1C0056C6C (-DisplayID_GetPrimaryUseCase@@YAJPEAUDisplayIDObj@@PEAW4DISPLAY_USE_CASE@@@Z.c)
 *     ?_ReadUsageFromEDIDForMsftVSDB@DXGMONITOR@@AEAAJPEAW4DISPLAY_USE_CASE@@PEA_N1@Z @ 0x1C01764C8 (-_ReadUsageFromEDIDForMsftVSDB@DXGMONITOR@@AEAAJPEAW4DISPLAY_USE_CASE@@PEA_N1@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetIntendedUsageFromDescriptor(
        DXGMONITOR *this,
        enum _DXGK_DISPLAY_USAGE *a2,
        bool *a3,
        bool *a4)
{
  __int64 v4; // rax
  _QWORD *ChildDescriptor; // rax
  __int64 v9; // r11
  _QWORD *v10; // r9
  __int64 v11; // rax
  char v12; // al
  int v13; // ecx
  unsigned __int8 v14; // al
  bool v15; // zf
  int UsageFromEDIDForMsftVSDB; // eax
  unsigned __int8 v18; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 4);
  *a3 = 0;
  *a4 = 1;
  ChildDescriptor = DpiFdoGetChildDescriptor(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL) + 192LL) + 64LL),
                      *((_DWORD *)this + 11));
  v10 = ChildDescriptor;
  if ( ChildDescriptor && (v11 = ChildDescriptor[13]) != 0 )
  {
    v12 = *(_BYTE *)(v11 + 121);
    v13 = 0;
  }
  else
  {
    v12 = 0;
    v13 = v10 != 0LL ? -1071841279 : -1073741811;
  }
  if ( v13 >= 0 )
    goto LABEL_12;
  v14 = 0;
  v15 = *(_QWORD *)(v9 + 168) == 0LL;
  v18 = 0;
  if ( v15 )
  {
    if ( !*(_DWORD *)(v9 + 128) )
      goto LABEL_9;
    UsageFromEDIDForMsftVSDB = DXGMONITOR::_ReadUsageFromEDIDForMsftVSDB(
                                 (DXGMONITOR *)v9,
                                 (enum DISPLAY_USE_CASE *)&v18,
                                 a3,
                                 a4);
  }
  else
  {
    UsageFromEDIDForMsftVSDB = DisplayID_GetPrimaryUseCase(
                                 (struct DisplayIDObj *)(v9 + 168),
                                 (enum DISPLAY_USE_CASE *)&v18);
  }
  v13 = UsageFromEDIDForMsftVSDB;
  v14 = v18;
LABEL_9:
  if ( v13 >= 0 )
  {
    if ( v14 == 7 )
    {
      v12 = 3;
    }
    else
    {
      if ( v14 != 8 )
      {
        if ( v14 != 16 )
        {
          if ( v14 == 17 )
          {
            v12 = 4;
            goto LABEL_12;
          }
          if ( v14 <= 0x11u || v14 > 0x14u )
          {
            v12 = 1;
LABEL_12:
            *(_BYTE *)a2 = v12;
            return (unsigned int)v13;
          }
        }
        v12 = 5;
        goto LABEL_12;
      }
      v12 = 2;
    }
    *a4 = 0;
    goto LABEL_12;
  }
  return (unsigned int)v13;
}
