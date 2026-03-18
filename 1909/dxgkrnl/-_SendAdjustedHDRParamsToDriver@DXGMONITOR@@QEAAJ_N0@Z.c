/*
 * XREFs of ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C014EC54
 * Callers:
 *     MonitorSendAdjustedColorimetryToDriver @ 0x1C014EB8C (MonitorSendAdjustedColorimetryToDriver.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0173E0C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01746F0 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     MonitorSetAdvancedColorParams @ 0x1C02C9F88 (MonitorSetAdvancedColorParams.c)
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C02CA2E0 (MonitorSetDefaultAdvancedColorParams.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C02CA654 (MonitorSetSDRWhiteLevel.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02D027C (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DpiSetTargetAdjustedColorimetry2 @ 0x1C0052B30 (DpiSetTargetAdjustedColorimetry2.c)
 *     DpiSetTargetAdjustedColorimetry @ 0x1C0183B80 (DpiSetTargetAdjustedColorimetry.c)
 *     ?_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z @ 0x1C02CF440 (-_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z.c)
 *     ?_GetFinalMinLuminanceValueFromRaw@DXGMONITOR@@AEAAKKK@Z @ 0x1C02CF490 (-_GetFinalMinLuminanceValueFromRaw@DXGMONITOR@@AEAAKKK@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C02D08A4 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

void __fastcall DXGMONITOR::_SendAdjustedHDRParamsToDriver(DXGMONITOR *this, char a2, char a3, __int64 a4)
{
  int v5; // r10d
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  DXGMONITOR *v10; // rcx
  DXGMONITOR *v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int128 v17; // [rsp+20h] [rbp-49h]
  __int128 v18; // [rsp+30h] [rbp-39h]
  __int128 v19; // [rsp+40h] [rbp-29h]
  __int128 v20; // [rsp+60h] [rbp-9h] BYREF
  __int128 v21; // [rsp+70h] [rbp+7h]
  __int128 v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+90h] [rbp+27h]
  __int128 v24; // [rsp+A0h] [rbp+37h]

  LOBYTE(a4) = a3;
  v5 = 2500;
  if ( !a2 || *(int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 2452LL) >= 2500 )
  {
    HIDWORD(v19) = 0;
    v17 = *(_OWORD *)((char *)this + 628);
    v18 = *(_OWORD *)((char *)this + 644);
    if ( *((_BYTE *)this + 692) )
    {
      DWORD1(v19) = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(this, *((_DWORD *)this + 167));
      DWORD2(v19) = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(v10, *((_DWORD *)this + 168));
      LODWORD(v19) = DXGMONITOR::_GetFinalMinLuminanceValueFromRaw(v11, *((_DWORD *)this + 166), v12);
    }
    else
    {
      *(_QWORD *)&v19 = *(_QWORD *)((char *)this + 676);
      DWORD2(v19) = *((_DWORD *)this + 171);
    }
    v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
    if ( *(_DWORD *)(v6 + 2452) >= v5 )
    {
      v13 = *(_QWORD *)(v6 + 192);
      v23 = 0;
      v20 = v17;
      v21 = v18;
      v14 = *((_DWORD *)this + 11);
      v22 = v19;
      v9 = DpiSetTargetAdjustedColorimetry2(v13, v14, (__int64)&v20);
      if ( v9 != -1073741637 )
      {
LABEL_9:
        if ( v9 < 0 )
        {
          *(_QWORD *)((char *)this + 620) = 0LL;
          v24 = 0uLL;
          *(_OWORD *)((char *)this + 600) = 0uLL;
          *((_DWORD *)this + 154) = 0;
          DXGMONITOR::_SetColorPrimariesToBT709(this);
          *((_BYTE *)this + 700) = 0;
          *((_DWORD *)this + 167) = 2700000;
          *((_DWORD *)this + 168) = 2700000;
          *((_DWORD *)this + 170) = 2700000;
          *((_DWORD *)this + 171) = 2700000;
          *((_DWORD *)this + 174) = 3;
          *((_DWORD *)this + 165) = 3;
          *((_DWORD *)this + 166) = 5000;
          *((_DWORD *)this + 169) = 5000;
          *((_BYTE *)this + 692) = 0;
        }
        return;
      }
      v15 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL);
      v20 = v17;
      v16 = *(_QWORD *)(v15 + 16);
      v21 = v18;
      v7 = *(_QWORD *)(v16 + 192);
    }
    else
    {
      v7 = *(_QWORD *)(v6 + 192);
      v20 = v17;
      v21 = v18;
    }
    v23 = 0;
    v8 = *((unsigned int *)this + 11);
    v22 = v19;
    v9 = DpiSetTargetAdjustedColorimetry(v7, v8, &v20, a4);
    goto LABEL_9;
  }
}
