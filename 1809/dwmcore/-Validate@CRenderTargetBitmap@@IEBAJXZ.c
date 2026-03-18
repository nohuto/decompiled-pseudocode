/*
 * XREFs of ?Validate@CRenderTargetBitmap@@IEBAJXZ @ 0x180094F30
 * Callers:
 *     ?IsValid@CRenderTargetImageSource@@QEBA_NXZ @ 0x18000E72C (-IsValid@CRenderTargetImageSource@@QEBA_NXZ.c)
 *     ?GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x180094CF0 (-GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180094E20 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::Validate(CRenderTargetBitmap *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  int v4; // r9d
  unsigned int v5; // [rsp+20h] [rbp-18h]

  v1 = *((_QWORD *)this + 19);
  v2 = 0;
  if ( !v1 )
  {
    v4 = -2003292404;
    v5 = 481;
LABEL_6:
    v2 = v4;
    MilInstrumentationCheckHR_MaybeFailFast(v1, 0LL, 0, v4, v5);
    return v2;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1) )
  {
    v4 = -2003304307;
    v5 = 485;
    goto LABEL_6;
  }
  return v2;
}
