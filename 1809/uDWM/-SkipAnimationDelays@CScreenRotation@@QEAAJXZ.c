/*
 * XREFs of ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x1800A1720
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800117B0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18000B294 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0 @ 0x1800779B8 (McTemplateU0.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800A0C44 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800A0F24 (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenRotation::SkipAnimationDelays(CScreenRotation *this)
{
  unsigned int v2; // edi
  int v3; // r8d
  void *v4; // rdx
  int v5; // eax
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *((_BYTE *)this + 329) = 1;
  if ( *((_BYTE *)this + 380) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v4 = &UdwmHardwareExpression_HintFired;
LABEL_6:
      McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)v4, v3);
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v4 = &UdwmScreenRotation_HintFired;
    goto LABEL_6;
  }
  if ( *((_DWORD *)this + 76) == 2 )
  {
    CScreenRotation::CleanupTimeline(this);
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30));
    v5 = CScreenRotation::MidDelayExpired(this);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x1B9u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return v2;
}
