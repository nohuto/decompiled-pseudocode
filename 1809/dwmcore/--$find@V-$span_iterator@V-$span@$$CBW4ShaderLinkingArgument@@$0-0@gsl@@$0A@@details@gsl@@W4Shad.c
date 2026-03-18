/*
 * XREFs of ??$find@V?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@W4ShaderLinkingArgument@@@std@@YA?AV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@V123@V123@AEBW4ShaderLinkingArgument@@@Z @ 0x1800E3054
 * Callers:
 *     HasWhiteNoise @ 0x1800E2FD4 (HasWhiteNoise.c)
 *     HasLighting @ 0x1800E4224 (HasLighting.c)
 * Callees:
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@01@0@Z @ 0x180005E94 (--9details@gsl@@YA_NV-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ??E?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ @ 0x180005ED4 (--E-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ.c)
 *     ??D?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@QEBAAEBW4ShaderLinkingArgument@@XZ @ 0x1800E2AE0 (--D-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@details@gsl@@QEBAAEBW4Sha.c)
 */

_OWORD *__fastcall std::find<gsl::details::span_iterator<gsl::span<enum ShaderLinkingArgument const,-1>,0>,enum ShaderLinkingArgument>(
        _OWORD *a1,
        __int128 *a2,
        __int128 *a3,
        _WORD *a4)
{
  __int128 v4; // xmm0
  __int128 v7; // xmm6
  _OWORD *result; // rax
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a3;
  v7 = *a2;
  v10 = *a2;
  v11 = v4;
  while ( 1 )
  {
    v12 = v7;
    if ( !gsl::details::operator!=(&v12, &v11) )
      break;
    if ( *(_WORD *)gsl::details::span_iterator<gsl::span<enum ShaderLinkingArgument const,-1>,0>::operator*((gsl::details *)&v10) == *a4 )
    {
      v7 = v10;
      break;
    }
    gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&v10);
    v7 = v10;
  }
  result = a1;
  *a1 = v7;
  *a2 = v7;
  return result;
}
