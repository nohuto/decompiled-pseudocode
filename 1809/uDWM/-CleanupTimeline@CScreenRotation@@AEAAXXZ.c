/*
 * XREFs of ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800A0C44
 * Callers:
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800A1290 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800A1554 (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x1800A1720 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x1800A17E8 (-Start@CScreenRotation@@QEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800A1858 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180037974 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x1800779B8 (McTemplateU0.c)
 */

void __fastcall CScreenRotation::CleanupTimeline(CScreenRotation *this)
{
  int v2; // r8d
  __int64 v3; // rax
  bool v4; // zf
  char v5; // al
  char v6; // al
  void *v7; // rdx

  if ( *((_BYTE *)this + 288) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    v3 = *((_QWORD *)this + 37);
    if ( v3 )
    {
      v4 = (*(_DWORD *)(v3 + 8))-- == 1;
      v5 = CDesktopManager::s_fTimelineDirty;
      if ( v4 )
        v5 = 1;
      *((_QWORD *)this + 37) = 0LL;
      CDesktopManager::s_fTimelineDirty = v5;
    }
    v6 = *((_BYTE *)this + 380);
    *((_BYTE *)this + 288) = 0;
    if ( *((_DWORD *)this + 76) == 1 )
    {
      if ( v6 )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        {
          v7 = &UdwmHardwareExpression_Delay_Stop;
LABEL_17:
          McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)v7, v2);
        }
      }
      else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v7 = &UdwmScreenRotation_Delay_Stop;
        goto LABEL_17;
      }
    }
    else if ( v6 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v7 = &UdwmHardwareExpression_HintDelay_Stop;
        goto LABEL_17;
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v7 = &UdwmScreenRotation_HintDelay_Stop;
      goto LABEL_17;
    }
    (*(void (__fastcall **)(_QWORD, __int128 *, unsigned __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 5)
                                                                 + 232LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
      &xmmword_1800BF168,
      (unsigned __int64)this | 0xD100000000000000uLL);
    *((_DWORD *)this + 76) = 0;
  }
}
