/*
 * XREFs of GetExpectedVertexShaderDesc @ 0x1800E4164
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800E23B0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ??E?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ @ 0x180005ED4 (--E-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ.c)
 *     ??D?$span_iterator@V?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@$0A@@details@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@XZ @ 0x180005F08 (--D-$span_iterator@V-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@$0A@@details@gsl@@QEB.c)
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@$0A@@01@0@Z @ 0x1800713A0 (--9details@gsl@@YA_NV-$span_iterator@V-$span@PEBUShaderLinkingBody@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     HasLighting @ 0x1800E4224 (HasLighting.c)
 */

__int64 __fastcall GetExpectedVertexShaderDesc(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4, char a5)
{
  _QWORD *v8; // rax
  __int128 i; // [rsp+20h] [rbp-30h] BYREF
  __int128 v10; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+20h]

  BYTE3(v12) = 0;
  if ( a5 || (HIDWORD(v12) = 2, a4 > 2) )
    HIDWORD(v12) = 4;
  if ( *(_DWORD *)(a3 + 128) != -1 || (unsigned __int8)((__int64 (*)(void))HasLighting)() )
    goto LABEL_9;
  *((_QWORD *)&v10 + 1) = *a2;
  *(_QWORD *)&v10 = a2;
  for ( i = (unsigned __int64)a2;
        ;
        gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&i) )
  {
    v11 = i;
    if ( !gsl::details::operator!=(&v11, &v10) )
      break;
    v8 = (_QWORD *)gsl::details::span_iterator<gsl::span<COverlayContext::OverlayPlaneInfo *,-1>,0>::operator*((gsl::details *)&i);
    if ( (unsigned __int8)HasLighting(*v8) )
      goto LABEL_9;
  }
  LOBYTE(v12) = 0;
  if ( a5 )
LABEL_9:
    LOBYTE(v12) = 1;
  BYTE2(v12) = *(_BYTE *)(a3 + 156);
  BYTE1(v12) = *(_BYTE *)(a3 + 154);
  return v12;
}
