/*
 * XREFs of ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180037580
 * Callers:
 *     ?v_SetDesiredPosition_HasViewDataChanged@UAPViewWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180035A10 (-v_SetDesiredPosition_HasViewDataChanged@UAPViewWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180037010 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18003A088 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18003CB1C (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180168020 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?IsEqual@CAppLayoutItem@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x18043F610 (-IsEqual@CAppLayoutItem@@UEAAHPEAUIAppLayoutItem@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ImmersiveApplicationLayout::AreAppViewDataEqual(
        ImmersiveApplicationLayout *this,
        const struct APPLICATION_VIEW_DATA *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  return *(_DWORD *)this == *(_DWORD *)a2
      && *((_DWORD *)this + 1) == *((_DWORD *)a2 + 1)
      && *((_DWORD *)this + 2) == *((_DWORD *)a2 + 2)
      && *((_DWORD *)this + 3) == *((_DWORD *)a2 + 3)
      && *((_DWORD *)this + 5) == *((_DWORD *)a2 + 5)
      && *((_DWORD *)this + 4) == *((_DWORD *)a2 + 4)
      && *((_DWORD *)this + 6) == *((_DWORD *)a2 + 6)
      && *((_DWORD *)this + 7) == *((_DWORD *)a2 + 7)
      && *((_DWORD *)this + 8) == *((_DWORD *)a2 + 8)
      && *((_DWORD *)this + 9) == *((_DWORD *)a2 + 9)
      && *((_DWORD *)this + 10) == *((_DWORD *)a2 + 10);
}
