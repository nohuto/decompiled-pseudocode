/*
 * XREFs of ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18002EA44
 * Callers:
 *     ?OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z @ 0x18002EF74 (-OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z.c)
 *     ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800A8560 (-OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x1800069F4 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x180009210 (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18002A5AC (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18002D1BC (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x18002EC48 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x18002EC88 (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18002ECF4 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18007DFB8 (McTemplateU0d.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800A733C (-Abandon@CStoryboard@@QEAAXXZ.c)
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
  unsigned int v15; // edx
  CAnimationScheduler *v16; // rcx
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // r9d
  unsigned int v24; // [rsp+20h] [rbp-50h]
  void *v25; // [rsp+28h] [rbp-48h]
  struct CStoryboard *v26; // [rsp+30h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+38h] [rbp-38h] BYREF
  __int128 v28; // [rsp+40h] [rbp-30h]
  __int128 v29; // [rsp+50h] [rbp-20h]

  v27 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0d(v10, &UdwmSystemAnimation_BeginTransitionRequest, a2);
  v26 = 0LL;
  v11 = -2147467259;
  CAnimationScheduler::_RecycleAbandonedStoryboards(this, v9);
  v12 = 0LL;
  if ( *((_DWORD *)this + 10) )
  {
    v19 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v20 = *(_QWORD *)(v19 + 8 * v12);
      if ( *(_DWORD *)(v20 + 72) == a2 )
      {
        v21 = *(_QWORD *)(v20 + 32);
        if ( a3 )
        {
          v29 = *(_OWORD *)(v20 + 32);
          v22 = v21 - *(_QWORD *)&a3->Data1;
          if ( !v22 )
            v22 = *((_QWORD *)&v29 + 1) - *(_QWORD *)a3->Data4;
        }
        else
        {
          v22 = v21 - *(_QWORD *)&GUID_NULL.Data1;
          v28 = *(_OWORD *)(v20 + 32);
          if ( !v22 )
            v22 = *((_QWORD *)&v28 + 1) - *(_QWORD *)GUID_NULL.Data4;
        }
        if ( !v22 && !*(_DWORD *)(v20 + 24) )
          break;
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= *((_DWORD *)this + 10) )
        goto LABEL_4;
    }
    v26 = (struct CStoryboard *)v20;
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    v11 = 0;
  }
LABEL_4:
  if ( !v26 )
  {
    if ( *((_DWORD *)this + 10) > 0xAu )
    {
      v11 = -2147024809;
      goto LABEL_22;
    }
    v13 = CStoryboardFactory::Create(a2, a4, &v26);
    v11 = v13;
    if ( v13 < 0 )
    {
      v24 = 215;
LABEL_41:
      v23 = v13;
LABEL_44:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CB118, 1u, v23, v24, v25);
      goto LABEL_20;
    }
    if ( a3 )
      *((struct _GUID *)v26 + 2) = *a3;
    if ( (*(unsigned __int8 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v26 + 24LL))(v26) )
    {
      v14 = *((_DWORD *)this + 10);
      v15 = v14 + 1;
      if ( v14 + 1 < v14 )
      {
        v11 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v25);
      }
      else
      {
        if ( v15 <= *((_DWORD *)this + 9) )
        {
          v11 = 0;
          *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v14) = v26;
          *((_DWORD *)this + 10) = v15;
LABEL_13:
          _InterlockedIncrement((volatile signed __int32 *)v26 + 2);
          goto LABEL_14;
        }
        v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8, 1, &v26);
        v11 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xC0u, v25);
        if ( v11 >= 0 )
          goto LABEL_13;
      }
      v24 = 226;
      v23 = v11;
      goto LABEL_44;
    }
  }
LABEL_14:
  if ( v11 < 0 )
    goto LABEL_20;
  if ( (*(unsigned __int8 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v26 + 24LL))(v26) )
  {
    if ( CAnimationScheduler::_ShouldContinueStoryboardSetup(this, v26) )
    {
      v13 = (*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v26 + 88LL))(v26);
      v11 = v13;
      if ( v13 < 0 )
      {
        v24 = 250;
      }
      else
      {
        CStoryboard::SetParentStoryboard(v26, a4);
        v13 = CTransitionVisualController::RemoveTargetsForStoryboard(
                *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
                v26,
                0,
                0);
        v11 = v13;
        if ( v13 < 0 )
        {
          v24 = 254;
        }
        else
        {
          v13 = CAnimationScheduler::_OnBeginAnimationClock(v16, (struct _GUID *)v26, a3, a5);
          v11 = v13;
          if ( v13 >= 0 )
            goto LABEL_20;
          v24 = 257;
        }
      }
      goto LABEL_41;
    }
    CStoryboard::Abandon(v26);
    v11 = -2147467259;
  }
  else
  {
    v11 = -2147024809;
  }
LABEL_20:
  if ( v26 )
  {
    CStoryboard::Release(v26);
    v26 = 0LL;
  }
LABEL_22:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v27);
  return (unsigned int)v11;
}
