/*
 * XREFs of ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x1800D22D4
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1800D2030 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x1801AB910 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180042214 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::CalcSectionBitmapSize(CaptureBitsResponse *this)
{
  unsigned __int8 PixelFormatSize; // al
  __int64 v2; // rcx
  _DWORD *v3; // r9
  signed int v4; // ebx
  unsigned int v5; // r8d
  unsigned __int64 v6; // rcx
  int v7; // eax

  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 25));
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
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v4, 0x11Cu, 0LL);
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
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v4, 0x11Eu, 0LL);
  }
  return (unsigned int)v4;
}
