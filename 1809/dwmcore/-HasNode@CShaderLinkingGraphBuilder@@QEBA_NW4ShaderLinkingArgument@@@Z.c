/*
 * XREFs of ?HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z @ 0x1800E296C
 * Callers:
 *     BuildSampler @ 0x1800E1FB8 (BuildSampler.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800E23B0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18005E3D8 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 */

bool __fastcall CShaderLinkingGraphBuilder::HasNode(__int64 a1, __int16 a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rax
  __int64 v5; // r11
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 *i; // rcx
  __int64 v10; // rax
  __int16 v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  v2 = *(__int64 **)(a1 + 24);
  v4 = std::_Hash_bytes((const unsigned __int8 *)&v12, 2uLL);
  v6 = *(_QWORD *)(v5 + 40);
  v7 = *(_QWORD *)(v5 + 64) & v4;
  v8 = 2 * v7;
  for ( i = *(__int64 **)(v6 + 16 * v7); ; i = (__int64 *)*i )
  {
    v10 = *(__int64 **)(v6 + 8 * v8) == v2 ? (__int64)v2 : **(_QWORD **)(v6 + 8 * v8 + 8);
    if ( i == (__int64 *)v10 )
      break;
    if ( *((_WORD *)i + 8) == a2 )
      return i != v2;
  }
  i = v2;
  return i != v2;
}
