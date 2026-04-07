/*
 * XREFs of ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18003DE18
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x18003DD4C (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x18003E040 (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z @ 0x18003E16C (-CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18004F8A4 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Update(CBitmapSource *this, HICON a2)
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  void *v8; // [rsp+28h] [rbp-10h]
  struct IWICBitmap *v9; // [rsp+50h] [rbp+18h] BYREF
  struct IWICBitmapSource *v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, HICON, struct IWICBitmapSource **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                               + 39)
                                                                            + 176LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 39),
         a2,
         &v10);
  if ( v3 < 0 )
  {
    DoStackCaptureDirect(v3, 0x187u);
    v5 = 0;
  }
  else
  {
    v4 = CreateFormatConverterToPBGRA(v10, &v9);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x193u, v8);
    }
    else
    {
      v6 = CBitmapSource::Update(this, v9);
      v5 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x195u, v8);
    }
  }
  if ( v9 )
    ((void (__fastcall *)(struct IWICBitmap *))v9->lpVtbl->Release)(v9);
  if ( v10 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v10->lpVtbl->Release)(v10);
  return v5;
}
