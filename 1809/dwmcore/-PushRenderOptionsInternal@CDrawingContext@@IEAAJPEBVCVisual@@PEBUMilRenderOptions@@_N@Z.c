/*
 * XREFs of ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180055A60
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x1800132E8 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180030C68 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008C84C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x180151148 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180163988 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017B634 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017CCF0 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BDEDC (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006A728 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CDrawingContext::PushRenderOptionsInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct MilRenderOptions *a3,
        char a4)
{
  unsigned int v7; // esi
  unsigned int v8; // eax
  int v9; // ebp
  __int64 v10; // rcx
  void *v11; // r15
  unsigned int v12; // ecx
  unsigned int v13; // eax
  void *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  int v20; // ebp
  int v21; // eax
  int v23; // edx
  unsigned int v24; // r12d
  unsigned int v25; // ecx
  SIZE_T v26; // r8
  unsigned __int64 v27; // rcx
  unsigned int v28; // r12d
  SIZE_T v29; // r8
  unsigned int v30; // ecx
  unsigned __int64 v31; // rax
  __int64 v32; // r8
  __int128 v33; // [rsp+30h] [rbp-48h]
  __int128 v34; // [rsp+30h] [rbp-48h]
  __int64 v35; // [rsp+40h] [rbp-38h]
  int v36; // [rsp+48h] [rbp-30h]

  v7 = -2147024362;
  if ( !a4 )
  {
LABEL_7:
    v14 = 0LL;
    v15 = *((unsigned int *)this + 245);
    LOBYTE(v36) = *((_BYTE *)this + 268);
    *(_QWORD *)&v34 = *((_QWORD *)this + 31);
    DWORD2(v34) = *((_DWORD *)this + 69);
    HIDWORD(v34) = *((_DWORD *)this + 64);
    v35 = *(_QWORD *)((char *)this + 260);
    v16 = *((unsigned int *)this + 244);
    if ( (_DWORD)v16 != (_DWORD)v15 )
    {
LABEL_8:
      v17 = *((_QWORD *)this + 124) + 28 * v16;
      *(_OWORD *)v17 = v34;
      *(_QWORD *)(v17 + 16) = v35;
      *(_DWORD *)(v17 + 24) = v36;
      v18 = *((_DWORD *)this + 250);
      v19 = *((_DWORD *)this + 244) + 1;
      *((_DWORD *)this + 244) = v19;
      if ( v18 <= v19 )
        v18 = v19;
      v20 = 0;
      *((_DWORD *)this + 250) = v18;
      goto LABEL_11;
    }
    v24 = 2 * v15;
    if ( (unsigned __int64)(2 * v15) > 0xFFFFFFFF )
    {
      v20 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024362, 0x4Cu);
LABEL_69:
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v20, 0x1865u);
      if ( a4 )
      {
        CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
          (char *)this + 448,
          0LL,
          v32);
        return v7;
      }
LABEL_12:
      if ( (*(_BYTE *)a3 & 1) != 0 )
        *((_BYTE *)this + 268) = *((_DWORD *)a3 + 4) != 1;
      v21 = *(_DWORD *)a3;
      if ( (*(_DWORD *)a3 & 2) == 0 )
        goto LABEL_14;
      v23 = *((_DWORD *)a3 + 1);
      if ( (v23 & 0xFF000000) == 0xFF000000 )
      {
        v23 &= 0xFFFFFFu;
      }
      else if ( *((_BYTE *)this + 6133) )
      {
LABEL_14:
        if ( (v21 & 8) != 0 )
        {
          *((_DWORD *)this + 63) = *((_DWORD *)a3 + 2);
          v21 = *(_DWORD *)a3;
        }
        if ( (v21 & 0x10) != 0 )
        {
          *((_DWORD *)this + 64) = *((_DWORD *)a3 + 5);
          v21 = *(_DWORD *)a3;
        }
        if ( (v21 & 0x20) != 0 )
        {
          *((_DWORD *)this + 65) = *((_DWORD *)a3 + 6);
          v21 = *(_DWORD *)a3;
        }
        if ( (v21 & 0x40) != 0 )
        {
          *((_DWORD *)this + 66) = *((_DWORD *)a3 + 7);
          v21 = *(_DWORD *)a3;
        }
        if ( (v21 & 4) != 0 )
          *((_DWORD *)this + 69) = *((_DWORD *)a3 + 3);
        return v7;
      }
      *((_DWORD *)this + 62) = v23;
      v21 = *(_DWORD *)a3;
      goto LABEL_14;
    }
    if ( v24 <= 0x40 )
      v24 = 64;
    v20 = 0;
    v25 = v24;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v24 <= 0x1C )
    {
      v20 = -2147024809;
    }
    else
    {
      v26 = 28LL * v24;
      if ( !v26 )
        v26 = 1LL;
      v14 = HeapAlloc(WPF::g_processHeap, 0, v26);
      if ( !v14 )
        v20 = -2147024882;
    }
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v20, 0x54u);
    }
    else
    {
      v27 = 28LL * *((unsigned int *)this + 244);
      if ( v27 <= 0xFFFFFFFF )
      {
        memcpy_0(v14, *((const void **)this + 124), (unsigned int)v27);
        WPF::ProcessHeapImpl::Free(*((void **)this + 124));
        v16 = *((unsigned int *)this + 244);
        *((_QWORD *)this + 124) = v14;
        *((_DWORD *)this + 245) = v24;
        goto LABEL_8;
      }
      v20 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, -2147024362, 0x56u);
    }
    if ( v14 )
      HeapFree(WPF::g_processHeap, 0, v14);
LABEL_11:
    v7 = v20;
    if ( v20 >= 0 )
      goto LABEL_12;
    goto LABEL_69;
  }
  v8 = *((_DWORD *)this + 112);
  v9 = 0;
  v10 = *((unsigned int *)this + 113);
  v11 = 0LL;
  LODWORD(v33) = 8;
  *((_QWORD *)&v33 + 1) = a2;
  if ( v8 != (_DWORD)v10 )
    goto LABEL_3;
  if ( (unsigned __int64)(2 * v10) > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024362, 0x4Cu);
    goto LABEL_6;
  }
  v28 = 2 * v10;
  if ( (unsigned int)(2 * v10) <= 0x40 )
    v28 = 64;
  v9 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v28 <= 0x10 )
  {
    v9 = -2147024809;
  }
  else
  {
    v29 = 16LL * v28;
    if ( !v29 )
      v29 = 1LL;
    v11 = HeapAlloc(WPF::g_processHeap, 0, v29);
    if ( !v11 )
      v9 = -2147024882;
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x54u);
  }
  else
  {
    v30 = -1;
    v31 = 16LL * *((unsigned int *)this + 112);
    if ( v31 <= 0xFFFFFFFF )
      v30 = 16 * *((_DWORD *)this + 112);
    v9 = 0;
    if ( v31 <= 0xFFFFFFFF )
    {
      memcpy_0(v11, *((const void **)this + 58), v30);
      WPF::ProcessHeapImpl::Free(*((void **)this + 58));
      v8 = *((_DWORD *)this + 112);
      *((_QWORD *)this + 58) = v11;
      *((_DWORD *)this + 113) = v28;
LABEL_3:
      *(_OWORD *)(*((_QWORD *)this + 58) + 16LL * v8) = v33;
      v12 = *((_DWORD *)this + 118);
      v13 = *((_DWORD *)this + 112) + 1;
      *((_DWORD *)this + 112) = v13;
      if ( v12 <= v13 )
        v12 = v13;
      *((_DWORD *)this + 118) = v12;
      goto LABEL_6;
    }
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, -2147024362, 0x56u);
  }
  if ( v11 )
    HeapFree(WPF::g_processHeap, 0, v11);
LABEL_6:
  if ( v9 >= 0 )
    goto LABEL_7;
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v9, 0x1855u);
  return (unsigned int)v9;
}
