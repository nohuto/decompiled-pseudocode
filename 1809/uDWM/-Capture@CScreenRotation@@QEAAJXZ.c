/*
 * XREFs of ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800A08E8
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x18008B184 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18008C580 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 * Callees:
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800024B0 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180005120 (-Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18000B884 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001CDE0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001D720 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002B57C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002FCB0 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180032B04 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180032BA0 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18003B5BC (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18003B690 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x1800779B8 (McTemplateU0.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x180088668 (-SetRotation@CVisual@@QEAAXN@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800A1858 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800A1B64 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 */

__int64 __fastcall CScreenRotation::Capture(CScreenRotation *this, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  void *v5; // rdx
  CWindowList *v6; // r15
  bool v7; // dl
  CAnimatedTransitionVisual **v8; // rsi
  LONG v9; // r14d
  LONG v10; // eax
  struct CVisual *RootVisualForDesktop; // r14
  int inserted; // eax
  CAnimatedTransitionVisual *v13; // rcx
  __int64 v14; // rcx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  LONG v16; // r15d
  CAnimatedTransitionVisual *v17; // rcx
  CAnimatedTransitionVisual *v18; // rcx
  CAnimatedTransitionVisual *v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-39h]
  struct tagSIZE v22; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-21h] BYREF
  struct tagSIZE v24; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v25[20]; // [rsp+48h] [rbp-11h] BYREF
  int v26; // [rsp+5Ch] [rbp+3h]
  int v27; // [rsp+60h] [rbp+7h]
  int v28; // [rsp+6Ch] [rbp+13h]
  int v29; // [rsp+70h] [rbp+17h]
  struct tagRECT v30; // [rsp+78h] [rbp+1Fh] BYREF

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
  if ( v30.right - v30.left < 0 )
    v9 = 0;
  v10 = v30.bottom - v30.top;
  v22.cx = v9;
  if ( v30.bottom - v30.top < 0 )
    v10 = 0;
  v22.cy = v10;
  if ( *v8 )
  {
    v16 = 0;
    if ( v30.bottom - v30.top >= 0 )
      v16 = v30.bottom - v30.top;
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
      v22.cx = v16;
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
  inserted = CAnimatedTransitionVisual::Create(
               *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
               (struct CAnimatedTransitionVisual **)this + 39);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v21 = 90;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v21);
    return v4;
  }
  if ( *v8 )
  {
    inserted = CAnimatedTransitionVisual::SetVisual((struct CResource **)*v8, RootVisualForDesktop, 1, &v30);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v21 = 92;
      goto LABEL_17;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v8, &v30);
    v13 = *v8;
    *(struct tagRECT *)((char *)v13 + 872) = v30;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v13 + 8), 4096);
    v14 = (__int64)*v8 + 8;
    v24 = v22;
    (*(void (__fastcall **)(__int64, struct tagSIZE *))(*(_QWORD *)v14 + 96LL))(v14, &v24);
    *((struct tagSIZE *)*v8 + 119) = v22;
    CVisual::SetInterpolationMode((unsigned int *)*v8 + 2, 1u);
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v6);
    inserted = VisualCollection::InsertRelative(
                 (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                 this,
                 0LL,
                 0,
                 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v21 = 104;
      goto LABEL_17;
    }
    inserted = CVisual::MoveToFront(this, 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v21 = 105;
      goto LABEL_17;
    }
    goto LABEL_34;
  }
  v4 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x5Bu);
  return v4;
}
