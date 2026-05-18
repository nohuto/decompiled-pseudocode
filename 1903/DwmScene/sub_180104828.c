/*
 * XREFs of sub_180104828 @ 0x180104828
 * Callers:
 *     sub_1800C80F8 @ 0x1800C80F8 (sub_1800C80F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180104828(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  float v3; // xmm1_4
  __int64 v4; // rax
  float v5; // xmm0_4
  int v6; // eax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 144);
  v3 = (float)(int)v2;
  if ( v2 < 0 )
    v3 = v3 + 1.8446744e19;
  v4 = *(_QWORD *)(a1 + 136);
  v5 = (float)(int)v4;
  if ( v4 < 0 )
    v5 = v5 + 1.8446744e19;
  v6 = *(_DWORD *)(a1 + 160);
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = v6;
  result = a2;
  *(float *)a2 = (float)(v5 - 1.0) / v3;
  *(float *)(a2 + 4) = 0.5 / v3;
  return result;
}
