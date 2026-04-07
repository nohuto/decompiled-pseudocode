/*
 * XREFs of ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18000642C
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180005C7C (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x180003D5C (-ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180005D48 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180005D74 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180006610 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x180006714 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18000A8D8 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800253B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800A733C (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CStoryboard::ScheduleStartAnimation(CStoryboard *this)
{
  char v2; // r12
  CAnimationEngine *v3; // r14
  int v4; // ebx
  int *v5; // rax
  unsigned int v6; // r9d
  unsigned int v7; // edx
  __int64 v8; // r15
  int v9; // r13d
  unsigned int v10; // r8d
  int v11; // eax
  int started; // eax
  __int64 v14; // rcx
  unsigned int v15; // [rsp+20h] [rbp-30h]
  void *v16; // [rsp+28h] [rbp-28h]
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  int v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+44h] [rbp-Ch]
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+88h] [rbp+38h] BYREF

  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = 0;
  v3 = 0LL;
  v4 = -2147467259;
  if ( *((_DWORD *)this + 6) != 2 )
    goto LABEL_29;
  if ( !*((_DWORD *)this + 28) )
  {
    v2 = 1;
    goto LABEL_15;
  }
  v3 = CDesktopManager::AcquireAnimationEngine();
  if ( !v3 )
    goto LABEL_29;
  v5 = (int *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
  v18 = 0;
  v6 = 0;
  v7 = 0;
  v19 = 0LL;
  v8 = 0LL;
  v9 = *v5;
  v17 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    while ( 1 )
    {
      v10 = v7 + 1;
      v20 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * v8) + 40LL);
      if ( v7 + 1 < v7 )
        break;
      if ( v10 <= v6 )
      {
        v14 = v7++;
        HIDWORD(v19) = v10;
        *(_QWORD *)(v17 + 8 * v14) = v20;
      }
      else
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet(&v17, 8LL, 1LL, &v20);
        v4 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u, v16);
        if ( v4 < 0 )
          goto LABEL_25;
        v7 = HIDWORD(v19);
        v6 = v19;
      }
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *((_DWORD *)this + 28) )
        goto LABEL_12;
    }
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v16);
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v4, 0x15BBu, v16);
    goto LABEL_14;
  }
LABEL_12:
  started = CAnimationEngine::ScheduleStartAnimation(v3, v9, (__int64)&v17, (unsigned int *)this + 7);
  v4 = started;
  if ( started < 0 )
  {
    v15 = 5565;
  }
  else
  {
    *((_DWORD *)this + 6) = 3;
    CStoryboard::_LogStoryboardEvent(this);
    if ( !(*(unsigned __int8 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 128LL))(this) )
      goto LABEL_14;
    started = CDesktopManager::ImmediateCancelLivePreview(CDesktopManager::s_pDesktopManagerInstance);
    v4 = started;
    if ( started >= 0 )
      goto LABEL_14;
    v15 = 5570;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, started, v15, v16);
LABEL_14:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v17);
LABEL_15:
  if ( v4 >= 0 && !v2 )
  {
    CStoryboard::_NotifyStoryboardState(this, 3LL);
    (*(void (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 40LL))(this);
    goto LABEL_18;
  }
LABEL_29:
  CStoryboard::Abandon(this);
LABEL_18:
  if ( v3 )
    CAnimationEngine::Release(v3);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  return (unsigned int)v4;
}
