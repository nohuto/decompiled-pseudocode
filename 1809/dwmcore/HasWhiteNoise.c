/*
 * XREFs of HasWhiteNoise @ 0x1800E2FD4
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800E23B0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@01@0@Z @ 0x180005E94 (--9details@gsl@@YA_NV-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ??$find@V?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@W4ShaderLinkingArgument@@@std@@YA?AV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@V123@V123@AEBW4ShaderLinkingArgument@@@Z @ 0x1800E3054 (--$find@V-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@details@gsl@@W4Shad.c)
 */

bool __fastcall HasWhiteNoise(_QWORD *a1)
{
  __int128 v1; // xmm0
  __int128 v2; // xmm0
  __int128 v4; // [rsp+20h] [rbp-40h] BYREF
  __int128 v5; // [rsp+30h] [rbp-30h] BYREF
  __int128 v6; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v7[16]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v8; // [rsp+70h] [rbp+10h] BYREF

  *(_QWORD *)&v4 = a1;
  v8 = 12;
  *((_QWORD *)&v4 + 1) = *a1;
  v1 = v4;
  *(_QWORD *)&v4 = a1;
  v6 = v1;
  v2 = v4;
  v4 = (unsigned __int64)a1;
  v5 = v2;
  v5 = *(_OWORD *)((__int64 (__fastcall *)(_BYTE *, __int128 *, __int128 *, __int16 *))std::find<gsl::details::span_iterator<gsl::span<enum ShaderLinkingArgument const,-1>,0>,enum ShaderLinkingArgument>)(
                    v7,
                    &v4,
                    &v5,
                    &v8);
  return gsl::details::operator!=(&v5, &v6);
}
