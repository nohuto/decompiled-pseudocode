/*
 * XREFs of ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800A50A8
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x180091384 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x1800925CC (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 * Callees:
 *     ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800033E0 (-Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180011D90 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180014440 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001821C (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800182C0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023D10 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002C464 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18002F808 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18003010C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180030358 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180031374 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180032C14 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18007E2D8 (McTemplateU0.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x18008E7E8 (-SetRotation@CVisual@@QEAAXN@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800A602C (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800A6338 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 */

__int64 __fastcall CScreenRotation::Capture(CScreenRotation *this, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  void *v5; // rdx
  CWindowList *v6; // r12
  bool v7; // dl
  CAnimatedTransitionVisual **v8; // rsi
  LONG v9; // r14d
  LONG v10; // r15d
  LONG v11; // eax
  struct CVisual *RootVisualForDesktop; // r14
  int inserted; // eax
  CAnimatedTransitionVisual *v14; // rcx
  __int64 v15; // rcx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  CAnimatedTransitionVisual *v17; // rcx
  CAnimatedTransitionVisual *v18; // rcx
  CAnimatedTransitionVisual *v19; // rcx
  unsigned int v21; // [rsp+28h] [rbp-39h]
  struct tagSIZE v22; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-21h] BYREF
  struct tagSIZE v24; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v25[20]; // [rsp+50h] [rbp-11h] BYREF
  int v26; // [rsp+64h] [rbp+3h]
  int v27; // [rsp+68h] [rbp+7h]
  int v28; // [rsp+74h] [rbp+13h]
  int v29; // [rsp+78h] [rbp+17h]
  struct tagRECT v30; // [rsp+80h] [rbp+1Fh] BYREF

  v4 = 0;
  if ( *((_BYTE *)this + 380) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v5 = &UdwmHardwareExpression_Capture_Info;
LABEL_6:
      McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)v5, a3);
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v5 = &UdwmScreenRotation_Capture_Info;
    goto LABEL_6;
  }
  GetDesktopID(1LL, &v23);
  v30.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 111);
  v30.right = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 113) + v30.left;
  v30.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 112);
  v30.bottom = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 114) + v30.top;
  v6 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61);
  if ( !*((_BYTE *)this + 328) || (v7 = 1, *((_DWORD *)this + 90) != -1) )
    v7 = 0;
  CScreenRotation::Stop(this, v7);
  v8 = (CAnimatedTransitionVisual **)((char *)this + 312);
  v9 = v30.right - v30.left;
  v10 = 0;
  if ( v30.right - v30.left < 0 )
    v9 = 0;
  v11 = v30.bottom - v30.top;
  v22.cx = v9;
  if ( v30.bottom - v30.top < 0 )
    v11 = 0;
  v22.cy = v11;
  if ( v30.bottom - v30.top >= 0 )
    v10 = v30.bottom - v30.top;
  if ( *v8 )
  {
    if ( *((_BYTE *)this + 331) )
    {
      CVisual::SetRotation(this, (double)*((int *)this + 84));
      CVisual::SetOffset((struct tagPOINT *)this, (const struct tagPOINT *)((char *)this + 348));
      v17 = *v8;
      v26 = 0;
      v27 = 0;
      CAnimatedTransitionVisual::Translate2D(v17, (const struct TA_TRANSFORM_2D *)v25);
      v18 = *v8;
      v26 = 1065353216;
      v27 = 1065353216;
      v28 = 1056964608;
      v29 = 1056964608;
      CAnimatedTransitionVisual::Scale2D(v18, (const struct TA_TRANSFORM_2D *)v25);
      CAnimatedTransitionVisual::SetBeginAlpha(*v8, 0.0);
      *((_DWORD *)*v8 + 235) = 0;
    }
    if ( abs32(*((_DWORD *)this + 83)) == 90 )
    {
      v22.cy = v9;
      v22.cx = v10;
    }
    else
    {
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v8, &v30);
      v19 = *v8;
      *(struct tagRECT *)((char *)v19 + 872) = v30;
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v19 + 8), 4096);
    }
LABEL_34:
    VisualCollection::InsertRelative(
      (CScreenRotation *)((char *)this + 32),
      (struct CVisual *)(((unsigned __int64)*v8 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v8 >> 64)),
      0LL,
      0,
      1);
    CScreenRotation::UpdateBackgroundInstructionsAndSize(this, &v22, 1);
    return v4;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(v6, v23);
  inserted = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 39);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v21 = 89;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v21);
    return v4;
  }
  if ( *v8 )
  {
    inserted = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)*v8, RootVisualForDesktop, 1, &v30);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v21 = 91;
      goto LABEL_19;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v8, &v30);
    v14 = *v8;
    *(struct tagRECT *)((char *)v14 + 872) = v30;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v14 + 8), 4096);
    v15 = (__int64)*v8 + 8;
    v24 = v22;
    (*(void (__fastcall **)(__int64, struct tagSIZE *))(*(_QWORD *)v15 + 96LL))(v15, &v24);
    *((struct tagSIZE *)*v8 + 119) = v22;
    CVisual::SetInterpolationMode((unsigned int *)*v8 + 2, 1u);
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v6, v23);
    inserted = VisualCollection::InsertRelative(
                 (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                 this,
                 0LL,
                 0,
                 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v21 = 103;
      goto LABEL_19;
    }
    inserted = CVisual::MoveToFront(this, 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v21 = 104;
      goto LABEL_19;
    }
    goto LABEL_34;
  }
  v4 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x5Au);
  return v4;
}
