/*
 * XREFs of ?Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180004A7C
 * Callers:
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800057D4 (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV-$TMilRect.c)
 *     ?GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x180199F6C (-GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGr.c)
 * Callees:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N3W4D2D1_EXTEND_MODE@@@Z @ 0x180004B70 (-Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GR.c)
 *     ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x180005B98 (-ToD2D1ExtendMode@ExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CGradientBrush::Generate(
        CGradientBrush *this,
        struct CD3DDeviceLevel1 *a2,
        const struct CGradientSource::RetrievalParams *a3)
{
  gsl::details *v4; // rcx
  __int64 v5; // rdx
  bool v6; // zf
  gsl::details *v7; // rax
  gsl::details *v8; // rcx
  int v9; // eax
  char v10; // dl
  char v11; // r8
  struct CD3DDeviceLevel1 *v12; // r11
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edi

  v4 = (gsl::details *)*((_QWORD *)this + 17);
  v5 = (*((_QWORD *)this + 18) - (_QWORD)v4) / 20LL;
  if ( v5 < 0 || !v4 && v5 )
  {
    gsl::details::terminate(v4);
    JUMPOUT(0x180004B68LL);
  }
  v6 = *((_DWORD *)this + 26) == 4;
  v7 = v4;
  *((_BYTE *)this + 169) = 1;
  LOBYTE(v5) = 1;
  v8 = (gsl::details *)*((_QWORD *)this + 18);
  LOBYTE(a3) = v6;
  if ( v7 != v8 )
  {
    while ( *((float *)v7 + 4) >= 1.0 )
    {
      v7 = (gsl::details *)((char *)v7 + 20);
      if ( v7 == v8 )
      {
        LOBYTE(v5) = 1;
        goto LABEL_7;
      }
    }
    *((_BYTE *)this + 169) = 0;
    LOBYTE(v5) = 0;
  }
LABEL_7:
  LOBYTE(v8) = *((_BYTE *)this + 96);
  v9 = ExtendMode::ToD2D1ExtendMode(v8, v5, a3);
  v13 = CGradientSource::Generate((CGradientBrush *)((char *)this + 72), v12, v11, v10, v9);
  v15 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x155u);
  else
    *((_BYTE *)this + 168) = 1;
  return v15;
}
