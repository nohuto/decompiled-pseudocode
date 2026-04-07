/*
 * XREFs of ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002410
 * Callers:
 *     ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800021F0 (-_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ.c)
 *     ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002290 (-_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEA.c)
 * Callees:
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800031E4 (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180014440 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x18002C078 (-GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18002F808 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18003010C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180031E84 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18003201C (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CFlyoutPopup::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, int *a4)
{
  CBaseObject *v4; // rbx
  int *v5; // r13
  int v8; // r14d
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  CBaseObject *v12; // rsi
  HWND v13; // rdx
  int WindowEndCloak; // eax
  bool v15; // r13
  int v16; // r8d
  int v17; // edx
  tagRECT *p_rc; // rcx
  int v19; // eax
  __int64 v20; // rcx
  CAnimatedTransitionVisual *v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  CAnimatedTransitionVisual *v29; // rcx
  __int64 v30; // rcx
  struct tagRECT *v31; // [rsp+28h] [rbp-61h]
  struct tagRECT *v32; // [rsp+28h] [rbp-61h]
  bool v33; // [rsp+50h] [rbp-39h] BYREF
  int v34; // [rsp+54h] [rbp-35h] BYREF
  int v35; // [rsp+58h] [rbp-31h] BYREF
  CBaseObject *v36; // [rsp+60h] [rbp-29h] BYREF
  CBaseObject *v37; // [rsp+68h] [rbp-21h] BYREF
  int *v38; // [rsp+70h] [rbp-19h]
  tagRECT rc; // [rsp+80h] [rbp-9h] BYREF
  tagRECT v40; // [rsp+90h] [rbp+7h] BYREF

  v38 = a4;
  v36 = 0LL;
  v4 = 0LL;
  v37 = 0LL;
  v5 = a4;
  v8 = 0;
  if ( (a3 & 1) == 0 )
    goto LABEL_33;
  if ( !(*(unsigned __int8 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 144LL))(a1) )
    goto LABEL_33;
  v9 = *(_DWORD *)(a2 + 612) & 0xFFF;
  v35 = 0;
  v34 = 0;
  if ( v9 < 0xC )
    goto LABEL_33;
  if ( v9 > 0x10 )
  {
    if ( v9 == 43 )
    {
      v26 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 112LL))(a1);
      v27 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(a1, (struct CWindowData *)a2, v26, 1, &v36);
      v8 = v27;
      if ( v27 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          v27,
          0x4F9u,
          v31);
      goto LABEL_36;
    }
    if ( v9 <= 0x4C || v9 > 0x52 && (v9 <= 0x57 || v9 > 0x5C) )
      goto LABEL_33;
  }
  v10 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, v9);
  v11 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
          a1,
          (struct CWindowData *)a2,
          1,
          v10,
          0LL,
          0LL,
          -1,
          1,
          &v36);
  v8 = v11;
  if ( v11 >= 0 )
  {
    v12 = v36;
    v13 = *(HWND *)(a2 + 40);
    v40 = *(tagRECT *)((char *)v36 + 88);
    rc = v40;
    WindowEndCloak = CWindowPropertyTracker::GetWindowEndCloak(
                       (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
                       v13,
                       &v33);
    v15 = v33;
    if ( WindowEndCloak >= 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CStoryboard *, _QWORD, int *, int *))(*(_QWORD *)a1 + 152LL))(
             a1,
             v9,
             &v35,
             &v34) )
      {
        v16 = v34;
        if ( v15 )
          v16 = -v34;
        v17 = v35;
        if ( v15 )
          v17 = -v35;
        p_rc = &v40;
        if ( !v15 )
          p_rc = &rc;
        OffsetRect(p_rc, v17, v16);
      }
      v19 = *(_DWORD *)(a2 + 612);
      if ( (v19 & 0x1000000) != 0 )
        rc = *(tagRECT *)(a2 + 632);
      if ( (v19 & 0x800000) != 0 )
        v40 = *(tagRECT *)(a2 + 664);
      CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v12 + 5), &rc);
      v20 = *((_QWORD *)v12 + 5);
      *(tagRECT *)(v20 + 872) = v40;
      CVisual::SetDirtyFlags((CVisual *)(v20 + 8), 0x1000u);
      v21 = (CAnimatedTransitionVisual *)*((_QWORD *)v12 + 5);
      if ( v15 )
      {
        CAnimatedTransitionVisual::SetBeginAlpha(v21, 1.0);
        v22 = *((_QWORD *)v12 + 5);
        *(_DWORD *)(v22 + 932) = 0;
      }
      else
      {
        CAnimatedTransitionVisual::SetBeginAlpha(v21, 0.0);
        v22 = *((_QWORD *)v12 + 5);
        *(_DWORD *)(v22 + 932) = 1065353216;
      }
      CVisual::SetDirtyFlags((CVisual *)(v22 + 8), 0x1000u);
    }
    v23 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, v9);
    v24 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v23, &v37);
    v8 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v24, 0x4DBu, v32);
      v4 = v37;
    }
    else
    {
      v4 = v37;
      if ( v37 )
      {
        CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v37 + 5), &rc);
        v28 = *((_QWORD *)v4 + 5);
        *(tagRECT *)(v28 + 872) = v40;
        CVisual::SetDirtyFlags((CVisual *)(v28 + 8), 0x1000u);
        *(_BYTE *)(*((_QWORD *)v4 + 5) + 987LL) = 1;
        *((_BYTE *)v4 + 74) = 1;
        v29 = (CAnimatedTransitionVisual *)*((_QWORD *)v4 + 5);
        if ( v15 )
        {
          CAnimatedTransitionVisual::SetBeginAlpha(v29, 1.0);
          v30 = *((_QWORD *)v4 + 5);
          *(_DWORD *)(v30 + 932) = 0;
        }
        else
        {
          CAnimatedTransitionVisual::SetBeginAlpha(v29, 0.0);
          v30 = *((_QWORD *)v4 + 5);
          *(_DWORD *)(v30 + 932) = 1065353216;
        }
        CVisual::SetDirtyFlags((CVisual *)(v30 + 8), 0x1000u);
        if ( *((_DWORD *)v4 + 17) != 2 )
          *((_DWORD *)v4 + 17) = 1;
        *((_DWORD *)v12 + 14) = *((_DWORD *)v4 + 14) + 1;
      }
    }
    v5 = v38;
    goto LABEL_29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v11, 0x4B5u, v32);
LABEL_36:
  v12 = v36;
LABEL_29:
  if ( v12 )
    CBaseObject::Release(v12);
  if ( v4 )
    CBaseObject::Release(v4);
LABEL_33:
  *v5 = v8;
  return 1;
}
