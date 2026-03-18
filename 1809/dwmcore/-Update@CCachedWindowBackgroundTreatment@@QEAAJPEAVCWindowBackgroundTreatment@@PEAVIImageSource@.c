/*
 * XREFs of ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800043B4
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180003AD8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800044B8 (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@.c)
 *     ?RemoveDependentCachedTreatment@CWindowBackgroundTreatment@@QEAAXPEBVCCachedWindowBackgroundTreatment@@@Z @ 0x18000470C (-RemoveDependentCachedTreatment@CWindowBackgroundTreatment@@QEAAXPEBVCCachedWindowBackgroundTrea.c)
 *     ??$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@?$vector@PEAUObserver@CProcessAttributionManager@@V?$allocator@PEAUObserver@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUObserver@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x18001B510 (--$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@-$vector@PEAUObserver@CProce.c)
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x18006C0D8 (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@VCWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatment@@@Z @ 0x1800E4C54 (--4-$ComPtr@VCWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatm.c)
 */

__int64 __fastcall CCachedWindowBackgroundTreatment::Update(
        struct CCachedWindowBackgroundTreatment *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        float *a5,
        _OWORD *a6)
{
  float *v6; // rbp
  unsigned int v7; // ebx
  float v12; // xmm0_4
  unsigned int v13; // ecx
  unsigned int v14; // eax
  CWindowBackgroundTreatment **v15; // r14
  __int128 v16; // xmm0
  int v17; // ecx
  __int64 v18; // xmm1_8
  _OWORD *v19; // rcx
  _QWORD *v21; // rdx
  struct CCachedWindowBackgroundTreatment *v22; // [rsp+70h] [rbp+18h] BYREF

  v6 = a5;
  v7 = 0;
  if ( !a3 )
    goto LABEL_8;
  v12 = a5[5];
  v13 = (v12 <= a5[4]) + 1;
  if ( a5[2] > *a5 )
    v13 = v12 <= a5[4];
  v14 = v13 + 1;
  if ( a5[3] > a5[1] )
    v14 = v13;
  if ( v14 > 1
    || (unsigned __int8)TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a5) )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024809, 0x209u);
  }
  else
  {
LABEL_8:
    v15 = (CWindowBackgroundTreatment **)((char *)a1 + 16);
    if ( a2 != *((_QWORD *)a1 + 2) )
    {
      if ( *v15 )
        CWindowBackgroundTreatment::RemoveDependentCachedTreatment(*v15, a1);
      if ( a2 )
      {
        v22 = a1;
        v21 = *(_QWORD **)(a2 + 392);
        if ( *(_QWORD **)(a2 + 400) == v21 )
        {
          std::vector<CProcessAttributionManager::Observer *>::_Emplace_reallocate<CProcessAttributionManager::Observer * const &>(
            a2 + 384,
            v21,
            &v22);
        }
        else
        {
          *v21 = a1;
          *(_QWORD *)(a2 + 392) += 8LL;
        }
      }
      Microsoft::WRL::ComPtr<CWindowBackgroundTreatment>::operator=((char *)a1 + 16, a2);
    }
    Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=((char *)a1 + 24, a3);
    *((_OWORD *)a1 + 2) = *(_OWORD *)a4;
    *((_OWORD *)a1 + 3) = *(_OWORD *)(a4 + 16);
    *((_OWORD *)a1 + 4) = *(_OWORD *)(a4 + 32);
    v16 = *(_OWORD *)v6;
    *((_OWORD *)a1 + 5) = *(_OWORD *)(a4 + 48);
    v17 = *(_DWORD *)(a4 + 64);
    v18 = *((_QWORD *)v6 + 2);
    *(_OWORD *)((char *)a1 + 100) = v16;
    *((_DWORD *)a1 + 24) = v17;
    v19 = a6;
    *(_QWORD *)((char *)a1 + 116) = v18;
    *((_BYTE *)a1 + 140) = 0;
    *(_OWORD *)((char *)a1 + 124) = *v19;
  }
  return v7;
}
