/*
 * XREFs of ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x180002D28
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180003AD8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     ??4?$ComPtr@VCCachedWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCachedWindowBackgroundTreatment@@@Z @ 0x180002E50 (--4-$ComPtr@VCCachedWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCachedWindowBack.c)
 *     ??0CCachedWindowBackgroundTreatment@@AEAA@PEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180002EA0 (--0CCachedWindowBackgroundTreatment@@AEAA@PEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBV.c)
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800044B8 (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@.c)
 *     ??$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@?$vector@PEAUObserver@CProcessAttributionManager@@V?$allocator@PEAUObserver@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUObserver@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x18001B510 (--$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@-$vector@PEAUObserver@CProce.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCachedWindowBackgroundTreatment::Create(
        __int64 a1,
        __int64 a2,
        int a3,
        float *a4,
        __int64 a5,
        _QWORD *a6)
{
  unsigned int v6; // edi
  int v9; // ebp
  float v11; // xmm0_4
  unsigned int v12; // ecx
  unsigned int v13; // eax
  LPVOID v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  _QWORD *v17; // rdx
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-28h]
  __int64 v21; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v21 = 0LL;
  v9 = a2;
  if ( a2 )
  {
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
      v19 = -2147024809;
      v20 = 492;
LABEL_20:
      v6 = v19;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v19, v20);
      return v6;
    }
  }
  v14 = HeapAlloc(WPF::g_processHeap, 0, 0x90uLL);
  if ( v14 )
    v15 = CCachedWindowBackgroundTreatment::CCachedWindowBackgroundTreatment((_DWORD)v14, a1, v9, a3, (__int64)a4, a5);
  else
    v15 = 0LL;
  Microsoft::WRL::ComPtr<CCachedWindowBackgroundTreatment>::operator=(&v21, v15);
  v16 = v21;
  if ( !v21 )
  {
    v19 = -2147024882;
    v20 = 496;
    goto LABEL_20;
  }
  if ( a1 )
  {
    v17 = *(_QWORD **)(a1 + 392);
    if ( *(_QWORD **)(a1 + 400) == v17 )
    {
      std::vector<CProcessAttributionManager::Observer *>::_Emplace_reallocate<CProcessAttributionManager::Observer * const &>(
        a1 + 384,
        v17,
        &v21);
    }
    else
    {
      *v17 = v21;
      *(_QWORD *)(a1 + 392) += 8LL;
    }
  }
  *a6 = v16;
  return v6;
}
