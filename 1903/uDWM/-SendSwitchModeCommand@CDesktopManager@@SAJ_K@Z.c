/*
 * XREFs of ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18002F4B8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180013790 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002C490 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x18002CAB4 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z @ 0x18004BF18 (-EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x18004DA34 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180026838 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18002F538 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ @ 0x18002F5A8 (-UpdateRemotingMode@CDesktopManager@@AEAA_NXZ.c)
 *     ?UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ @ 0x18003AFB8 (-UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::SendSwitchModeCommand(__int64 a1)
{
  CDesktopManager *v2; // rax
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v5; // ebx
  struct CAnalogCompositorManager *Instance; // rax
  int updated; // eax
  bool v9; // zf
  void *v10; // [rsp+28h] [rbp-10h]

  CDesktopManager::UpdateRemotingMode(CDesktopManager::s_pDesktopManagerInstance);
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v3 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
  if ( v3 == 5 )
  {
    v9 = !CDesktopManager::IsLogonDesktop(a1);
    v2 = CDesktopManager::s_pDesktopManagerInstance;
    if ( !v9 )
      v3 = 3;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)v2 + 5) + 16LL) + 264LL))(
         *(_QWORD *)(*((_QWORD *)v2 + 5) + 16LL),
         v3);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x12Au, v10);
  }
  else
  {
    Instance = CAnalogCompositorManager::GetInstance();
    *((_QWORD *)Instance + 9) = a1;
    updated = CAnalogCompositorManager::UpdateHolographicLockState(Instance);
    v5 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x12Du, v10);
  }
  return v5;
}
