/*
 * XREFs of HasLighting @ 0x1800E4224
 * Callers:
 *     GetExpectedVertexShaderDesc @ 0x1800E4164 (GetExpectedVertexShaderDesc.c)
 * Callees:
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@01@0@Z @ 0x180005E94 (--9details@gsl@@YA_NV-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ??$find@V?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@W4ShaderLinkingArgument@@@std@@YA?AV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@V123@V123@AEBW4ShaderLinkingArgument@@@Z @ 0x1800E3054 (--$find@V-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@details@gsl@@W4Shad.c)
 */

char __fastcall HasLighting(__int64 a1)
{
  __int128 v1; // rcx
  __int128 v2; // xmm0
  __int128 v3; // xmm0
  __int128 v5; // [rsp+20h] [rbp-40h] BYREF
  __int128 v6; // [rsp+30h] [rbp-30h] BYREF
  __int128 v7; // [rsp+40h] [rbp-20h] BYREF
  __int128 v8; // [rsp+50h] [rbp-10h] BYREF
  __int16 v9; // [rsp+70h] [rbp+10h] BYREF

  *(_QWORD *)&v1 = a1;
  *((_QWORD *)&v1 + 1) = 0LL;
  if ( *(_BYTE *)(v1 + 52) )
    goto LABEL_4;
  *(_QWORD *)&v5 = v1;
  v9 = 2;
  *((_QWORD *)&v5 + 1) = *(_QWORD *)v1;
  v2 = v5;
  *(_QWORD *)&v5 = v1;
  v7 = v2;
  v3 = v5;
  v5 = v1;
  v6 = v3;
  v6 = *std::find<gsl::details::span_iterator<gsl::span<enum ShaderLinkingArgument const,-1>,0>,enum ShaderLinkingArgument>(
          &v8,
          &v5,
          &v6,
          &v9);
  if ( gsl::details::operator!=(&v6, &v7) )
LABEL_4:
    BYTE8(v1) = 1;
  return BYTE8(v1);
}
