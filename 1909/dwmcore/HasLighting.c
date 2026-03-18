/*
 * XREFs of HasLighting @ 0x180030B88
 * Callers:
 *     GetExpectedVertexShaderDesc @ 0x180033138 (GetExpectedVertexShaderDesc.c)
 * Callees:
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@01@0@Z @ 0x180032E9C (--9details@gsl@@YA_NV-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ??$find@V?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@W4ShaderLinkingArgument@@@std@@YA?AV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@V123@V123@AEBW4ShaderLinkingArgument@@@Z @ 0x180032EDC (--$find@V-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@details@gsl@@W4Shad.c)
 */

char __fastcall HasLighting(__int64 *a1)
{
  __int64 v1; // rax
  __int128 v2; // xmm0
  char v3; // bl
  __int128 v4; // xmm0
  __int128 v6; // [rsp+20h] [rbp-40h] BYREF
  __int128 v7; // [rsp+30h] [rbp-30h] BYREF
  __int128 v8; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v9[16]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v10; // [rsp+70h] [rbp+10h] BYREF

  if ( *((_WORD *)a1 + 26) == 11 )
    return 1;
  v1 = *a1;
  *(_QWORD *)&v6 = a1;
  *((_QWORD *)&v6 + 1) = v1;
  v2 = v6;
  v3 = 0;
  *(_QWORD *)&v6 = a1;
  *((_QWORD *)&v6 + 1) = v1;
  v8 = v2;
  v4 = v6;
  v6 = (unsigned __int64)a1;
  v7 = v4;
  v10 = 2;
  v7 = *(_OWORD *)((__int64 (__fastcall *)(_BYTE *, __int128 *, __int128 *, __int16 *))std::find<gsl::details::span_iterator<gsl::span<enum ShaderLinkingArgument const,-1>,0>,enum ShaderLinkingArgument>)(
                    v9,
                    &v6,
                    &v7,
                    &v10);
  if ( (unsigned __int8)gsl::details::operator!=(&v7, &v8) )
    return 1;
  return v3;
}
