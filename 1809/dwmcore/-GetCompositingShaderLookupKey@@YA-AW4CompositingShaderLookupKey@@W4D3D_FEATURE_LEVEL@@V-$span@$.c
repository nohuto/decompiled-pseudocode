/*
 * XREFs of ?GetCompositingShaderLookupKey@@YA?AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18022B578
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801FC3FC (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x1801877D4 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 */

unsigned __int64 __fastcall GetCompositingShaderLookupKey(int a1, _QWORD *a2, char a3)
{
  __int64 v3; // rax
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r10
  unsigned __int64 v8; // r9
  __int64 v9; // r11
  int ColorChannelDepth; // eax
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx

  v3 = 0LL;
  if ( *a2 == 2LL )
    v3 = 32LL;
  v5 = v3 | a3 & 0x1F;
  v6 = 0LL;
  if ( a1 >= 37632 )
    v6 = 64LL;
  v7 = 0LL;
  v8 = v6 | v5;
  v9 = 0LL;
  while ( v7 != *a2 )
  {
    ColorChannelDepth = GetColorChannelDepth(*(_DWORD *)(v9 + a2[1]));
    v15 = 2 * ((*(_DWORD *)(v12 + v14 + 4) == 3) | (2 * ((32 * v13) | *(_DWORD *)(v12 + v14 + 8) & 0x1F)));
    v8 = v15 | (ColorChannelDepth == 8);
    if ( v12 < 0 )
    {
      gsl::details::terminate((gsl::details *)v15);
      __debugbreak();
    }
    v7 = v11 + 1;
    v9 = v12 + 12;
  }
  return v8;
}
