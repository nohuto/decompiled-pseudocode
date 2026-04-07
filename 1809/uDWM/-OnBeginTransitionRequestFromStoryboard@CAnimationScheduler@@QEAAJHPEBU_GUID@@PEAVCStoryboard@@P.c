/*
 * XREFs of ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800312D0
 * Callers:
 *     ?OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z @ 0x18003181C (-OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z.c)
 *     ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800A4260 (-OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18002A6B0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18002DB8C (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18002DC7C (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x18002EE48 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x1800314E8 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x180031528 (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180031594 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x1800779F8 (McTemplateU0d.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800A3088 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(
        CAnimationScheduler *this,
        unsigned int a2,
        const struct _GUID *a3,
        struct CStoryboard *a4,
        struct _GUID *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // eax
  CAnimationScheduler *v15; // rcx
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-58h]
  struct CStoryboard *v24; // [rsp+30h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+38h] [rbp-40h] BYREF
  __int128 v26; // [rsp+40h] [rbp-38h]
  __int128 v27; // [rsp+50h] [rbp-28h]

  v25 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0d(v10, &UdwmSystemAnimation_BeginTransitionRequest, a2);
  v24 = 0LL;
  v11 = -2147467259;
  CAnimationScheduler::_RecycleAbandonedStoryboards(this, v9);
  v12 = 0LL;
  if ( *((_DWORD *)this + 10) )
  {
    v18 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v19 = *(_QWORD *)(v18 + 8LL * (unsigned int)v12);
      if ( *(_DWORD *)(v19 + 72) == a2 )
      {
        v20 = *(_QWORD *)(v19 + 32);
        if ( a3 )
        {
          v27 = *(_OWORD *)(v19 + 32);
          v21 = v20 - *(_QWORD *)&a3->Data1;
          if ( !v21 )
            v21 = *((_QWORD *)&v27 + 1) - *(_QWORD *)a3->Data4;
        }
        else
        {
          v21 = v20 - *(_QWORD *)&GUID_NULL.Data1;
          v26 = *(_OWORD *)(v19 + 32);
          if ( !v21 )
            v21 = *((_QWORD *)&v26 + 1) - *(_QWORD *)GUID_NULL.Data4;
        }
        if ( !v21 && !*(_DWORD *)(v19 + 24) )
          break;
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= *((_DWORD *)this + 10) )
        goto LABEL_4;
    }
    v24 = (struct CStoryboard *)v19;
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v11 = 0;
  }
LABEL_4:
  if ( !v24 )
  {
    if ( *((_DWORD *)this + 10) > 0xAu )
    {
      v11 = -2147024809;
      goto LABEL_23;
    }
    v13 = CStoryboardFactory::Create(a2, a4, &v24);
    v11 = v13;
    if ( v13 < 0 )
    {
      v23 = 215;
LABEL_40:
      v22 = v13;
LABEL_42:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C4AC8, 1u, v22, v23);
      goto LABEL_21;
    }
    if ( a3 )
      *((struct _GUID *)v24 + 2) = *a3;
    if ( (*(unsigned __int8 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v24 + 24LL))(v24) )
    {
      v14 = *((_DWORD *)this + 10);
      v12 = v14 + 1;
      v11 = (unsigned int)v12 < v14 ? 0x80070216 : 0;
      if ( (unsigned int)v12 < v14 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xB5u);
      }
      else if ( (unsigned int)v12 > *((_DWORD *)this + 9) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8u, 1, &v24);
        v11 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v14) = v24;
        *((_DWORD *)this + 10) = v12;
      }
      if ( v11 < 0 )
      {
        v23 = 226;
        v22 = v11;
        goto LABEL_42;
      }
      _InterlockedIncrement((volatile signed __int32 *)v24 + 2);
    }
  }
  if ( v11 < 0 )
    goto LABEL_21;
  if ( (*(unsigned __int8 (__fastcall **)(struct CStoryboard *, __int64))(*(_QWORD *)v24 + 24LL))(v24, v12) )
  {
    if ( CAnimationScheduler::_ShouldContinueStoryboardSetup(this, v24) )
    {
      v13 = (*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v24 + 88LL))(v24);
      v11 = v13;
      if ( v13 < 0 )
      {
        v23 = 250;
      }
      else
      {
        CStoryboard::SetParentStoryboard(v24, a4);
        v13 = CTransitionVisualController::RemoveTargetsForStoryboard(
                *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
                v24,
                0,
                0);
        v11 = v13;
        if ( v13 < 0 )
        {
          v23 = 254;
        }
        else
        {
          v13 = CAnimationScheduler::_OnBeginAnimationClock(v15, (struct _GUID *)v24, a3, a5);
          v11 = v13;
          if ( v13 >= 0 )
            goto LABEL_21;
          v23 = 257;
        }
      }
      goto LABEL_40;
    }
    CStoryboard::Abandon(v24);
    v11 = -2147467259;
  }
  else
  {
    v11 = -2147024809;
  }
LABEL_21:
  if ( v24 )
  {
    CStoryboard::Release(v24);
    v24 = 0LL;
  }
LABEL_23:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v25);
  return (unsigned int)v11;
}
