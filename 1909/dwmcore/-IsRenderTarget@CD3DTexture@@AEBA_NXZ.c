/*
 * XREFs of ?IsRenderTarget@CD3DTexture@@AEBA_NXZ @ 0x18001F6F8
 * Callers:
 *     ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18001F628 (-CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z @ 0x18001F774 (-GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CD3DTexture::IsRenderTarget(CD3DTexture *this)
{
  bool v1; // bl
  int DXGIResource; // eax
  unsigned int v3; // ecx
  int v4; // eax
  unsigned int v5; // ecx
  int v7; // [rsp+40h] [rbp+8h] BYREF
  struct IDXGIResource *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  v1 = 0;
  if ( (*((_BYTE *)this + 160) & 0x20) != 0 )
  {
    DXGIResource = CD3DTexture::GetDXGIResource(this, &v8);
    if ( DXGIResource < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, DXGIResource, 0x25Bu, 0LL);
    }
    else
    {
      v4 = ((__int64 (__fastcall *)(struct IDXGIResource *, int *))v8->lpVtbl->GetUsage)(v8, &v7);
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x25Du, 0LL);
      else
        v1 = (v7 & 0x100) == 0;
    }
    if ( v8 )
      ((void (__fastcall *)(struct IDXGIResource *))v8->lpVtbl->Release)(v8);
  }
  return v1;
}
