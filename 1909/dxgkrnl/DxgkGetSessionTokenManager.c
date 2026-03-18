/*
 * XREFs of DxgkGetSessionTokenManager @ 0x1C000F9D0
 * Callers:
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C0001008 (-IsTokenManagerReady@@YAHXZ.c)
 *     NtTokenManagerOpenSectionAndEvents @ 0x1C000F590 (NtTokenManagerOpenSectionAndEvents.c)
 *     NtTokenManagerThread @ 0x1C000F780 (NtTokenManagerThread.c)
 *     NtUnBindCompositionSurface @ 0x1C00101A0 (NtUnBindCompositionSurface.c)
 *     NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C00593E0 (NtTokenManagerConfirmOutstandingAnalogToken.c)
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C00599A0 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 *     NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C0059C10 (NtTokenManagerGetAnalogExclusiveTokenEvent.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C005BE40 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C005C170 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z @ 0x1C005C330 (-PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C005CEE4 (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x1C005D158 (-InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00FC9E0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DxgkGetSessionTokenManager(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // edi
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  void (__fastcall ***v6)(_QWORD); // rbx

  v3 = -1073741823;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v6 = (void (__fastcall ***)(_QWORD))*((_QWORD *)SessionData + 2339);
    if ( v6 )
    {
      (**v6)(*((_QWORD *)SessionData + 2339));
      v3 = 0;
      *a1 = v6;
    }
  }
  return v3;
}
