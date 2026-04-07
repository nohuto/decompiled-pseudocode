/*
 * XREFs of ?Initialize@CBitmapSource@@AEAAJXZ @ 0x18000FE2C
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x18000CCD0 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x18000FC68 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x18004654C (-Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z.c)
 * Callees:
 *     ??$CreateProxy@VCBitmapSourceProxy@@@CCompositor@@IEAAJPEAPEAVCBitmapSourceProxy@@@Z @ 0x180037DF4 (--$CreateProxy@VCBitmapSourceProxy@@@CCompositor@@IEAAJPEAPEAVCBitmapSourceProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBitmapSource::Initialize(CBitmapSource *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  void *v4; // [rsp+28h] [rbp-10h]

  v1 = CCompositor::CreateProxy<CBitmapSourceProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         (char *)this + 16);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x125u, v4);
  else
    return 0;
  return v2;
}
