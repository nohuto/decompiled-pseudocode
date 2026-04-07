/*
 * XREFs of ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180007B30
 * Callers:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x180007924 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180014D9C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18007BCB4 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x18007D268 (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18008BCF4 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x18008D100 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x1800AF420 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x1800AFB4C (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180007CFC (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ??$?0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180007D70 (--$-0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180007F54 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180010D80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180024100 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180027290 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CloneVisualTreeForLivePreview(
        CTopLevelWindow *this,
        bool a2,
        __int64 a3,
        __int64 a4,
        struct CTopLevelWindow **a5)
{
  __int64 v7; // rax
  __int64 v8; // rax
  char v9; // di
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // r15d
  char *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  char v25; // cl
  CVisual *v26; // rbp
  void *v27; // [rsp+28h] [rbp-190h]
  _BYTE v28[320]; // [rsp+30h] [rbp-188h] BYREF

  WindowFrameLoggingTelemetry::CloneWindow::CloneWindow((WindowFrameLoggingTelemetry::CloneWindow *)v28);
  v7 = *((_QWORD *)this + 35);
  if ( v7 )
  {
    if ( a2 || !*(_DWORD *)(v7 + 272) )
      v25 = 8;
    else
      v25 = 0;
    *(_BYTE *)(v7 + 84) &= ~8u;
    *(_BYTE *)(v7 + 84) |= v25;
  }
  v8 = *((_QWORD *)this + 36);
  v9 = 8 * a2;
  if ( v8 )
  {
    *(_BYTE *)(v8 + 84) &= ~8u;
    *(_BYTE *)(v8 + 84) |= v9;
  }
  v10 = *((_QWORD *)this + 65);
  if ( v10 )
  {
    *(_BYTE *)(v10 + 84) &= ~8u;
    *(_BYTE *)(v10 + 84) |= v9;
  }
  v11 = *((_QWORD *)this + 67);
  if ( v11 )
  {
    *(_BYTE *)(v11 + 84) &= ~8u;
    *(_BYTE *)(v11 + 84) |= v9;
  }
  v12 = *((_QWORD *)this + 64);
  if ( v12 )
  {
    *(_BYTE *)(v12 + 84) &= ~8u;
    *(_BYTE *)(v12 + 84) |= v9;
  }
  v13 = 0;
  v14 = (char *)this + 480;
  do
  {
    v15 = *(_QWORD *)v14;
    if ( *(_QWORD *)v14 )
    {
      *(_BYTE *)(v15 + 84) &= ~8u;
      *(_BYTE *)(v15 + 84) |= v9;
      if ( !a2 )
      {
        v26 = *(CVisual **)v14;
        v18 = 0;
        if ( *(_QWORD *)(*(_QWORD *)v14 + 392LL) )
        {
          *((_BYTE *)v26 + 280) |= 0x40u;
          CVisual::SetDirtyFlags(v26, 0x10000u);
          v18 = CVisual::RenderRecursive(v26);
        }
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x14EAu, v27);
          goto LABEL_26;
        }
      }
    }
    ++v13;
    v14 += 8;
  }
  while ( v13 < 4 );
  v16 = *((_QWORD *)this + 33);
  if ( v16 )
    *(_BYTE *)(v16 + 84) &= ~8u;
  v17 = CTopLevelWindow::CloneVisualTree(this, a5, 1, a2, (*((_DWORD *)this + 146) & 0x20) == 0);
  v18 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x14F6u, v27);
  }
  else
  {
    v19 = *((_QWORD *)this + 35);
    if ( v19 )
      *(_BYTE *)(v19 + 84) &= ~8u;
    v20 = *((_QWORD *)this + 36);
    if ( v20 )
      *(_BYTE *)(v20 + 84) &= ~8u;
    v21 = *((_QWORD *)this + 65);
    if ( v21 )
      *(_BYTE *)(v21 + 84) &= ~8u;
    v22 = *((_QWORD *)this + 67);
    if ( v22 )
      *(_BYTE *)(v22 + 84) &= ~8u;
    v23 = *((_QWORD *)this + 64);
    if ( v23 )
      *(_BYTE *)(v23 + 84) &= ~8u;
  }
LABEL_26:
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v28, (unsigned int)v18);
  WindowFrameLoggingTelemetry::CloneWindow::~CloneWindow((WindowFrameLoggingTelemetry::CloneWindow *)v28);
  return (unsigned int)v18;
}
