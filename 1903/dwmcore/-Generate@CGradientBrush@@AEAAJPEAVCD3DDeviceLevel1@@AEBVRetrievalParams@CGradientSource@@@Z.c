/*
 * XREFs of ?Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180019EA8
 * Callers:
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001ABEC (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV-$TMilRect.c)
 *     ?GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x1801F51BC (-GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGr.c)
 *     ?GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGradientBrush@@@Z @ 0x1801F529C (-GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGr.c)
 * Callees:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180019FA8 (-Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GR.c)
 *     ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x18001AFA4 (-ToD2D1ExtendMode@ExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::Generate(
        CGradientBrush *this,
        struct CD3DDeviceLevel1 *a2,
        const struct CGradientSource::RetrievalParams *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  char v10; // dl
  char v11; // r8
  struct CD3DDeviceLevel1 *v12; // r11
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edi

  v4 = *((_QWORD *)this + 18);
  v5 = (*((_QWORD *)this + 19) - v4) / 20;
  if ( v5 < 0 || !v4 && v5 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v6 = *((_DWORD *)this + 28) == 4;
  v7 = v4;
  *((_BYTE *)this + 177) = 1;
  LOBYTE(v5) = 1;
  v8 = *((_QWORD *)this + 19);
  LOBYTE(a3) = v6;
  if ( v7 != v8 )
  {
    while ( *(float *)(v7 + 16) >= 1.0 )
    {
      v7 += 20LL;
      if ( v7 == v8 )
      {
        LOBYTE(v5) = 1;
        goto LABEL_8;
      }
    }
    *((_BYTE *)this + 177) = 0;
    LOBYTE(v5) = 0;
  }
LABEL_8:
  LOBYTE(v8) = *((_BYTE *)this + 104);
  v9 = ExtendMode::ToD2D1ExtendMode(v8, v5, a3);
  v13 = CGradientSource::Generate((CGradientBrush *)((char *)this + 80), v12, v11, v10, *((_BYTE *)this + 178), v9);
  v15 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x178u, 0LL);
  else
    *((_BYTE *)this + 176) = 1;
  return v15;
}
