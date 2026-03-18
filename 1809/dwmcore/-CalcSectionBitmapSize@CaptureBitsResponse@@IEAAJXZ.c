/*
 * XREFs of ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x1800746A8
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1800743F0 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x180161400 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::CalcSectionBitmapSize(enum DXGI_FORMAT *this)
{
  unsigned __int8 PixelFormatSize; // al
  unsigned int v2; // ecx
  _DWORD *v3; // r9
  int v4; // ebx
  unsigned int v5; // r8d
  unsigned __int64 v6; // rcx
  int v7; // eax

  PixelFormatSize = GetPixelFormatSize(this[25]);
  if ( PixelFormatSize && v3[22] <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v4 = 0;
    v5 = (((v3[22] * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  }
  else
  {
    v4 = -2147024362;
    v5 = 0;
  }
  v3[33] = v5;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v4, 0x11Eu);
  }
  else
  {
    v6 = v5 * (unsigned __int64)(unsigned int)v3[23];
    v7 = -1;
    if ( v6 <= 0xFFFFFFFF )
      v7 = v5 * v3[23];
    v3[32] = v7;
    v4 = v6 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v6 > 0xFFFFFFFF )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v4, 0x120u);
  }
  return (unsigned int)v4;
}
