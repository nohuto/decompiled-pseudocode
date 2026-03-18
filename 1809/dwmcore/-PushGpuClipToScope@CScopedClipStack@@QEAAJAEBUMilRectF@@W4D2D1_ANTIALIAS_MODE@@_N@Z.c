/*
 * XREFs of ?PushGpuClipToScope@CScopedClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800301C8
 * Callers:
 *     ?Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z @ 0x180030128 (-Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z.c)
 * Callees:
 *     ?Push@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180014F80 (-Push@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800150C8 (-RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180016508 (-HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180032734 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CScopedClipStack::PushGpuClipToScope(
        CScopedClipStack *this,
        const struct MilRectF *a2,
        enum D2D1_ANTIALIAS_MODE a3,
        char a4)
{
  enum D2D1_ANTIALIAS_MODE v4; // r11d
  float *v5; // r10
  float v7; // xmm3_4
  int v8; // xmm2_4
  int v9; // xmm1_4
  int v10; // xmm0_4
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  float v19; // [rsp+30h] [rbp-28h] BYREF
  int v20; // [rsp+34h] [rbp-24h]
  int v21; // [rsp+38h] [rbp-20h]
  int v22; // [rsp+3Ch] [rbp-1Ch]

  v4 = a3;
  v5 = (float *)a2;
  if ( a4 || !CScopedClipStack::HasGpuClipsInScope(this) )
  {
    if ( v4 == D2D1_ANTIALIAS_MODE_ALIASED )
    {
      RoundWithHalvesDown(v5, &v19);
      v10 = v22;
      v9 = v21;
      v8 = v20;
      v7 = v19;
    }
    else
    {
      v7 = *(float *)a2;
      v8 = *((_DWORD *)a2 + 1);
      v9 = *((_DWORD *)a2 + 2);
      v10 = *((_DWORD *)a2 + 3);
    }
    v19 = v7;
    v20 = v8;
    v21 = v9;
    v22 = v10;
    v11 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
            (char *)this + 2224,
            &v19);
    v13 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x116u);
      return v13;
    }
  }
  else
  {
    v17 = CD2DClipStack::Push((CD2DClipStack *)(v16 + 2224), a2, v4);
    v13 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x11Au);
      return v13;
    }
  }
  v14 = 10LL * (unsigned int)(*((_DWORD *)this + 6) - 1);
  ++*(_DWORD *)(*(_QWORD *)this + 8 * v14);
  return v13;
}
