/*
 * XREFs of ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800034A0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x18001AE88 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x180029D78 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x180056380 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z.c)
 *     ?ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS@@@Z @ 0x18005ED84 (-ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETM.c)
 *     ?ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETALPHAMARGINS@@@Z @ 0x18005EE54 (-ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETALPHAMARG.c)
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x1800646E0 (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x18006578C (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x180068040 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x180068524 (-ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@.c)
 *     ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x18006B06C (-ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x18006DB84 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x18006EEB8 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?ProcessSetLayeredWindow@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYEREDWINDOW@@@Z @ 0x180072D58 (-ProcessSetLayeredWindow@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYEREDW.c)
 *     ?ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETMODESTODEFAULT@@@Z @ 0x1800742EC (-ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETMODESTODEFAULT@.c)
 *     ?ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYOUTRTL@@@Z @ 0x180075B48 (-ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYOUTRTL@@@.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180075DB0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETEXCLUDESUBTREE@@@Z @ 0x180076778 (-ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETEXCLUDESUBTREE@.c)
 *     ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_RESAMPLEMODE@@@Z @ 0x18007A98C (-ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_RESAMPLEMODE@@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x18008F748 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18009EC60 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x18009FB94 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18009FD28 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETTOUCHTARGETRECT@@@Z @ 0x1800A189C (-ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETTOUCHTARGETREC.c)
 *     ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x1800A2080 (-ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z.c)
 *     ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x1800A2464 (-ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITECLIP@.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x1800A2818 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x1800A2E28 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1800A3D0C (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800A59B0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x1800A5B60 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800A8CC8 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x1800A9030 (-ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800A9C8C (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x1800A9F28 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x1800AE5A0 (-ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSO.c)
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x1800E4CB0 (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWIND.c)
 *     ?ProcessEnableRendering@CCursorVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CURSORVISUAL_ENABLERENDERING@@@Z @ 0x180193E1C (-ProcessEnableRendering@CCursorVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CURSORVISUAL_ENABLERE.c)
 *     ?ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETSHADOW@@@Z @ 0x1801A4A50 (-ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETSHADOW@@@Z.c)
 *     ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_FORCELOWCOLOR@@@Z @ 0x1801B77D0 (-ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_FORCELOWCOLOR@@@Z.c)
 *     ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x1801B781C (-ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@.c)
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801B78E4 (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTEXTOVERRI.c)
 *     ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x1801B79D4 (-ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z.c)
 *     ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x1801B7AFC (-ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETREDRAWREGIONM.c)
 *     ?ProcessProtectContent@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_PROTECTCONTENT@@@Z @ 0x1801B9C10 (-ProcessProtectContent@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_PROTECTCONTEN.c)
 *     ?ProcessSetDxAlpha@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXALPHA@@@Z @ 0x1801B9D24 (-ProcessSetDxAlpha@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXALPHA@@@Z.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801B9ED0 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x180225A60 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A2C30 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x18015ACEC (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x18017ED50 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ @ 0x1801B8154 (-ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CVisual::PropagateFlags(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  BOOL v7; // r12d
  _DWORD *v8; // r8
  __int64 result; // rax
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rbp
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  __int64 v22; // r15
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  _BYTE *v25; // rdx
  unsigned int i; // eax
  _QWORD ***v27; // r15
  _QWORD **v28; // r15
  _QWORD *v29; // r14
  int v30; // eax
  unsigned int v31; // ecx

  v3 = *(_QWORD *)(a1 + 24);
  v4 = a2 | 0x10;
  if ( (a2 & 1) == 0 )
    v4 = a2;
  v7 = !(a2 & 1);
  if ( (v3 & 2) != 0 )
    v3 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v3) = v3 & 1;
  if ( (_DWORD)v3 )
  {
    v21 = 0LL;
    v22 = (unsigned int)v3;
    do
    {
      v23 = CPtrArrayBase::operator[]((__int64 *)(a1 + 24), v21);
      if ( v23 != *(_QWORD *)(a1 + 80) )
        (*(void (__fastcall **)(unsigned __int64, BOOL, __int64))(*(_QWORD *)v23 + 64LL))(v23, v7, a1);
      ++v21;
      --v22;
    }
    while ( v22 );
  }
  if ( (v4 & 7) != 0 && (a3 & 1) == 0 )
  {
    v8 = *(_DWORD **)(a1 + 224);
    if ( (*v8 & 0x40000000) != 0 )
    {
      v24 = (unsigned int)v8[1];
      v25 = v8 + 2;
      for ( i = 0; i < (unsigned int)v24; ++v25 )
      {
        if ( *v25 == 2 )
          break;
        ++i;
      }
      v27 = i >= (unsigned int)v24 ? 0LL : (_QWORD ***)((char *)v8 + v24 + 8LL * i - (((_BYTE)v24 + 15) & 7) + 15);
      v28 = *v27;
      if ( v28 )
      {
        v29 = *v28;
        if ( *v28 != v28 )
        {
          while ( 1 )
          {
            v30 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)(v29 - 11));
            if ( v30 < 0 )
              break;
            CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(v29 - 11));
            v29 = (_QWORD *)*v29;
            if ( v29 == v28 )
              goto LABEL_9;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x133Bu);
        }
      }
    }
LABEL_9:
    if ( (a3 & 2) != 0 )
      CVisual::ResetVisibleRegionForAllInSubtree((CVisual *)a1);
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  v10 = result;
  *(_DWORD *)(a1 + 88) |= v4 & 0x7F;
  if ( (v4 & 0xC) != 0 )
  {
    v4 = v4 & 0xFFFFFFB3 | 0x40;
    if ( result )
      ++*(_DWORD *)(result + 28);
  }
  if ( (v4 & 2) != 0 )
    v4 = v4 & 0xFFFFFFDD | 0x20;
  v11 = *(_QWORD *)(a1 + 80);
  if ( (*(_BYTE *)(a1 + 95) & 8) != 0 )
  {
    do
    {
      if ( !v11 )
        break;
      result = v4 & ((int)(*(_DWORD *)(v11 + 88) << 25) >> 25);
      if ( (_DWORD)result == v4 )
        break;
      *(_DWORD *)(v11 + 88) |= v4 & 0x7F;
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 128LL))(v11);
      v13 = v12;
      if ( v12 )
      {
        if ( (v4 & 0x40) != 0 && v12 != v10 )
          ++*(_DWORD *)(v12 + 24);
      }
      else
      {
        v13 = v10;
      }
      v14 = *(_QWORD *)(v11 + 24);
      if ( (v14 & 2) != 0 )
        v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v14) = v14 & 1;
      if ( (_DWORD)v14 )
      {
        v15 = 0LL;
        v16 = (unsigned int)v14;
        v17 = 16LL;
        do
        {
          v18 = *(_QWORD *)(v11 + 24);
          if ( (v18 & 2) != 0 )
            v19 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v19 = *(_QWORD *)(v11 + 24) & 1LL;
          if ( v15 >= v19 )
          {
            v20 = 0LL;
          }
          else if ( v19 == 1 )
          {
            v20 = v18 & 0xFFFFFFFFFFFFFFFCuLL;
          }
          else
          {
            _mm_lfence();
            v20 = *(_QWORD *)((*(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFFFFFFCuLL) + v17);
          }
          if ( v20 != *(_QWORD *)(v11 + 80) )
            (*(void (__fastcall **)(unsigned __int64, BOOL, __int64))(*(_QWORD *)v20 + 64LL))(v20, v7, v11);
          ++v15;
          v17 += 8LL;
          --v16;
        }
        while ( v16 );
      }
      result = v11;
      v10 = v13;
      v11 = *(_QWORD *)(v11 + 80);
    }
    while ( (*(_BYTE *)(result + 95) & 8) != 0 );
  }
  return result;
}
