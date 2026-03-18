/*
 * XREFs of DxgkGetSessionTokenManager @ 0x1C000F230
 * Callers:
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C0001008 (-IsTokenManagerReady@@YAHXZ.c)
 *     NtTokenManagerOpenSectionAndEvents @ 0x1C000EDF0 (NtTokenManagerOpenSectionAndEvents.c)
 *     NtTokenManagerThread @ 0x1C000EFE0 (NtTokenManagerThread.c)
 *     NtUnBindCompositionSurface @ 0x1C000FA00 (NtUnBindCompositionSurface.c)
 *     NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C00593A0 (NtTokenManagerConfirmOutstandingAnalogToken.c)
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C0059960 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 *     NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C0059BD0 (NtTokenManagerGetAnalogExclusiveTokenEvent.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C005BE00 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C005C130 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z @ 0x1C005C2F0 (-PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C005CEA4 (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x1C005D118 (-InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00F7D10 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
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
