/*
 * XREFs of ?CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z @ 0x18003E16C
 * Callers:
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18003DE18 (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180039BF8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CreateFormatConverterToPBGRA(struct IWICBitmapSource *a1, struct IWICBitmap **a2)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 39);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v14);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 80LL))(v4, &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    v10 = (unsigned int)v5;
    v11 = 17LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)v10,
      v12);
    goto LABEL_6;
  }
  v12 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, GUID *, _QWORD))(*(_QWORD *)v14 + 64LL))(
         v14,
         a1,
         &GUID_WICPixelFormat32bppPBGRA,
         0LL);
  v6 = v7;
  if ( v7 < 0 )
  {
    v10 = (unsigned int)v7;
    v11 = 26LL;
    goto LABEL_11;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                    + 39)
                                                                                 + 144LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 39),
         v14,
         2LL,
         a2);
  v6 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 28LL;
    goto LABEL_11;
  }
  if ( !*a2 )
  {
    v6 = -2147024882;
    v11 = 29LL;
    v10 = 2147942414LL;
    goto LABEL_11;
  }
  v6 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v14);
  return v6;
}
