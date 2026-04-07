/*
 * XREFs of ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002290
 * Callers:
 *     <none>
 * Callees:
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002410 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x1800026E0 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?GetPVLTarget@CLauncherDismiss@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180002800 (-GetPVLTarget@CLauncherDismiss@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800031E4 (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180014440 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18002F808 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18003010C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18003201C (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18003CCBC (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x18008F584 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800A9E34 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 */

char __fastcall CLauncherDismiss::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  char v8; // al
  char v9; // r13
  int v10; // edi
  char v11; // r12
  struct tagRECT *v12; // r14
  unsigned int v13; // r8d
  int v14; // eax
  int v16; // eax
  int v17; // eax
  struct tagRECT v18; // xmm6
  CBaseObject *v19; // rbx
  bool v20; // al
  unsigned int v21; // r8d
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int PVLTarget; // eax
  CBaseObject *v26; // rbx
  struct tagRECT v27; // xmm0
  __int64 v28; // rcx
  unsigned int v29; // [rsp+28h] [rbp-59h]
  struct tagRECT **v30; // [rsp+30h] [rbp-51h]
  struct CAnimationComponent **v31; // [rsp+30h] [rbp-51h]
  CBaseObject *v32; // [rsp+58h] [rbp-29h] BYREF
  struct tagRECT *v33; // [rsp+60h] [rbp-21h] BYREF
  int *v34; // [rsp+68h] [rbp-19h]
  struct tagRECT v35; // [rsp+70h] [rbp-11h] BYREF
  struct tagRECT v36; // [rsp+80h] [rbp-1h] BYREF

  v34 = a4;
  v8 = CFlyoutPopup::_WindowEnumCallback();
  v9 = v8;
  if ( *a4 >= 0 && v8 )
  {
    v10 = 0;
    v11 = 0;
    v32 = 0LL;
    if ( (a3 & 1) == 0 )
    {
      if ( (a3 & 4) == 0 || (*(_DWORD *)(a2 + 612) & 0xFFF) != 0x2B )
        goto LABEL_7;
      *(_BYTE *)(a1 + 136) = 1;
      goto LABEL_17;
    }
    CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v35);
    v33 = 0LL;
    v12 = (struct tagRECT *)(a1 + 120);
    CStoryboard::_GetIdealRects((struct CWindowData *)a2, (const struct tagRECT *)(a1 + 120), &v36, &v33, &v35, v30);
    v13 = *(_DWORD *)(a2 + 612);
    v14 = v13 & 0xFFF;
    switch ( v14 )
    {
      case 3:
        if ( *(_DWORD *)(a2 + 112) == 1 )
        {
          if ( *(_BYTE *)(a1 + 136) )
          {
            v36 = *v12;
            v18 = v36;
          }
          else
          {
            v18 = v35;
          }
          PVLTarget = CLauncherDismiss::GetPVLTarget(a1, v13);
          v17 = CStoryboard::_CreateAndAddDesktopAnimationComponent(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  PVLTarget,
                  &v36,
                  0,
                  &v32);
          v10 = v17;
          if ( v17 >= 0 )
          {
            v26 = v32;
            if ( *((_DWORD *)v32 + 17) != 2 )
            {
              v27 = *v12;
              *((_DWORD *)v32 + 17) = 2;
              *(struct tagRECT *)((char *)v26 + 104) = v27;
            }
            goto LABEL_14;
          }
          v29 = 2964;
          goto LABEL_25;
        }
        v24 = CLauncherDismiss::GetPVLTarget(a1, v13);
        v17 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v24,
                v33,
                0LL,
                -1,
                1,
                &v32);
        v10 = v17;
        if ( v17 < 0 )
        {
          v29 = 2952;
          goto LABEL_25;
        }
        break;
      case 22:
        v20 = ContainsRect((const struct tagRECT *)(a1 + 120), (const struct tagRECT *)(a2 + 48));
        if ( !v20 || !*(_BYTE *)(a1 + 136) )
        {
          if ( (*(_BYTE *)(a2 + 604) & 1) == 0 || *(char *)(a2 + 607) < 0 || !v20 )
            goto LABEL_7;
          v23 = CLauncherDismiss::GetPVLTarget(a1, v21);
          v17 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  0,
                  v23,
                  0LL,
                  0LL,
                  -1,
                  1,
                  &v32);
          v10 = v17;
          if ( v17 >= 0 )
          {
            v36 = *(struct tagRECT *)(a2 + 48);
            v18 = v36;
            goto LABEL_14;
          }
          v29 = 2943;
          goto LABEL_25;
        }
        v11 = 1;
        v22 = CLauncherDismiss::GetPVLTarget(a1, v21);
        v17 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                v22,
                1,
                &v32);
        v10 = v17;
        if ( v17 < 0 )
        {
          v29 = 2930;
          goto LABEL_25;
        }
        break;
      case 43:
        v11 = 1;
        v16 = CLauncherDismiss::GetPVLTarget(a1, v13);
        v17 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                v16,
                1,
                &v32);
        v10 = v17;
        if ( v17 >= 0 )
          break;
        v29 = 2982;
LABEL_25:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v17, v29, v31);
        goto LABEL_17;
      default:
LABEL_7:
        *v34 = v10;
        return v9;
    }
    v18 = v35;
LABEL_14:
    v19 = v32;
    if ( !v32 )
      goto LABEL_7;
    if ( !v11 )
    {
      CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v32 + 5), 0.0);
      CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v19 + 5), &v36);
      v28 = *((_QWORD *)v19 + 5);
      *(struct tagRECT *)(v28 + 872) = v18;
      CVisual::SetDirtyFlags((CVisual *)(v28 + 8), 0x1000u);
    }
LABEL_17:
    if ( v32 )
      CBaseObject::Release(v32);
    goto LABEL_7;
  }
  return v9;
}
