/*
 * XREFs of ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18002B19C
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001F520 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18002B368 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180075684 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x180076BD4 (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18008550C (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x180087344 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x1800AB440 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x1800ABB7C (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180027500 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18002A800 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002AE08 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ??$?0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18002B034 (--$-0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18002B0E8 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CloneVisualTreeForLivePreview(
        CTopLevelWindow *this,
        char a2,
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
  _BYTE v27[320]; // [rsp+30h] [rbp-188h] BYREF

  WindowFrameLoggingTelemetry::CloneWindow::CloneWindow((WindowFrameLoggingTelemetry::CloneWindow *)v27);
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
          CVisual::SetDirtyFlags(v26, 0x10000);
          v18 = CVisual::RenderRecursive(v26);
        }
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x155Cu);
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
  v17 = CTopLevelWindow::CloneVisualTree(this, a5, 1);
  v18 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x1568u);
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
  wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v27, v18);
  WindowFrameLoggingTelemetry::CloneWindow::~CloneWindow((WindowFrameLoggingTelemetry::CloneWindow *)v27);
  return (unsigned int)v18;
}
