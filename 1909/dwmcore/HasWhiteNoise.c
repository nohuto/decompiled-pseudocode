/*
 * XREFs of HasWhiteNoise @ 0x180032E1C
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180031B14 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@01@0@Z @ 0x180032E9C (--9details@gsl@@YA_NV-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ??$find@V?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@W4ShaderLinkingArgument@@@std@@YA?AV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@V123@V123@AEBW4ShaderLinkingArgument@@@Z @ 0x180032EDC (--$find@V-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@details@gsl@@W4Shad.c)
 */

__int64 __fastcall HasWhiteNoise(__int64 *a1)
{
  __int64 v1; // rax
  __int128 v2; // xmm0
  __int128 v3; // xmm0
  __int128 v5; // [rsp+20h] [rbp-40h] BYREF
  __int128 v6; // [rsp+30h] [rbp-30h] BYREF
  __int128 v7; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v8[16]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v9; // [rsp+70h] [rbp+10h] BYREF

  v1 = *a1;
  *(_QWORD *)&v5 = a1;
  *((_QWORD *)&v5 + 1) = v1;
  v2 = v5;
  *(_QWORD *)&v5 = a1;
  *((_QWORD *)&v5 + 1) = v1;
  v7 = v2;
  v3 = v5;
  v5 = (unsigned __int64)a1;
  v6 = v3;
  v9 = 12;
  v6 = *(_OWORD *)((__int64 (__fastcall *)(_BYTE *, __int128 *, __int128 *, __int16 *))std::find<gsl::details::span_iterator<gsl::span<enum ShaderLinkingArgument const,-1>,0>,enum ShaderLinkingArgument>)(
                    v8,
                    &v5,
                    &v6,
                    &v9);
  return gsl::details::operator!=(&v6, &v7);
}
