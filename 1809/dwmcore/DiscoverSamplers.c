/*
 * XREFs of DiscoverSamplers @ 0x1800E29E8
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800E23B0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@01@0@Z @ 0x180005E94 (--9details@gsl@@YA_NV-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ??E?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ @ 0x180005ED4 (--E-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x180026618 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ??D?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@QEBAAEBW4ShaderLinkingArgument@@XZ @ 0x1800E2AE0 (--D-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@details@gsl@@QEBAAEBW4Sha.c)
 */

__int64 __fastcall DiscoverSamplers(_QWORD *a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // edi
  __int16 v6; // cx
  __int64 v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rax
  bool v10; // bl
  __int128 i; // [rsp+20h] [rbp-30h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF
  __int128 v14; // [rsp+40h] [rbp-10h] BYREF

  v3 = 0;
  *((_QWORD *)&v13 + 1) = *a1;
  *(_QWORD *)&v13 = a1;
  for ( i = (unsigned __int64)a1;
        ;
        gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&i) )
  {
    v14 = i;
    if ( !gsl::details::operator!=(&v14, &v13) )
      break;
    v6 = *(_WORD *)gsl::details::span_iterator<gsl::span<enum ShaderLinkingArgument const,-1>,0>::operator*(&i);
    if ( (v6 & 0xFF00) == 0x200 )
    {
      v7 = (unsigned __int8)v6;
      v8 = (unsigned __int8)v6 + 1;
      if ( v3 > v8 )
        v8 = v3;
      v3 = v8;
      *(_BYTE *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a3, (unsigned __int8)v6) = 1;
      v9 = 32LL * (unsigned int)v7;
      v10 = *(_BYTE *)(v9 + a2 + 27) || *(_BYTE *)(v9 + a2 + 24);
      *(_BYTE *)(gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a3, v7) + 1) = v10;
    }
  }
  return v3;
}
