/*
 * XREFs of ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006E288
 * Callers:
 *     ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x1800165C0 (-Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180057308 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x180188BD0 (-PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18007F954 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
        unsigned int *a1,
        _OWORD *a2)
{
  unsigned int v2; // eax
  void *v3; // rbx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // esi
  unsigned __int64 v10; // rbp
  int v11; // eax
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax
  void *v14; // rbx
  HANDLE ProcessHeap; // rax
  void *v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  v16 = 0LL;
  if ( v2 != a1[1] )
    goto LABEL_2;
  v10 = 2LL * a1[1];
  if ( v10 > 0xFFFFFFFF )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    return v8;
  }
  if ( (unsigned int)v10 <= 8 )
    LODWORD(v10) = 8;
  v11 = HrMalloc(0x10uLL, (unsigned int)v10, &v16);
  v8 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x53u, 0LL);
  }
  else
  {
    v13 = 16LL * *a1;
    if ( v13 <= 0xFFFFFFFF )
    {
      v14 = v16;
      memcpy_0(v16, *((const void **)a1 + 2), (unsigned int)v13);
      operator delete(*((void **)a1 + 2));
      v2 = *a1;
      *((_QWORD *)a1 + 2) = v14;
      v3 = 0LL;
      a1[1] = v10;
LABEL_2:
      *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * v2) = *a2;
      v6 = a1[6];
      v7 = *a1 + 1;
      *a1 = v7;
      if ( v6 <= v7 )
        v6 = v7;
      v8 = 0;
      a1[6] = v6;
      goto LABEL_5;
    }
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024362, 0x55u, 0LL);
  }
  v3 = v16;
LABEL_5:
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
  }
  return v8;
}
