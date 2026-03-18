/*
 * XREFs of ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00E96E8
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00C3E20 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkDisplayOnOff @ 0x1C00C6170 (DxgkDisplayOnOff.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00CD110 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00D3530 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00D6BE8 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00E9540 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C012B70C (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C014BC54 (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C0257520 (DxgkRedrawCursorForPostCompositon.c)
 * Callees:
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00E977C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C00E97B4 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 */

DXGSESSIONDATA **__fastcall DXGSESSIONDATA::GetSessionViewFromSource(
        DXGSESSIONDATA *this,
        const struct _LUID *a2,
        unsigned int a3)
{
  __int64 v3; // rsi
  struct DISPLAY_SOURCE *SessionAdapterFromLuid; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  DXGSESSIONDATA **v10; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rax

  v3 = a3;
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a2);
  if ( SessionAdapterFromLuid )
    SessionAdapterFromLuid = SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, v3);
  if ( SessionAdapterFromLuid )
  {
    v10 = (DXGSESSIONDATA **)*((_QWORD *)SessionAdapterFromLuid + 6);
    if ( v10 )
    {
      if ( *v10 != this )
      {
        v13 = WdLogNewEntry5_WdAssertion(v8, v7);
        *(_QWORD *)(v13 + 24) = 3537LL;
        WdLogEvent5_WdAssertion(v13);
      }
    }
    return v10;
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
    v12[3] = v3;
    v12[4] = a2->HighPart;
    v12[5] = a2->LowPart;
    v12[6] = this;
    WdLogEvent5_WdWarning(v12);
    return 0LL;
  }
}
