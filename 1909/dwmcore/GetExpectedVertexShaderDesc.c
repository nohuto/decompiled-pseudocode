/*
 * XREFs of GetExpectedVertexShaderDesc @ 0x180033138
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180031B14 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     HasLighting @ 0x180030B88 (HasLighting.c)
 */

__int64 __fastcall GetExpectedVertexShaderDesc(__int64 *a1, _QWORD *a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 **v7; // rbx
  __int64 **v8; // rsi
  __int64 v10; // [rsp+40h] [rbp+18h]

  if ( a5 || (HIDWORD(v10) = 2, a4 > 2) )
    HIDWORD(v10) = 4;
  if ( *(_DWORD *)(a3 + 128) != -1 || HasLighting(a1) )
    goto LABEL_9;
  v7 = (__int64 **)a2[1];
  v8 = &v7[*a2];
  while ( v7 != v8 )
  {
    if ( HasLighting(*v7) )
      goto LABEL_9;
    ++v7;
  }
  LOBYTE(v10) = 0;
  if ( a5 )
LABEL_9:
    LOBYTE(v10) = 1;
  *(_WORD *)((char *)&v10 + 1) = *(_WORD *)(a3 + 153);
  BYTE3(v10) = *(_BYTE *)(a3 + 160);
  return v10;
}
