/*
 * XREFs of ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x1800A55E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0 @ 0x18007DF78 (McTemplateU0.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800A5384 (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800A59C4 (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800A5CCC (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

__int64 __fastcall CScreenRotation::OnAnimationComplete(CScreenRotation *this, int a2)
{
  unsigned int v4; // edi
  int v5; // r8d
  void *v6; // rdx
  CScreenRotation *v7; // rcx
  int v8; // eax
  int v9; // eax
  void *v10; // rdx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( a2 != *((_DWORD *)this + 19) )
  {
    if ( a2 != *((_DWORD *)this + 20) )
      goto LABEL_22;
    if ( *((_BYTE *)this + 100) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v10 = &UdwmHardwareExpression_PostDelayAnimation_Stop;
LABEL_20:
        McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)v10, v5);
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v10 = &UdwmScreenRotation_PostDelayAnimation_Stop;
      goto LABEL_20;
    }
    CScreenRotation::Stop((CScreenRotation *)((char *)this - 280), 0);
    goto LABEL_22;
  }
  *((_DWORD *)this + 19) = -1;
  if ( *((_BYTE *)this + 100) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      goto LABEL_8;
    v6 = &UdwmHardwareExpression_PreDelayAnimation_Stop;
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      goto LABEL_8;
    v6 = &UdwmScreenRotation_PreDelayAnimation_Stop;
  }
  McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)v6, v5);
LABEL_8:
  v7 = (CScreenRotation *)((char *)this - 280);
  if ( *((_BYTE *)this + 49) )
  {
    v8 = CScreenRotation::MidDelayExpired(v7);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x139u);
  }
  else
  {
    v9 = CScreenRotation::SetupTimeline(v7, 2LL);
    v4 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x13Du);
  }
LABEL_22:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v4;
}
