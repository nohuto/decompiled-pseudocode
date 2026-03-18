/*
 * XREFs of ?GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18001DE00
 * Callers:
 *     ?GetBitmap@CHwTextureRenderTarget@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18001DDF0 (-GetBitmap@CHwTextureRenderTarget@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18001DE98 (-CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::GetD2DBitmap(CD3DTexture *this, char a2, struct ID2D1Bitmap1 **a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // ecx
  char *v8; // rsi
  int D2DBitmap; // eax
  unsigned int v10; // ecx
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v3 = 0;
  *a3 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(CD3DTexture *))(*(_QWORD *)this + 32LL))(this) )
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003292412, 0x1FBu);
    return v3;
  }
  if ( a2 )
  {
    v8 = (char *)this + 232;
    if ( *((_QWORD *)this + 29) )
      goto LABEL_5;
    D2DBitmap = CD3DTexture::CreateD2DBitmap(this, 1, (struct ID2D1Bitmap1 **)this + 29);
    v3 = D2DBitmap;
    if ( D2DBitmap >= 0 )
      goto LABEL_5;
    v12 = 514;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, D2DBitmap, v12);
    return v3;
  }
  v8 = (char *)this + 224;
  if ( !*((_QWORD *)this + 28) )
  {
    D2DBitmap = CD3DTexture::CreateD2DBitmap(this, 0, (struct ID2D1Bitmap1 **)this + 28);
    v3 = D2DBitmap;
    if ( D2DBitmap < 0 )
    {
      v12 = 524;
      goto LABEL_9;
    }
  }
LABEL_5:
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8);
  *a3 = *(struct ID2D1Bitmap1 **)v8;
  return v3;
}
