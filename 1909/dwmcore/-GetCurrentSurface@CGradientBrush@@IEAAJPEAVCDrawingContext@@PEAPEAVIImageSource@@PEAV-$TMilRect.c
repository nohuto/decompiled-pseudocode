/*
 * XREFs of ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800194BC
 * Callers:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180018DD0 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801F40B0 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180018778 (-Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z @ 0x1800195A8 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::GetCurrentSurface(CGradientBrush *this, __int64 a2, __int64 *a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v9; // rcx
  struct CD3DDeviceLevel1 *v10; // rbx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v18[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = 0;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v17);
  v9 = *(_QWORD *)(a2 + 384);
  v18[1] = 0LL;
  v18[0] = &v17;
  v10 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 160LL))(v9);
  if ( CGradientSource::FindExistingGradient(
         (CGradientBrush *)((char *)this + 80),
         v10,
         *((_BYTE *)this + 176) == 0,
         (const struct CGradientSource::RetrievalParams *)v18)
    || (v11 = CGradientBrush::Generate(this, v10, (const struct CGradientSource::RetrievalParams *)v18),
        v5 = v11,
        v11 >= 0) )
  {
    v13 = v17;
    v14 = *(_DWORD *)(v17 + 48);
    v15 = v17 + 16;
    *(_DWORD *)a4 = 0;
    v17 = 0LL;
    *(_DWORD *)(a4 + 8) = 1157627904;
    *(float *)(a4 + 4) = (float)v14;
    *a3 = v15 & -(__int64)(v13 != 0);
    *(float *)(a4 + 12) = (float)(v14 + 1);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1BEu, 0LL);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v17);
  return v5;
}
