/*
 * XREFs of ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1800153F0
 * Callers:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180010054 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1800108A0 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800113C0 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180014D04 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18002646C (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x180079AF0 (-CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z.c)
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18008D08C (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x18014E2D8 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CCortanaConversationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18014F6C0 (-OnViewPropertiesChanging@CCortanaConversationExperienceManager@@MEAAJPEAVCSingleViewShellExperi.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x18015C1A0 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?CalculateJumpViewPosition@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@PEAU2@@Z @ 0x1801658EC (-CalculateJumpViewPosition@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@PEAU2@@Z.c)
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x180167D84 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x18018830C (-ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Win.c)
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x1801884A4 (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

int __fastcall ExperienceManagerUtils::ScaleByPerMonitorDPI(ExperienceManagerUtils *this, __int64 a2, HMONITOR a3)
{
  FARPROC ProcAddress; // rax
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  HMODULE ModuleHandleW; // rax
  HDC DC; // rax
  HDC v11; // rbx
  int v12; // [rsp+48h] [rbp+10h] BYREF
  char v13; // [rsp+50h] [rbp+18h] BYREF

  ProcAddress = (FARPROC)qword_18050D1E0;
  v5 = (int)this;
  v6 = 1;
  if ( qword_18050D1E0 == -1 )
  {
    ModuleHandleW = GetModuleHandleW(L"USER32.DLL");
    if ( ModuleHandleW )
    {
      ProcAddress = GetProcAddress(ModuleHandleW, "IsProcessDPIAware");
      qword_18050D1E0 = (__int64)ProcAddress;
    }
    else
    {
      ProcAddress = (FARPROC)qword_18050D1E0;
    }
  }
  if ( ProcAddress )
    v6 = ((__int64 (__fastcall *)(ExperienceManagerUtils *, __int64, HMONITOR))ProcAddress)(this, a2, a3);
  v7 = dword_18050D1E8;
  if ( dword_18050D1E8 == -1 || dword_18050F1D0 != v6 )
  {
    dword_18050F1D0 = v6;
    DC = GetDC(0LL);
    v11 = DC;
    if ( DC )
    {
      dword_18050D1E8 = GetDeviceCaps(DC, 88);
      GetDeviceCaps(v11, 90);
      ReleaseDC(0LL, v11);
      v7 = dword_18050D1E8;
    }
    else
    {
      v7 = 96;
      dword_18050D1E8 = 96;
    }
  }
  if ( a2 && (int)GetDpiForMonitor(a2, 0LL, &v12, &v13) >= 0 )
    v7 = v12;
  return MulDiv(v5, v7, 96);
}
