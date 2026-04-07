/*
 * XREFs of ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180012890
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000F6F0 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180012D6C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800136DC (--0CWindowData@@QEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180014A44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4Repo.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180016070 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_45a7868d896c28e78f93c3425a2eac16___ @ 0x18004CE7C (CWindowList--ForEachSoftwareCursorListener__lambda_45a7868d896c28e78f93c3425a2eac16___.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Hide@CAnimatedGlassSheet@@QEAAXXZ @ 0x180093A68 (-Hide@CAnimatedGlassSheet@@QEAAXXZ.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x1800942F4 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x180094D44 (-Stop@CRippleEffect@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::DestroyWindow(CWindowList *this, struct IDwmWindow *a2)
{
  __int64 v4; // rax
  int v5; // edi
  struct CWindowData *v6; // rbx
  void (__fastcall ***v8)(_QWORD, _QWORD); // rcx
  __int64 v9; // rsi
  struct CWindowData *v10; // rax
  struct CWindowData *v11; // rcx
  struct CWindowData **v12; // rdx
  __int64 v13; // rbx
  CWindowData *v14; // rax
  int v15; // eax
  CRippleEffect *v16; // rcx
  void *v17; // [rsp+28h] [rbp-8h]
  struct CWindowData *v18; // [rsp+58h] [rbp+28h] BYREF
  struct CWindowData **v19; // [rsp+60h] [rbp+30h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_QWORD *)a2;
  v18 = 0LL;
  v5 = 0;
  v6 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(v4 + 8))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_3;
  v14 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         752LL);
  if ( v14 )
    v6 = CWindowData::CWindowData(v14);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x891u, v17);
    goto LABEL_23;
  }
  *((_QWORD *)v6 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, struct CWindowData *))a2)(a2, v6);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v15 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v15;
  if ( v15 >= 0 )
  {
LABEL_3:
    v18 = v6;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x895u, v17);
    v6 = v18;
  }
  if ( v5 < 0 )
  {
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x90Eu, v17);
    goto LABEL_6;
  }
  if ( v6 )
  {
    v8 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)v6 + 3);
    if ( v8 )
    {
      (**v8)(v8, 0LL);
      *((_QWORD *)v18 + 3) = 0LL;
      v6 = v18;
    }
    v9 = *((_QWORD *)v6 + 5);
    wil::Feature<__WilFeatureTraits_Feature_MagnifierNoJitter>::ReportUsageToService();
    v10 = v18;
    if ( (*((_BYTE *)v18 + 608) & 1) != 0 )
    {
      v19 = &v18;
      CWindowList::ForEachSoftwareCursorListener__lambda_45a7868d896c28e78f93c3425a2eac16___(this, &v19);
      v10 = v18;
    }
    if ( (*((_BYTE *)v10 + 604) & 4) == 0 )
    {
      v11 = *(struct CWindowData **)v10;
      if ( *(struct CWindowData **)(*(_QWORD *)v10 + 8LL) != v10
        || (v12 = (struct CWindowData **)*((_QWORD *)v10 + 1), *v12 != v10) )
      {
        __fastfail(3u);
      }
      *v12 = v11;
      *((_QWORD *)v11 + 1) = v12;
      *((_QWORD *)v18 + 1) = v18;
      *(_QWORD *)v18 = v18;
      CWindowList::ImmediateDestroyWindow(this, v18);
    }
    v13 = *((_QWORD *)this + 64);
    if ( v13 && v9 == *(_QWORD *)(v13 + 16) )
    {
      if ( *(_QWORD *)v13 )
      {
        CAnimatedGlassSheet::StopAnimation(*(CAnimatedGlassSheet **)v13);
        CAnimatedGlassSheet::Hide(*(CAnimatedGlassSheet **)v13);
      }
      v16 = *(CRippleEffect **)(v13 + 8);
      if ( v16 )
        CRippleEffect::Stop(v16);
      *(_QWORD *)(v13 + 16) = 0LL;
    }
  }
LABEL_6:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v5;
}
