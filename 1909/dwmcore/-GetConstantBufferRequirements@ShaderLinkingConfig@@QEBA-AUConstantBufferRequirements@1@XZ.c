/*
 * XREFs of ?GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA?AUConstantBufferRequirements@1@XZ @ 0x1800451D8
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x1800437EC (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAIPEAPEAU.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall ShaderLinkingConfig::GetConstantBufferRequirements(_BYTE *a1, unsigned int *a2)
{
  int v2; // r8d
  BOOL v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int *v7; // r9
  __int64 v8; // rax
  unsigned int *result; // rax
  unsigned int v10; // [rsp+8h] [rbp+8h] BYREF
  char v11; // [rsp+Ch] [rbp+Ch] BYREF

  v2 = 0;
  v3 = a1[22] || a1[18] || a1[19];
  if ( a1[54] || a1[50] || a1[51] )
    v4 = v3 | 2;
  else
    v4 = v3 & 0xFFFFFFFD;
  if ( a1[86] || a1[82] || a1[83] )
    v5 = v4 | 4;
  else
    v5 = v4 & 0xFFFFFFFB;
  if ( a1[118] || a1[114] || a1[115] )
    v6 = v5 | 8;
  else
    v6 = v5 & 0xFFFFFFF7;
  v10 = v6;
  *a2 = v6;
  v7 = &v10;
  do
  {
    v8 = *(unsigned __int8 *)v7;
    v7 = (unsigned int *)((char *)v7 + 1);
    v2 += byte_1802B0D70[v8];
  }
  while ( (char *)v7 - (char *)&v10 != (&v11 < (char *)&v10 ? 0 : 4) );
  result = a2;
  a2[1] = 32 * v2;
  return result;
}
