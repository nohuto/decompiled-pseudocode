/*
 * XREFs of ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800AC820
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800033E8 (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180010D80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x180028918 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x18002E1F4 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18002E918 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800311C4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180032D6C (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18003C594 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x18008F224 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     _lambda_81f2de84cd03038fe2b12ca1386d224e_::operator() @ 0x1800A7138 (_lambda_81f2de84cd03038fe2b12ca1386d224e_--operator().c)
 *     ?GetPVLTarget@CAppSwitch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800A7830 (-GetPVLTarget@CAppSwitch@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800A9D8C (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x1800AA690 (-_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800AD100 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 */

char __fastcall CAppSwitch::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  int v7; // eax
  unsigned int v8; // r15d
  int v9; // edi
  CAnimatedTransitionVisual **v10; // r13
  char v11; // r14
  struct tagRECT *v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  CBaseObject *v23; // r14
  int PVLTarget; // eax
  int v25; // eax
  bool v26; // zf
  int v27; // edx
  int v28; // eax
  CBaseObject *v29; // r14
  struct tagPOINT *v30; // rcx
  __int64 v31; // rcx
  CBaseObject *v32; // rbx
  char result; // al
  CBaseObject *v34; // [rsp+50h] [rbp-39h] BYREF
  CBaseObject *v35; // [rsp+58h] [rbp-31h] BYREF
  CBaseObject *v36; // [rsp+60h] [rbp-29h] BYREF
  int *v37; // [rsp+68h] [rbp-21h]
  struct tagRECT v38; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v40; // [rsp+90h] [rbp+7h] BYREF

  v37 = a4;
  CGroupingStoryboard::_WindowEnumCallback();
  v7 = *(_DWORD *)(a2 + 612);
  v34 = 0LL;
  v8 = v7 & 0xFFF;
  v36 = 0LL;
  v35 = 0LL;
  v9 = 0;
  v10 = 0LL;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_85;
    if ( v8 == 2 )
    {
      *(_BYTE *)(a1 + 168) = 0;
      goto LABEL_85;
    }
    if ( v8 != 3 )
      goto LABEL_85;
    CLaunchSwitchBase::_RecordMonitorRectForWindow((CLaunchSwitchBase *)a1, (const struct CWindowData *)a2);
    goto LABEL_77;
  }
  if ( (v7 & 0x1000000) == 0 || (v11 = 1, IsRectEmpty((const RECT *)(a2 + 616))) )
    v11 = 0;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v38);
  v12 = (struct tagRECT *)(a2 + 632);
  if ( !v11 )
    v12 = &v38;
  v40 = *v12;
  rc = v40;
  switch ( v8 )
  {
    case 2u:
      if ( *(_DWORD *)(a2 + 112) == 1 )
        *(_DWORD *)(a2 + 612) |= 0x4000000u;
      PVLTarget = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 612));
      v25 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              0,
              PVLTarget,
              (struct tagRECT *)((a2 + 616) & -(__int64)(v11 != 0)),
              0LL,
              0x11u,
              1,
              &v34);
      v9 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v25, 0x9C4u);
        goto LABEL_77;
      }
      if ( *((_DWORD *)v34 + 17) != 2 )
        *((_DWORD *)v34 + 17) = 1;
      v26 = !CStoryboard::IsRTL();
      v27 = 0;
      if ( v26 )
      {
        if ( v38.right - v38.left >= 0 )
          v27 = v38.right - v38.left;
        v27 = -v27;
      }
      else if ( v38.right - v38.left >= 0 )
      {
        v27 = v38.right - v38.left;
      }
      OffsetRect(&rc, v27, 0);
      goto LABEL_61;
    case 3u:
      if ( *(_DWORD *)(a2 + 112) == 1 )
        *(_DWORD *)(a2 + 612) |= 0x4000000u;
      if ( *(_BYTE *)(a1 + 168) )
        v20 = 3;
      else
        v20 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 612));
      if ( v11 )
      {
        v21 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v20,
                (struct tagRECT *)(a2 + 616),
                0LL,
                0xFFFFFFFF,
                1,
                &v34);
        v9 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v21, 0x982u);
          goto LABEL_77;
        }
      }
      else
      {
        v22 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v20,
                0LL,
                0LL,
                0xFFFFFFFF,
                1,
                &v34);
        v9 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v22, 0x986u);
          goto LABEL_77;
        }
      }
      v23 = v34;
      CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v34 + 5), 0.0);
      if ( *((_DWORD *)v23 + 17) != 2 )
        *((_DWORD *)v23 + 17) = 1;
      goto LABEL_61;
    case 0x16u:
      if ( !CWindowData::IsWindowVisibleAndUncloaked((CWindowData *)a2)
        || !ContainsRect((const struct tagRECT *)(a1 + 152), (const struct tagRECT *)(a2 + 48)) )
      {
        goto LABEL_85;
      }
      if ( *(_BYTE *)(a1 + 168) )
        v18 = 7;
      else
        v18 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 612));
      v19 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              0,
              v18,
              0LL,
              0LL,
              0xFFFFFFFF,
              1,
              &v34);
      v9 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v19, 0x99Bu);
        goto LABEL_77;
      }
      if ( *((_DWORD *)v34 + 17) != 2 )
        *((_DWORD *)v34 + 17) = 1;
      v40 = *(struct tagRECT *)((char *)v34 + 88);
      rc = v40;
      goto LABEL_61;
    case 0x1Cu:
      if ( *(_BYTE *)(a1 + 168) )
        v15 = 5;
      else
        v15 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 612));
      if ( v11 )
      {
        v16 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v15,
                (struct tagRECT *)(a2 + 616),
                0LL,
                0xFFFFFFFF,
                1,
                &v34);
        v9 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v16, 0x9ACu);
          goto LABEL_77;
        }
      }
      else
      {
        v17 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v15,
                0LL,
                0LL,
                0xFFFFFFFF,
                1,
                &v34);
        v9 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v17, 0x9B0u);
          goto LABEL_77;
        }
      }
      if ( *((_DWORD *)v34 + 17) != 2 )
        *((_DWORD *)v34 + 17) = 1;
