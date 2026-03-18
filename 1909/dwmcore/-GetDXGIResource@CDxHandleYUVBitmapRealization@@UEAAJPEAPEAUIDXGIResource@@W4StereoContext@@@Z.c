/*
 * XREFs of ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180262790
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z @ 0x18001F774 (-GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180262484 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetDXGIResource(CD3DTexture **a1, struct IDXGIResource **a2)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  signed int DXGIResource; // eax
  __int64 v8; // rcx
  int v9; // ebx
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture((CDxHandleYUVBitmapRealization *)a1);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x189u, 0LL);
  }
  else
  {
    DXGIResource = CD3DTexture::GetDXGIResource(a1[53], a2);
    v11 = DXGIResource;
    v9 = DXGIResource;
    if ( DXGIResource < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, DXGIResource, 0x18Bu, 0LL);
    TranslateDXGIorD3DErrorInContext(v9, 14, &v11);
    return v11;
  }
  return v6;
}
