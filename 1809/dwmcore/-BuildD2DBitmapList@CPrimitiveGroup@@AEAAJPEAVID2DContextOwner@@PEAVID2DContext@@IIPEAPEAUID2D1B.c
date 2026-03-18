/*
 * XREFs of ?BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1Bitmap@@@Z @ 0x1801AB2DC
 * Callers:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x1801AB660 (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180192178 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PE.c)
 */

__int64 __fastcall CPrimitiveGroup::BuildD2DBitmapList(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        int a4,
        unsigned int a5,
        struct ID2D1Bitmap **a6)
{
  unsigned int v6; // ebx
  unsigned int v7; // edi
  struct ID2D1Bitmap **i; // rsi
  int D2DBitmapRealizationForContextOwner; // eax
  __int64 v13; // rcx
  struct ID2D1Bitmap1 *v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v6 = 0;
  v7 = 0;
  if ( a5 )
  {
    for ( i = a6; ; ++i )
    {
      D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                              *(CCompositionSurfaceBitmap **)(*((_QWORD *)this + 21) + 8LL * (v7 + a4)),
                                              a2,
                                              &v15);
      v6 = D2DBitmapRealizationForContextOwner;
      if ( D2DBitmapRealizationForContextOwner < 0 )
        break;
      ++v7;
      *i = v15;
      if ( v7 >= a5 )
        return v6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, D2DBitmapRealizationForContextOwner, 0x416u);
  }
  return v6;
}
