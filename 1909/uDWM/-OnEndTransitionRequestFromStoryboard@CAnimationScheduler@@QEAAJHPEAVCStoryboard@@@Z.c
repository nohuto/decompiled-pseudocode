/*
 * XREFs of ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x1800054F0
 * Callers:
 *     ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x18000545C (-EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z.c)
 *     ?OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800A8890 (-OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180005B10 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x180006BB4 (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x180009210 (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18007DFB8 (McTemplateU0d.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800A733C (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::OnEndTransitionRequestFromStoryboard(
        CAnimationScheduler *this,
        unsigned int a2,
        struct CStoryboard *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  int v11; // eax
  struct _GUID v12; // xmm6
  int v13; // r9d
  unsigned __int64 v14; // rax
  void *v16; // [rsp+28h] [rbp-40h]
  struct _GUID v17; // [rsp+30h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+70h] [rbp+8h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0d(v6, &UdwmSystemAnimation_EndTransitionRequest, a2);
  v7 = -2147467259;
  v8 = (unsigned int)(*((_DWORD *)this + 10) - 1);
  if ( (int)v8 >= 0 )
  {
    v9 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v10 = *(_QWORD *)(v9 + 8 * v8);
      if ( !*(_DWORD *)(v10 + 24) && *(_DWORD *)(v10 + 72) == a2 && *(struct CStoryboard **)(v10 + 80) == a3 )
        break;
      v8 = (unsigned int)(v8 - 1);
      if ( (int)v8 < 0 )
        goto LABEL_20;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 96LL))(*(_QWORD *)(v9 + 8 * v8));
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CB118, 1u, v11, 0x132u, v16);
    }
    else
    {
      v12 = *(struct _GUID *)(v10 + 48);
      v7 = -2147024809;
      v13 = -2147024809;
      v14 = *(_QWORD *)(v10 + 48) - *(_QWORD *)&GUID_NULL.Data1;
      if ( !v14 )
        v14 = _mm_srli_si128((__m128i)v12, 8).m128i_u64[0] - *(_QWORD *)GUID_NULL.Data4;
      if ( v14 )
      {
        v17 = *(struct _GUID *)(v10 + 48);
        v13 = CAnimationClockCoordinator::OnEndAnimationClock(
                *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 24),
                &v17);
        if ( v13 == -2147019873 )
        {
          v17 = v12;
          v13 = CAnimationScheduler::_ScheduleStoryboardsForAnimationClock(this, &v17);
        }
        v7 = v13;
        if ( v13 >= 0 )
          goto LABEL_15;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CB118, 1u, v13, 0x135u, v16);
    }
LABEL_20:
    if ( *(_DWORD *)(v10 + 72) == a2 && (!*(_DWORD *)(v10 + 24) || !*(_BYTE *)(v10 + 76)) )
      CStoryboard::Abandon((CStoryboard *)v10);
  }
LABEL_15:
  CAnimationScheduler::_RecycleAbandonedStoryboards(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v7;
}
