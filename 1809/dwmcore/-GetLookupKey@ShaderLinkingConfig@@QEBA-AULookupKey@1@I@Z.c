/*
 * XREFs of ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x1800C68D0
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800C5400 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@V.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800C5F60 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800D8B40 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x1801C07B8 (-LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall ShaderLinkingConfig::GetLookupKey(__int64 a1, _OWORD *a2, int a3)
{
  int v3; // r11d
  BOOL v6; // eax
  BOOL v7; // edx
  int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  unsigned int v11; // edx
  int v12; // r9d
  char v13; // r14
  unsigned int v14; // r8d
  char v15; // di
  unsigned int v16; // r9d
  char v17; // si
  unsigned int v18; // r8d
  char v19; // bl
  unsigned int v20; // r9d
  int v21; // eax
  unsigned int v22; // r9d
  unsigned int v23; // eax
  int v24; // r9d
  int v25; // eax
  int v26; // r10d
  int v27; // r11d
  int v28; // r9d
  int v29; // r8d
  _OWORD *result; // rax
  __int128 v31; // [rsp+0h] [rbp-28h]

  v3 = 0;
  v6 = *(_BYTE *)(a1 + 26) || *(_BYTE *)(a1 + 25);
  v7 = v6;
  if ( *(_BYTE *)(a1 + 58) || *(_BYTE *)(a1 + 57) )
    v8 = 2;
  else
    v8 = 0;
  v9 = v8 | v7 & 0xFFFFFFFD;
  if ( *(_BYTE *)(a1 + 90) || *(_BYTE *)(a1 + 89) )
    v10 = 4;
  else
    v10 = 0;
  v11 = v10 | v9 & 0xFFFFFFFB;
  if ( *(_BYTE *)(a1 + 122) || *(_BYTE *)(a1 + 121) )
    v12 = 8;
  else
    v12 = 0;
  v13 = *(_BYTE *)(a1 + 24);
  v14 = v12 | v11 & 0xF0FFFFE7 | (16
                                * (v13 & 1 | ((*(_BYTE *)(a1 + 29) & 1 | (2
                                                                        * (*(_BYTE *)(a1 + 61) & 1 | (2 * (*(_BYTE *)(a1 + 93) & 1 | (2 * (*(_BYTE *)(a1 + 125) & 1))))))) << 20)));
  if ( v13 )
    v14 = v12 & 0xFFFCFCFF | v11 & 0xF0FCFCE7 | (16
                                               * (*(_BYTE *)(a1 + 24) & 1 | ((*(_BYTE *)(a1 + 29) & 1 | (2 * (*(_BYTE *)(a1 + 61) & 1 | (2 * (*(_BYTE *)(a1 + 93) & 1 | (2 * (*(_BYTE *)(a1 + 125) & 1))))))) << 20))) & 0xFFFCFCFF | ((*(_BYTE *)(a1 + 16) & 3 | ((*(_BYTE *)(a1 + 17) & 3) << 8)) << 8);
  v15 = *(_BYTE *)(a1 + 56);
  v16 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(32 * v15)) & 0x20;
  if ( v15 )
    v16 = v16 & 0xFFF3F3FF | ((*(_BYTE *)(a1 + 48) & 3 | ((*(_BYTE *)(a1 + 49) & 3) << 8)) << 10);
  v17 = *(_BYTE *)(a1 + 88);
  v18 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(v17 << 6)) & 0x40;
  if ( v17 )
    v18 = v18 & 0xFFCFCFFF | ((*(_BYTE *)(a1 + 80) & 3 | ((*(_BYTE *)(a1 + 81) & 3) << 8)) << 12);
  v19 = *(_BYTE *)(a1 + 120);
  v20 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(v19 << 7)) & 0x80;
  if ( v19 )
    v20 = v20 & 0xFF3F3FFF | ((*(_BYTE *)(a1 + 112) & 3 | ((*(_BYTE *)(a1 + 113) & 3) << 8)) << 14);
  v21 = 0;
  if ( *(_BYTE *)(a1 + 152) )
    v21 = 0x40000000;
  v22 = v21 | v20 & 0xBFFFFFFF;
  v23 = 0;
  if ( *(_BYTE *)(a1 + 153) )
    v23 = 0x80000000;
  v24 = v23 | v22 & 0x7FFFFFFF;
  v25 = 0;
  if ( *(_BYTE *)(a1 + 154) )
    v25 = 0x10000000;
  DWORD1(v31) = (*(_BYTE *)(a1 + 155) != 0 ? 0x20000000 : 0) | v25 & 0xDFFFFFFF | v24 & 0xCFFFFFFF;
  if ( *(_BYTE *)(a1 + 158) )
    v3 = 0x40000;
  v26 = v3 | ((unsigned __int128)0LL >> 96);
  v27 = *(_DWORD *)(a1 + 144) & 0x3F | ((*(unsigned __int16 *)(a1 + 128) | ((*(_BYTE *)(a1 + 30) & 1) << 16)) << 6);
  if ( v13 )
  {
    v27 ^= (v27 ^ (*(unsigned __int8 *)(a1 + 18) << 26)) & 0xC000000;
    v26 = v26 & 0xFFFFF3F3 | (4 * (*(_BYTE *)(a1 + 19) & 3 | ((*(_DWORD *)(a1 + 20) & 3) << 8)));
  }
  v28 = v27 ^ (v27 ^ (*(unsigned __int8 *)(a1 + 62) << 23)) & 0x800000;
  if ( v15 )
  {
    v28 ^= (v28 ^ (*(unsigned __int8 *)(a1 + 50) << 28)) & 0x30000000;
    v26 = v26 & 0xFFFFCFCF | (16 * (*(_BYTE *)(a1 + 51) & 3 | ((*(_DWORD *)(a1 + 52) & 3) << 8)));
  }
  v29 = v28 ^ (v28 ^ (*(unsigned __int8 *)(a1 + 94) << 24)) & 0x1000000;
  if ( v17 )
  {
    v29 = v29 & 0x3FFFFFFF | (*(unsigned __int8 *)(a1 + 82) << 30);
    v26 = v26 & 0xFFFF3F3F | ((*(_BYTE *)(a1 + 83) & 3 | ((*(_DWORD *)(a1 + 84) & 3) << 8)) << 6);
  }
  if ( v19 )
    v26 = v26 & 0xFFFCFCFC | *(_BYTE *)(a1 + 114) & 3 | ((*(_BYTE *)(a1 + 115) & 3 | ((*(_DWORD *)(a1 + 116) & 3) << 8)) << 8);
  result = a2;
  HIDWORD(v31) = (a3 << 19) | v26 & 0x7FFFF;
  LODWORD(v31) = *(_DWORD *)(a1 + 8) & 0x3F | ((*(_DWORD *)(a1 + 40) & 0x3F | ((*(_DWORD *)(a1 + 72) & 0x3F | ((*(_DWORD *)(a1 + 104) & 0x3F | ((*(_BYTE *)(a1 + 27) & 1 | (2 * (*(_BYTE *)(a1 + 59) & 1 | (2 * (*(_BYTE *)(a1 + 91) & 1 | (2 * (*(_BYTE *)(a1 + 123) & 1 | (2 * (*(_BYTE *)(a1 + 28) & 1 | (2 * (*(_BYTE *)(a1 + 60) & 1 | (2 * (*(_BYTE *)(a1 + 92) & 1 | (2 * *(unsigned __int8 *)(a1 + 124))))))))))))))) << 6)) << 6)) << 6)) << 6);
  DWORD2(v31) = (v29 ^ (*(unsigned __int8 *)(a1 + 126) << 25)) & 0x2000000 ^ v29;
  *a2 = v31;
  return result;
}
