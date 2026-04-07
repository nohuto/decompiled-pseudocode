/*
 * XREFs of ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180005F30
 * Callers:
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180005AB8 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180005BF0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18000610C (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180007298 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18000731C (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x1800091E0 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18000C01C (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x180015280 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18002BC04 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800A769C (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::_ScheduleStoryboardsForAnimationClock(
        CAnimationScheduler *this,
        struct _GUID *a2)
{
  int v3; // ebx
  CAnimationScheduler *v4; // rcx
  unsigned int v6; // r9d
  CAnimationScheduler **v7; // r8
  __int64 v8; // r10
  int v9; // r15d
  char v10; // r14
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  int started; // eax
  void *v17; // [rsp+28h] [rbp-50h]
  __int128 v18; // [rsp+30h] [rbp-48h]

  v3 = 0;
  v4 = 0LL;
  v6 = *((_DWORD *)this + 10);
  if ( v6 )
  {
    v7 = (CAnimationScheduler **)*((_QWORD *)this + 2);
    v8 = v6;
    do
    {
      if ( !*((_DWORD *)*v7 + 6) && (!v4 || *((_DWORD *)v4 + 16) < *((_DWORD *)*v7 + 16)) )
        v4 = *v7;
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  v9 = 0;
  if ( v4 )
    v9 = *((_DWORD *)v4 + 16);
  v10 = 0;
  v11 = 0LL;
  if ( v6 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v11);
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v18 = *(_OWORD *)(v12 + 48);
      v13 = v18 - *(_QWORD *)&a2->Data1;
      if ( (_QWORD)v18 == *(_QWORD *)&a2->Data1 )
        v13 = *((_QWORD *)&v18 + 1) - *(_QWORD *)a2->Data4;
      if ( v13 )
        goto LABEL_20;
      if ( v3 < 0 )
        break;
      if ( *(_DWORD *)(v12 + 24) <= 1u )
      {
        if ( *(_DWORD *)(v12 + 64) < v9 )
        {
          *(_DWORD *)(v12 + 24) = 1;
          CStoryboard::_LogStoryboardEvent((CStoryboard *)v12);
          v3 = 0;
        }
        else
        {
          v3 = CAnimationScheduler::_ScheduleStoryboard(v4, (struct CStoryboard *)v12);
          if ( v3 < 0 )
            break;
          v10 = 1;
          CAnimationScheduler::_ScheduleBlockedStoryboards(this, *(_DWORD *)(v12 + 64));
        }
      }
LABEL_20:
      CStoryboard::Release((CStoryboard *)v12);
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= *((_DWORD *)this + 10) )
      {
        if ( v3 >= 0 && v10 )
        {
          v14 = CTransitionVisualController::SetupZOrder(*((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance
                                                         + 31));
          v3 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x273u, v17);
          }
          else
          {
            started = CAnimationScheduler::_ScheduleStartAnimations(this);
            v3 = started;
            if ( started < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x276u, v17);
            else
              CWindowList::UpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61));
          }
        }
        return (unsigned int)v3;
      }
    }
    CStoryboard::Abandon((CStoryboard *)v12);
    goto LABEL_20;
  }
  return (unsigned int)v3;
}
