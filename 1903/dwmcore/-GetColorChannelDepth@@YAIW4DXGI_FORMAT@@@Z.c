/*
 * XREFs of ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x1800371AC
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180035C10 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1801AE1D0 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 *     ?GetCompositingShaderLookupKey@@YA?AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801AE77C (-GetCompositingShaderLookupKey@@YA-AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V-$span@$.c)
 *     ?GetColorChannelDepth@CCompositionSurfaceInfo@@QEBAIXZ @ 0x1801CD7CC (-GetColorChannelDepth@CCompositionSurfaceInfo@@QEBAIXZ.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180258860 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetColorChannelDepth(int a1)
{
  if ( a1 > 61 )
  {
    if ( a1 != 65 && (a1 <= 86 || a1 > 88 && a1 != 91 && a1 != 103 && (unsigned int)(a1 - 106) > 1) )
      return 0LL;
    return 8LL;
  }
  if ( a1 == 61 )
    return 8LL;
  if ( a1 == 2 )
    return 32LL;
  if ( a1 <= 9 )
    return 0LL;
  if ( a1 <= 11 )
    return 16LL;
  if ( a1 != 24 )
  {
    if ( a1 != 28 && a1 != 49 )
      return 0LL;
    return 8LL;
  }
  return 10LL;
}
