/*
 * XREFs of sub_180011950 @ 0x180011950
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800909EC @ 0x1800909EC (sub_1800909EC.c)
 */

__int64 __fastcall sub_180011950(__int64 a1, float a2, float a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  _DWORD v5[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v5[0] = 0;
  *(float *)&v5[1] = a3;
  *(float *)&v5[2] = a2;
  v5[3] = 0;
  v3 = *(_QWORD *)(a1 + 16);
  try
  {
    sub_1800909EC(v3, &qword_18025B578, v5);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000C338(retaddr, 149, (__int64)"SpectreMaterial.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
