/*
 * XREFs of ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00C4BD0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C00C5650 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00C7920 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00C806C (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00CA830 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00D3D80 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00D5A08 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00D7438 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1C00DF77C (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00E032C (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E7E10 (DxgkGetAdapterDeviceDesc.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EA0DC (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00FC1B0 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00FD130 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C0103F20 (DxgkGetPresentHistoryInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0105B60 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C01334E0 (DxgkGetPresentHistoryReadyEvent.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0138C60 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C013B4E0 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C013FD60 (DxgkFreeGpuVirtualAddress.c)
 *     DxgkGetPostCompositionCaps @ 0x1C0141EF0 (DxgkGetPostCompositionCaps.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C0142270 (DxgkGetMultiPlaneOverlayCaps.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C0146678 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z @ 0x1C014BD80 (-DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C014D384 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C014F200 (DxgkQueryModeListCacheLuid.c)
 *     DxgkGetDisplayModeList @ 0x1C0151490 (DxgkGetDisplayModeList.c)
 *     DxgkGetScanLine @ 0x1C0151A40 (DxgkGetScanLine.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C0156410 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02023DC (DxgkCreateLightweightDeviceAndContext.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C0202B00 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkNeedToEnableCddPrimary @ 0x1C02037D0 (DxgkNeedToEnableCddPrimary.c)
 *     DxgkQueryClockCalibration @ 0x1C02046E0 (DxgkQueryClockCalibration.c)
 *     DxgkQueryStatisticsInternal @ 0x1C0204C38 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02086CC (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C020D140 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1C02381A0 (DxgkGetMultisampleMethodList.c)
 *     DxgkSetStablePowerState @ 0x1C0260B60 (DxgkSetStablePowerState.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C0266600 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z.c)
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1C026924C (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 * Callees:
 *     ?Valid@CVidSchSubmitData@@QEBAEXZ @ 0x1C00038B0 (-Valid@CVidSchSubmitData@@QEBAEXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007260 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BE40 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C0032678 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C00C2008 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 */

__int64 __fastcall DxgkpGetPairingAdapters(
        struct DXGADAPTER *this,
        __int64 a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4,
        struct DXGADAPTER **a5,
        unsigned __int64 *a6,
        char a7)
{
  struct DXGADAPTER *v7; // rbp
  __int64 v8; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rax
  int IndirectDisplayPairedAdapter; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  DXGADAPTER *v30; // rax
  DXGADAPTER *v32[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v33[8]; // [rsp+30h] [rbp-38h] BYREF
  char v34; // [rsp+38h] [rbp-30h]
  DXGADAPTER *v35[5]; // [rsp+40h] [rbp-28h] BYREF

  v7 = 0LL;
  v8 = (unsigned int)a2;
  v35[0] = 0LL;
  v32[0] = 0LL;
  if ( !this )
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v12 + 24) = 7570LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((_QWORD *)this + 319);
  if ( v13 )
  {
    if ( (unsigned int)v8 >= *(_DWORD *)(v13 + 80) )
    {
      v14 = WdLogNewEntry5_WdError(this, a2, a3);
      v15 = -1073741811;
      *(_QWORD *)(v14 + 24) = v8;
      *(_QWORD *)(v14 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v14);
      goto LABEL_26;
    }
    DXGADAPTER_REFERENCE::Assign(v35, this);
    v7 = v35[0];
  }
  else if ( a5 )
  {
    v16 = WdLogNewEntry5_WdEvent(this);
    *(_QWORD *)(v16 + 24) = this;
    *(_QWORD *)(v16 + 32) = -1073741637LL;
    WdLogEvent5_WdEvent(v16);
    v15 = -1073741637;
    goto LABEL_26;
  }
  if ( !a3 )
    goto LABEL_23;
  if ( *((_QWORD *)this + 320) )
  {
    DXGADAPTER_REFERENCE::Assign(v32, this);
LABEL_22:
    *a3 = v32[0];
    *a4 = (unsigned __int64)v32[1];
    v32[0] = 0LL;
LABEL_23:
    if ( a5 )
    {
      v30 = v35[1];
      *a5 = v7;
      v35[0] = 0LL;
      *a6 = (unsigned __int64)v30;
    }
    v15 = 0;
    goto LABEL_26;
  }
  if ( (*((_DWORD *)this + 77) & 0x100) != 0 && byte_1C00A3FCC )
  {
    IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter((struct DXGADAPTER ***)this, a7, v32);
    v21 = IndirectDisplayPairedAdapter;
    if ( IndirectDisplayPairedAdapter < 0 )
    {
      v22 = WdLogNewEntry5_WdError(v19, v18, v20);
      *(_QWORD *)(v22 + 24) = this;
      *(_QWORD *)(v22 + 32) = v21;
      WdLogEvent5_WdError(v22);
      v15 = v21;
      goto LABEL_26;
    }
    goto LABEL_22;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v33);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
  Global = DXGGLOBAL::GetGlobal(v24, v23);
  DXGADAPTER_REFERENCE::Assign(v32, *((struct DXGADAPTER **)Global + 77));
  if ( CVidSchSubmitData::Valid((CVidSchSubmitData *)v32) )
  {
    if ( v34 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
    goto LABEL_22;
  }
  v29 = WdLogNewEntry5_WdError(v27, v26, v28);
  *(_QWORD *)(v29 + 24) = this;
  *(_QWORD *)(v29 + 32) = -1073741637LL;
  WdLogEvent5_WdError(v29);
  if ( v34 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
  v15 = -1073741637;
LABEL_26:
  DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(v32);
  DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(v35);
  return v15;
}