LABEL_61:
      if ( !v34 )
        goto LABEL_85;
      if ( v8 == 3 || v8 <= 0x1C && (v28 = 272629764, _bittest(&v28, v8)) )
      {
        v29 = v34;
        *(_QWORD *)&v38.left = a1;
        v30 = (struct tagPOINT *)*((_QWORD *)v34 + 5);
        v38.right = v30[116].x;
        CAnimatedTransitionVisual::SetBeginRect(v30, &v40);
        v31 = *((_QWORD *)v29 + 5);
        *(struct tagRECT *)(v31 + 872) = rc;
        CVisual::SetDirtyFlags((CVisual *)(v31 + 8), 4096);
        if ( v8 - 2 <= 1 )
          lambda_81f2de84cd03038fe2b12ca1386d224e_::operator()((__int64)&v38, (CAnimatedTransitionVisual **)v29);
        if ( (*(_DWORD *)(a2 + 612) & 0x18000) != 0 )
        {
          CGroupingStoryboard::_CreateGuttersForApp(
            (CStoryboard *)a1,
            a2,
            &v40,
            &rc.left,
            v8,
            (CBaseObject *)&v36,
            &v35);
          v10 = (CAnimatedTransitionVisual **)v36;
          if ( v36 )
            lambda_81f2de84cd03038fe2b12ca1386d224e_::operator()((__int64)&v38, (CAnimatedTransitionVisual **)v36);
          v32 = v35;
          if ( v35 )
            lambda_81f2de84cd03038fe2b12ca1386d224e_::operator()((__int64)&v38, v10);
          goto LABEL_78;
        }
      }
LABEL_77:
      v32 = v35;
LABEL_78:
      if ( v34 )
        CBaseObject::Release(v34);
      if ( v10 )
        CBaseObject::Release((CBaseObject *)v10);
      goto LABEL_83;
    case 0x2Bu:
      v13 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 612));
      v14 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              v13,
              1,
              &v34);
      v9 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0x9CDu);
        goto LABEL_77;
      }
      goto LABEL_61;
  }
  v32 = v35;
LABEL_83:
  if ( v32 )
    CBaseObject::Release(v32);
LABEL_85:
  result = 1;
  *v37 = v9;
  return result;
}
