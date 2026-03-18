/*
 * XREFs of ?Validate@CRenderTargetBitmap@@IEBAJXZ @ 0x1800B2EEC
 * Callers:
 *     ?IsValid@CRenderTargetImageSource@@QEBA_NXZ @ 0x18000E0E0 (-IsValid@CRenderTargetImageSource@@QEBA_NXZ.c)
 *     ?GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x1800B2CA0 (-GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800B2DD0 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::Validate(CRenderTargetBitmap *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 19);
  v2 = 0;
  if ( v1 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1) )
    {
      v2 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, 0x8898008D, 0x1E2u, 0LL);
    }
  }
  else
  {
    v2 = -2003292404;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x88982F0C, 0x1DEu, 0LL);
  }
  return v2;
}
