/*
 * XREFs of ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x1800D3010
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180044440 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 * Callees:
 *     GetInputs @ 0x1800D30B4 (GetInputs.c)
 */

__int64 __fastcall CommonRenderingShaderBody::GetShaderLinkingBody(__int64 a1, int a2, char a3)
{
  void *v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm0
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( !a3 )
  {
    v4 = &unk_1802F6070;
    goto LABEL_4;
  }
  if ( a3 == 1 )
  {
    v4 = &unk_1802B15C0;
LABEL_4:
    *((_QWORD *)&v8 + 1) = v4;
    *(_QWORD *)&v8 = 3106LL;
    v5 = v8;
    *(_BYTE *)(a1 + 32) = a3;
    *(_QWORD *)(a1 + 40) = off_1802704F0[a2];
    *(_OWORD *)(a1 + 16) = v5;
    v6 = *(_OWORD *)GetInputs(&v8);
    *(_DWORD *)(a1 + 48) = 0;
    *(_WORD *)(a1 + 52) = 10;
    *(_OWORD *)a1 = v6;
  }
  return a1;
}
