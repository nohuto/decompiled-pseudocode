/*
 * XREFs of ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x1800049F8
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800057C4 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     ??4?$ComPtr@VCCachedWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCachedWindowBackgroundTreatment@@@Z @ 0x180004B0C (--4-$ComPtr@VCCachedWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCachedWindowBack.c)
 *     ??0CCachedWindowBackgroundTreatment@@AEAA@PEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180004B5C (--0CCachedWindowBackgroundTreatment@@AEAA@PEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBV.c)
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800062C8 (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@.c)
 *     ??$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@?$vector@PEAUObserver@CProcessAttributionManager@@V?$allocator@PEAUObserver@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUObserver@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x18001DEA8 (--$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@-$vector@PEAUObserver@CProce.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCachedWindowBackgroundTreatment::Create(
        __int64 a1,
        __int64 a2,
        int a3,
        float *a4,
        void *a5,
        _QWORD *a6)
{
  unsigned int v6; // edi
  int v9; // ebp
  float v11; // xmm0_4
  unsigned int v12; // ecx
  unsigned int v13; // eax
  void *v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rbx
  _QWORD *v17; // rdx
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v19 = 0LL;
  v9 = a2;
  if ( !a2 )
    goto LABEL_8;
  v11 = a4[5];
  v12 = (v11 <= a4[4]) + 1;
  if ( a4[2] > *a4 )
    v12 = v11 <= a4[4];
  v13 = v12 + 1;
  if ( a4[3] > a4[1] )
    v13 = v12;
  if ( v13 > 1
    || (unsigned __int8)TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a4) )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024809, 0x1ECu, 0LL);
  }
  else
  {
LABEL_8:
    v14 = DefaultHeap::Alloc(0x90uLL);
    if ( v14 )
      v14 = (void *)CCachedWindowBackgroundTreatment::CCachedWindowBackgroundTreatment(
                      (_DWORD)v14,
                      a1,
                      v9,
                      a3,
                      (__int64)a4,
                      (__int64)a5);
    Microsoft::WRL::ComPtr<CCachedWindowBackgroundTreatment>::operator=(&v19, v14);
    v16 = v19;
    if ( v19 )
    {
      if ( a1 )
      {
        v17 = *(_QWORD **)(a1 + 392);
        if ( *(_QWORD **)(a1 + 400) == v17 )
        {
          std::vector<CProcessAttributionManager::Observer *>::_Emplace_reallocate<CProcessAttributionManager::Observer * const &>(
            a1 + 384,
            v17,
            &v19);
        }
        else
        {
          *v17 = v19;
          *(_QWORD *)(a1 + 392) += 8LL;
        }
      }
      *a6 = v16;
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x1F0u, 0LL);
    }
  }
  return v6;
}
