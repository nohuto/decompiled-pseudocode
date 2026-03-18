/*
 * XREFs of ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x180014FE4
 * Callers:
 *     ?Push@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180014F80 (-Push@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18003745C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180032734 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180069E68 (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CBaseClipStack::Push(CBaseClipStack *this, const struct MilRectF *a2)
{
  float *v2; // r10
  __int64 v3; // r11
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm4_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  float v16; // [rsp+30h] [rbp-20h] BYREF
  float v17; // [rsp+34h] [rbp-1Ch]
  float v18; // [rsp+38h] [rbp-18h]
  float v19; // [rsp+3Ch] [rbp-14h]

  CBaseClipStack::Top(this, &v16);
  v4 = *v2;
  v5 = v16;
  v6 = v2[1];
  v7 = v2[2];
  v8 = v2[3];
  if ( *v2 > v16 )
  {
    v16 = *v2;
    v5 = v4;
  }
  v9 = v17;
  if ( v6 > v17 )
  {
    v17 = v6;
    v9 = v6;
  }
  v10 = v18;
  if ( v18 > v7 )
  {
    v18 = v7;
    v10 = v7;
  }
  v11 = v19;
  if ( v19 > v8 )
  {
    v19 = v8;
    v11 = v8;
  }
  if ( v10 <= v5 || v11 <= v9 )
  {
    v19 = 0.0;
    v18 = 0.0;
    v17 = 0.0;
    v16 = 0.0;
  }
  v12 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(v3, &v16);
  v14 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x31u);
  return v14;
}
