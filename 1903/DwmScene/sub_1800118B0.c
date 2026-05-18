/*
 * XREFs of sub_1800118B0 @ 0x1800118B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800909EC @ 0x1800909EC (sub_1800909EC.c)
 */

__int64 __fastcall sub_1800118B0(__int64 a1, _DWORD *a2)
{
  int v2; // xmm2_4
  int v3; // xmm1_4
  __int64 v4; // rcx
  __int64 result; // rax
  _DWORD v6[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = a2[2];
  v3 = a2[1];
  v6[0] = *a2;
  v6[1] = v3;
  v6[2] = v2;
  v6[3] = 1065353216;
  v4 = *(_QWORD *)(a1 + 16);
  try
  {
    sub_1800909EC(v4, &qword_18025B5F8, v6);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000C338(retaddr, 109, (__int64)"SpectreMaterial.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
