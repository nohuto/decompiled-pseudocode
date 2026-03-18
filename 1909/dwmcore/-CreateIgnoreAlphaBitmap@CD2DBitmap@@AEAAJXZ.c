/*
 * XREFs of ?CreateIgnoreAlphaBitmap@CD2DBitmap@@AEAAJXZ @ 0x1801691AC
 * Callers:
 *     ?GetBitmap@CD2DBitmap@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180169460 (-GetBitmap@CD2DBitmap@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateSharedAtlasBitmap@CD2DContext@@QEAAJPEAUID2D1Bitmap1@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAU2@@Z @ 0x18015ED8C (-CreateSharedAtlasBitmap@CD2DContext@@QEAAJPEAUID2D1Bitmap1@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEA.c)
 */

__int64 __fastcall CD2DBitmap::CreateIgnoreAlphaBitmap(CD2DBitmap *this)
{
  struct ID2D1Bitmap1 *v1; // rdx
  unsigned int v2; // ebx
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  struct ID2D1Bitmap1 **v5; // r9
  CD2DContext *v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx
  struct D2D1_BITMAP_PROPERTIES1 v10; // [rsp+30h] [rbp-28h] BYREF

  v1 = (struct ID2D1Bitmap1 *)*((_QWORD *)this + 19);
  if ( v1 )
  {
    v3 = *(_OWORD *)((char *)this + 216);
    v4 = *(_OWORD *)((char *)this + 232);
    v5 = (struct ID2D1Bitmap1 **)((char *)this + 160);
    v6 = *(CD2DContext **)(*((_QWORD *)this + 3) + 24LL);
    *(_OWORD *)&v10.pixelFormat.format = v3;
    v10.pixelFormat.alphaMode = D2D1_ALPHA_MODE_IGNORE;
    *(_OWORD *)&v10.bitmapOptions = v4;
    v7 = CD2DContext::CreateSharedAtlasBitmap(v6, v1, &v10, v5);
    v2 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x237u, 0LL);
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x88982F04, 0x22Cu, 0LL);
  }
  return v2;
}
