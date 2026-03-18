/*
 * XREFs of ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C029DB20
 * Callers:
 *     MonitorSendAdjustedColorimetryToDriver @ 0x1C013AFC0 (MonitorSendAdjustedColorimetryToDriver.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C013E8B4 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     MonitorSetAdvancedColorParams @ 0x1C0291664 (MonitorSetAdvancedColorParams.c)
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C02918B0 (MonitorSetDefaultAdvancedColorParams.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C0291ABC (MonitorSetSDRWhiteLevel.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029CE54 (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C029DDC8 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     DpiSetTargetAdjustedColorimetry2 @ 0x1C004B8A0 (DpiSetTargetAdjustedColorimetry2.c)
 *     DpiSetTargetAdjustedColorimetry @ 0x1C0277CD4 (DpiSetTargetAdjustedColorimetry.c)
 *     ?_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z @ 0x1C029B054 (-_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z.c)
 *     ?_GetFinalMinLuminanceValueFromRaw@DXGMONITOR@@AEAAKKK@Z @ 0x1C029B0A4 (-_GetFinalMinLuminanceValueFromRaw@DXGMONITOR@@AEAAKKK@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C029DD64 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_SendAdjustedHDRParamsToDriver(DXGMONITOR *this, char a2)
{
  int DriverVersion; // eax
  int v4; // r10d
  DXGMONITOR *v6; // rcx
  DXGMONITOR *v7; // rcx
  unsigned int v8; // r8d
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r10d
  __int64 v12; // rcx
  int v13; // edx
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // edx
  __int128 v19; // [rsp+20h] [rbp-49h]
  __int128 v20; // [rsp+30h] [rbp-39h]
  __int128 v21; // [rsp+40h] [rbp-29h]
  __int128 v22; // [rsp+60h] [rbp-9h] BYREF
  __int128 v23; // [rsp+70h] [rbp+7h]
  __int128 v24; // [rsp+80h] [rbp+17h]
  int v25; // [rsp+90h] [rbp+27h]
  __int128 v26; // [rsp+A0h] [rbp+37h]

  if ( a2 )
  {
    DriverVersion = DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL));
    if ( DriverVersion < v4 )
      return 0LL;
  }
  HIDWORD(v21) = 0;
  v19 = *((_OWORD *)this + 39);
  v20 = *((_OWORD *)this + 40);
  if ( *((_BYTE *)this + 688) )
  {
    DWORD1(v21) = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(this, *((_DWORD *)this + 166));
    DWORD2(v21) = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(v6, *((_DWORD *)this + 167));
    LODWORD(v21) = DXGMONITOR::_GetFinalMinLuminanceValueFromRaw(v7, *((_DWORD *)this + 165), v8);
  }
  else
  {
    *(_QWORD *)&v21 = *((_QWORD *)this + 84);
    DWORD2(v21) = *((_DWORD *)this + 170);
  }
  v9 = DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL));
  if ( v9 < v11 )
  {
    v17 = *(_QWORD *)(v10 + 192);
    v22 = v19;
    v23 = v20;
    goto LABEL_11;
  }
  v12 = *(_QWORD *)(v10 + 192);
  v25 = 0;
  v22 = v19;
  v23 = v20;
  v13 = *((_DWORD *)this + 11);
  v24 = v21;
  v14 = DpiSetTargetAdjustedColorimetry2(v12, v13, (__int64)&v22);
  if ( v14 == -1073741637 )
  {
    v15 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL);
    v22 = v19;
    v16 = *(_QWORD *)(v15 + 16);
    v23 = v20;
    v17 = *(_QWORD *)(v16 + 192);
LABEL_11:
    v25 = 0;
    v18 = *((_DWORD *)this + 11);
    v24 = v21;
    v14 = DpiSetTargetAdjustedColorimetry(v17, v18);
  }
  if ( v14 < 0 )
  {
    v26 = 0uLL;
    *((_QWORD *)this + 77) = 0LL;
    *(_OWORD *)((char *)this + 596) = 0uLL;
    *((_DWORD *)this + 153) = 0;
    DXGMONITOR::_SetColorPrimariesToBT709(this);
    *((_BYTE *)this + 696) = 0;
    *((_DWORD *)this + 166) = 2700000;
    *((_DWORD *)this + 167) = 2700000;
    *((_DWORD *)this + 169) = 2700000;
    *((_DWORD *)this + 170) = 2700000;
    *((_DWORD *)this + 173) = 3;
    *((_DWORD *)this + 164) = 3;
    *((_DWORD *)this + 165) = 5000;
    *((_DWORD *)this + 168) = 5000;
    *((_BYTE *)this + 688) = 0;
  }
  return (unsigned int)v14;
}
