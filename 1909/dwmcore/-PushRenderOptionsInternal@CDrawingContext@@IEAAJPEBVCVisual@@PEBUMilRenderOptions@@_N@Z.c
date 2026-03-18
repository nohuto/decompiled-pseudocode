/*
 * XREFs of ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800AF1C0
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180012D38 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18004FCC0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18005B6F4 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DCD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180068B40 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18016C44C (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017BAE4 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017D230 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x180191538 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FE124 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180050F9C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AF4EC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 */

__int64 __fastcall CDrawingContext::PushRenderOptionsInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct MilRenderOptions *a3,
        char a4)
{
  unsigned int v7; // ebp
  unsigned int v8; // eax
  __int64 v9; // rcx
  signed int v10; // ebx
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // rax
  signed int v16; // ebx
  __int64 v17; // xmm1_8
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v25; // edx
  unsigned int v26; // r15d
  signed int v27; // eax
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  void *v30; // rbx
  unsigned int v31; // r15d
  signed int v32; // eax
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  void *v35; // rbx
  void *v36; // r15
  HANDLE v37; // rax
  void *v38; // rbp
  HANDLE ProcessHeap; // rax
  void *lpMem; // [rsp+30h] [rbp-58h] BYREF
  __int128 v41; // [rsp+38h] [rbp-50h]
  __int64 v42; // [rsp+48h] [rbp-40h]
  int v43; // [rsp+50h] [rbp-38h]

  v7 = -2147024362;
  if ( !a4 )
  {
LABEL_7:
    v14 = *((unsigned int *)this + 245);
    LOBYTE(v43) = *((_BYTE *)this + 268);
    *(_QWORD *)&v41 = *((_QWORD *)this + 31);
    DWORD2(v41) = *((_DWORD *)this + 69);
    HIDWORD(v41) = *((_DWORD *)this + 64);
    v42 = *(_QWORD *)((char *)this + 260);
    v15 = *((unsigned int *)this + 244);
    lpMem = 0LL;
    if ( (_DWORD)v15 != (_DWORD)v14 )
    {
LABEL_8:
      v16 = 0;
      v17 = v42;
      v18 = 28 * v15;
      v19 = v43;
      v20 = *((_QWORD *)this + 124) + v18;
      *(_OWORD *)v20 = v41;
      *(_QWORD *)(v20 + 16) = v17;
      *(_DWORD *)(v20 + 24) = v19;
      v21 = *((_DWORD *)this + 250);
      v22 = (unsigned int)(*((_DWORD *)this + 244) + 1);
      *((_DWORD *)this + 244) = v22;
      if ( v21 <= (unsigned int)v22 )
        v21 = v22;
      *((_DWORD *)this + 250) = v21;
      goto LABEL_11;
    }
    v26 = 2 * v14;
    if ( (unsigned __int64)(2 * v14) > 0xFFFFFFFF )
    {
      v16 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, 0x80070216, 0x4Cu, 0LL);
LABEL_54:
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v16, 0x17B9u, 0LL);
      if ( a4 )
      {
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 112, 0LL);
        return v7;
      }
LABEL_12:
      if ( (*(_BYTE *)a3 & 1) != 0 )
        *((_BYTE *)this + 268) = *((_DWORD *)a3 + 4) != 1;
      v23 = *(_DWORD *)a3;
      if ( (*(_DWORD *)a3 & 2) == 0 )
        goto LABEL_14;
      v25 = *((_DWORD *)a3 + 1);
      if ( (v25 & 0xFF000000) == 0xFF000000 )
      {
        v25 &= 0xFFFFFFu;
      }
      else if ( *((_BYTE *)this + 6133) )
      {
LABEL_14:
        if ( (v23 & 8) != 0 )
        {
          *((_DWORD *)this + 63) = *((_DWORD *)a3 + 2);
          v23 = *(_DWORD *)a3;
        }
        if ( (v23 & 0x10) != 0 )
        {
          *((_DWORD *)this + 64) = *((_DWORD *)a3 + 5);
          v23 = *(_DWORD *)a3;
        }
        if ( (v23 & 0x20) != 0 )
        {
          *((_DWORD *)this + 65) = *((_DWORD *)a3 + 6);
          v23 = *(_DWORD *)a3;
        }
        if ( (v23 & 0x40) != 0 )
        {
          *((_DWORD *)this + 66) = *((_DWORD *)a3 + 7);
          v23 = *(_DWORD *)a3;
        }
        if ( (v23 & 4) != 0 )
          *((_DWORD *)this + 69) = *((_DWORD *)a3 + 3);
        return v7;
      }
      *((_DWORD *)this + 62) = v25;
      v23 = *(_DWORD *)a3;
      goto LABEL_14;
    }
    if ( v26 <= 0x40 )
      v26 = 64;
    v27 = HrMalloc(0x1CuLL, v26, &lpMem);
    v16 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x53u, 0LL);
    }
    else
    {
      v29 = 28LL * *((unsigned int *)this + 244);
      if ( v29 <= 0xFFFFFFFF )
      {
        v30 = lpMem;
        memcpy_0(lpMem, *((const void **)this + 124), (unsigned int)v29);
        operator delete(*((void **)this + 124));
        v15 = *((unsigned int *)this + 244);
        *((_QWORD *)this + 124) = v30;
        *((_DWORD *)this + 245) = v26;
        goto LABEL_8;
      }
      v16 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, 0x80070216, 0x55u, 0LL);
    }
    v38 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v38);
    }
LABEL_11:
    v7 = v16;
    if ( v16 >= 0 )
      goto LABEL_12;
    goto LABEL_54;
  }
  v8 = *((_DWORD *)this + 112);
  v9 = *((unsigned int *)this + 113);
  LODWORD(v41) = 8;
  *((_QWORD *)&v41 + 1) = a2;
  lpMem = 0LL;
  if ( v8 != (_DWORD)v9 )
    goto LABEL_3;
  v31 = 2 * v9;
  if ( (unsigned __int64)(2 * v9) > 0xFFFFFFFF )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x80070216, 0x4Cu, 0LL);
    v13 = -2147024362;
    goto LABEL_48;
  }
  if ( v31 <= 0x40 )
    v31 = 64;
  v32 = HrMalloc(0x10uLL, v31, &lpMem);
  v10 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x53u, 0LL);
  }
  else
  {
    v34 = 16LL * *((unsigned int *)this + 112);
    if ( v34 <= 0xFFFFFFFF )
    {
      v35 = lpMem;
      memcpy_0(lpMem, *((const void **)this + 58), (unsigned int)v34);
      operator delete(*((void **)this + 58));
      v8 = *((_DWORD *)this + 112);
      *((_QWORD *)this + 58) = v35;
      *((_DWORD *)this + 113) = v31;
LABEL_3:
      v10 = 0;
      *(_OWORD *)(*((_QWORD *)this + 58) + 16LL * v8) = v41;
      v11 = *((_DWORD *)this + 118);
      v12 = (unsigned int)(*((_DWORD *)this + 112) + 1);
      *((_DWORD *)this + 112) = v12;
      if ( v11 <= (unsigned int)v12 )
        v11 = v12;
      *((_DWORD *)this + 118) = v11;
      goto LABEL_6;
    }
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, 0x80070216, 0x55u, 0LL);
  }
  v36 = lpMem;
  if ( lpMem )
  {
    v37 = GetProcessHeap();
    HeapFree(v37, 0, v36);
  }
LABEL_6:
  v13 = v10;
  if ( v10 >= 0 )
    goto LABEL_7;
LABEL_48:
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v10, 0x17A9u, 0LL);
  return v13;
}
