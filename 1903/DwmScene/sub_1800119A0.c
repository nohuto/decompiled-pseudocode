/*
 * XREFs of sub_1800119A0 @ 0x1800119A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180091120 @ 0x180091120 (sub_180091120.c)
 */

__int64 __fastcall sub_1800119A0(__int64 a1, float a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  _DWORD v4[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  *(float *)v4 = a2;
  *(float *)&v4[1] = a2;
  v4[2] = 1065353216;
  v4[3] = 1065353216;
  v2 = *(_QWORD *)(a1 + 16);
  try
  {
    sub_180091120(v2, &qword_18025B5B8, v4);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000C338(retaddr, 165, (__int64)"SpectreMaterial.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
