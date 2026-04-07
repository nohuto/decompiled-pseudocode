/*
 * XREFs of ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x18002CAB4
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18002C664 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?ModeChange@CWindowList@@AEAAJXZ @ 0x1800915D4 (-ModeChange@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18002CB3C (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?CheckInteropDCompDevice@CDesktopManager@@AEAAJPEA_N@Z @ 0x18002D078 (-CheckInteropDCompDevice@CDesktopManager@@AEAAJPEA_N@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18002D258 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18002F4B8 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18002F538 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopManager::ModeChangeImpl(CDesktopManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int MonitorRenderTargets; // eax
  int v5; // eax
  void *v7; // [rsp+28h] [rbp-10h]
  unsigned __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  GetDesktopID(1LL, &v8);
  v2 = CDesktopManager::SendSwitchModeCommand(v8);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x3CAu, v7);
  }
  else if ( *((_BYTE *)this + 16)
         && (MonitorRenderTargets = CDesktopManager::CreateMonitorRenderTargets(this),
             v3 = MonitorRenderTargets,
             MonitorRenderTargets < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MonitorRenderTargets, 0x3CEu, v7);
  }
  else
  {
    CAnalogCompositorManager::GetInstance();
    v5 = CDesktopManager::CheckInteropDCompDevice(this, 0LL);
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x3D6u, v7);
  }
  CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 61));
  return v3;
}
