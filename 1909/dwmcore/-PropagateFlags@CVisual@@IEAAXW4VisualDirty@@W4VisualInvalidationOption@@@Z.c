/*
 * XREFs of ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18006C430
 * Callers:
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x18001E2B0 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800219C0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x1800340B8 (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJAEBVCRegion@@_N1@Z @ 0x18006BD90 (-NotifyDirtySurface@CWindowNode@@QEAAJAEBVCRegion@@_N1@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180078CC0 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x180078F04 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x180079560 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18007B610 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18007B820 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGETRECT@@@Z @ 0x18007C294 (-ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGET.c)
 *     ?ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETALPHAMARGINS@@@Z @ 0x18009A2F8 (-ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETALPHAM.c)
 *     ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x18009A384 (-ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SE.c)
 *     ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x18009A5B8 (-ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITECL.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1800A0844 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1800A1140 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x1800A2DE0 (-ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORM@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x1800A2F2C (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1800A31D0 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x1800A3370 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x1800A9FDC (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x1800AD7FC (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800ADAAC (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS@@@Z @ 0x1800ADC04 (-ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_S.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x1800B7E50 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@.c)
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x1800C082C (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800C3204 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x1800C3790 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x1800C6EDC (-ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRENDEROPTIONS.c)
 *     ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x1800C8520 (-ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z.c)
 *     ?ProcessSetLayeredWindow@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETLAYEREDWINDOW@@@Z @ 0x1800D0098 (-ProcessSetLayeredWindow@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETLAYER.c)
 *     ?ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETMODESTODEFAULT@@@Z @ 0x1800D2EE0 (-ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETMODESTODEFAU.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D3FD0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETLAYOUTRTL@@@Z @ 0x1800D47A0 (-ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETLAYOUTRTL.c)
 *     ?ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDESUBTREE@@@Z @ 0x1800D56EC (-ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDESUBTR.c)
 *     ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z @ 0x1800E6D18 (-ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1801C16F4 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z @ 0x1801C27AC (-ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z.c)
 *     ?ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z @ 0x1801C27E0 (-ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z.c)
 *     ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x1801C2864 (-ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFO.c)
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801C2938 (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVE.c)
 *     ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x1801C2A28 (-ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z.c)
 *     ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x1801C2B24 (-ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETREDRAWREGI.c)
 *     ?SetIntegerProperty@CVisual@@UEAAJI_J@Z @ 0x1801C3250 (-SetIntegerProperty@CVisual@@UEAAJI_J@Z.c)
 *     ?ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETSHADOW@@@Z @ 0x1801C7824 (-ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETSHADOW@@@Z.c)
 *     ?ProcessEnableRendering@CCursorVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CURSORVISUAL_ENABLERENDERING@@@Z @ 0x180212B6C (-ProcessEnableRendering@CCursorVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CURSORVISUAL_ENABL.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x18021846C (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1802544A0 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180037458 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x18017F290 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x1801A76EC (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ @ 0x1801C2EC0 (-ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ.c)
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
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x1424u, 0LL);
        }
      }
    }
LABEL_9:
    if ( (a3 & 2) != 0 )
      CVisual::ResetVisibleRegionForAllInSubtree((CVisual *)a1);
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
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
  if ( (*(_BYTE *)(a1 + 95) & 4) != 0 )
  {
    do
    {
      if ( !v11 )
        break;
      result = v4 & ((int)(*(_DWORD *)(v11 + 88) << 25) >> 25);
      if ( (_DWORD)result == v4 )
        break;
      *(_DWORD *)(v11 + 88) |= v4 & 0x7F;
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 160LL))(v11);
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
    while ( (*(_BYTE *)(result + 95) & 4) != 0 );
  }
  return result;
}
