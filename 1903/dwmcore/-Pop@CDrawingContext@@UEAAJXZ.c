/*
 * XREFs of ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800C6BB0
 * Callers:
 *     ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x1801713E8 (-RestoreStateToLastMark@CDrawingContext@@QEAAXXZ.c)
 * Callees:
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x180012424 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003BB3C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18003BB8C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C24A4 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Top@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800C6C38 (-Top@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18016FFA8 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x18016FFD8 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180170084 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1801700C0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x18017A19C (-Pop@CLightStack@@QEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::Pop(CDrawingContext *this)
{
  int *v1; // rsi
  signed int v3; // eax
  __int64 v4; // rcx
  signed int v5; // edi
  signed int v7; // eax
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v1 = (int *)((char *)this + 448);
  v3 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Top(
         (char *)this + 448,
         &v11);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x184Eu, 0LL);
  if ( (int)v11 > 6 )
  {
    switch ( (_DWORD)v11 )
    {
      case 7:
        CDrawingContext::PopAlpha(this, 1);
        break;
      case 8:
        CDrawingContext::PopRenderOptionsInternal(this, 1);
        break;
      case 9:
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v1, &v11);
        v9 = CLightStack::Pop((CDrawingContext *)((char *)this + 672));
        v5 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x23B8u, 0LL);
        if ( v5 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v5, 0x1872u, 0LL);
        break;
      case 0xA:
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v1, &v11);
        --*((_DWORD *)this + 234);
        break;
    }
  }
  else if ( (int)v11 >= 5 )
  {
    v7 = CDrawingContext::PopLayer(this);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1862u, 0LL);
  }
  else
  {
    switch ( (_DWORD)v11 )
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
  return (unsigned int)v5;
}
