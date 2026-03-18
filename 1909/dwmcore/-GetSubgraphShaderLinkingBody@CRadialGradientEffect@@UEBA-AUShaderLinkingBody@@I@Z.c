/*
 * XREFs of ?GetSubgraphShaderLinkingBody@CRadialGradientEffect@@UEBA?AUShaderLinkingBody@@I@Z @ 0x180258320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRadialGradientEffect::GetSubgraphShaderLinkingBody(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  const char *v3; // rax
  int v4; // ecx
  __int64 result; // rax
  __int128 v6; // [rsp+0h] [rbp-18h]

  *(_QWORD *)&v6 = 1LL;
  *((_QWORD *)&v6 + 1) = &CRadialGradientEffect::k_shaderLinkingArguments;
  v2 = v6;
  *(_BYTE *)(a2 + 32) = 1;
  *((_QWORD *)&v6 + 1) = &unk_1802BFD20;
  v3 = "RadialGradientCentered_UV";
  *(_OWORD *)a2 = v2;
  *(_QWORD *)&v6 = 3999LL;
  *(_OWORD *)(a2 + 16) = v6;
  if ( !*(_BYTE *)(a1 + 44) )
    v3 = "RadialGradientNonCentered_UV";
  *(_QWORD *)(a2 + 40) = v3;
  v4 = -(*(_BYTE *)(a1 + 44) != 0);
  *(_WORD *)(a2 + 52) = 256;
  result = a2;
  *(_DWORD *)(a2 + 48) = (v4 & 0xFFFFFFE8) + 32;
  return result;
}
