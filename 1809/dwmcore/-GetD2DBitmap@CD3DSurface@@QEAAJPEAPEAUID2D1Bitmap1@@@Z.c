/*
 * XREFs of ?GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800988F4
 * Callers:
 *     ?GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800988B0 (-GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180098A00 (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     ?EnsureDXGISurface@CD3DSurface@@AEAAJXZ @ 0x180098A5C (-EnsureDXGISurface@CD3DSurface@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DSurface::GetD2DBitmap(CD3DSurface *this, struct ID2D1Bitmap1 **a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // ecx
  _QWORD *v6; // rsi
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // ecx
  __int64 v11; // rax
  unsigned int v12; // [rsp+20h] [rbp-38h]
  struct D2D1_BITMAP_PROPERTIES1 v13; // [rsp+30h] [rbp-28h] BYREF
  D2D1_PIXEL_FORMAT v14; // [rsp+60h] [rbp+8h]

  v2 = 0;
  *a2 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(CD3DSurface *))(*(_QWORD *)this + 32LL))(this) )
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003292412, 0x187u);
    return v2;
  }
  v6 = (_QWORD *)((char *)this + 216);
  if ( !*((_QWORD *)this + 27) )
  {
    v8 = CD3DSurface::EnsureDXGISurface(this);
    v2 = v8;
    if ( v8 < 0 )
    {
      v12 = 398;
    }
    else
    {
      v10 = *((_DWORD *)this + 43);
      v14.format = *((_DWORD *)this + 39);
      v14.alphaMode = *((_DWORD *)this + 46);
      v13.pixelFormat = v14;
      v13.dpiX = 96.0;
      v13.dpiY = 96.0;
      v13.bitmapOptions = ((unsigned __int8)~(_BYTE)v10 >> 2) & 2;
      if ( (v10 & 0x20) != 0 )
        v13.bitmapOptions = ((unsigned __int8)~(_BYTE)v10 >> 2) & 2 | 1;
      v11 = *((_QWORD *)this + 2);
      v13.colorContext = 0LL;
      v8 = CD2DContext::CreateD2DBitmapFromDxgiSurface(
             *(CD2DContext **)(v11 + 80),
             *((struct IDXGISurface **)this + 26),
             &v13,
             (struct ID2D1Bitmap1 **)this + 27);
      v2 = v8;
      if ( v8 >= 0 )
        goto LABEL_3;
      v12 = 428;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v12);
    return v2;
  }
LABEL_3:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 8LL))(*v6);
  *a2 = (struct ID2D1Bitmap1 *)*v6;
  return v2;
}
