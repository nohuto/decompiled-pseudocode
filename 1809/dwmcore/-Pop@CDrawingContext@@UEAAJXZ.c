/*
 * XREFs of ?Pop@CDrawingContext@@UEAAJXZ @ 0x18006A6A0
 * Callers:
 *     ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x180166F9C (-RestoreStateToLastMark@CDrawingContext@@QEAAXXZ.c)
 * Callees:
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x18000F480 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x180013C58 (-Pop@CLightStack@@QEAAJXZ.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180018ADC (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Top@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180069EA4 (-Top@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006A728 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x180165AC4 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x180165AF4 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180165BA0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

__int64 __fastcall CDrawingContext::Pop(CDrawingContext *this)
{
  char *v1; // rsi
  int v3; // eax
  unsigned int v4; // ecx
  __int64 v5; // r8
  int v6; // edi
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v1 = (char *)this + 448;
  v3 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Top(
         (int *)this + 112,
         &v12);
  v6 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x18FAu);
  if ( (int)v12 > 6 )
  {
    switch ( (_DWORD)v12 )
    {
      case 7:
        CDrawingContext::PopAlpha(this, 1);
        break;
      case 8:
        CDrawingContext::PopRenderOptionsInternal(this, 1);
        break;
      case 9:
        CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(v1, &v12, v5);
        v10 = CLightStack::Pop((CDrawingContext *)((char *)this + 672));
        v6 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x25A2u);
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v6, 0x191Eu);
        break;
      case 0xA:
        CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(v1, &v12, v5);
        --*((_DWORD *)this + 234);
        break;
    }
  }
  else if ( (int)v12 >= 5 )
  {
    v8 = CDrawingContext::PopLayer(this);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x190Eu);
  }
  else
  {
    switch ( (_DWORD)v12 )
    {
      case 1:
        CDrawingContext::PopGpuClipRectInternal(this, 1);
        break;
      case 2:
        CDrawingContext::PopCpuClip(this);
        break;
      case 3:
        CDrawingContext::PopClippingScope(this, 1);
        break;
      case 4:
        CDrawingContext::PopTransformInternal(this, 1);
        break;
    }
  }
  return (unsigned int)v6;
}
