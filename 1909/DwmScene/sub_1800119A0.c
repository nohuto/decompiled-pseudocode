/*
 * XREFs of sub_1800119A0 @ 0x1800119A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180090AFC @ 0x180090AFC (sub_180090AFC.c)
 */

__int64 __fastcall sub_1800119A0(__int64 a1, float a2, float a3)
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
    sub_180090AFC(v3, &qword_18025C578, v5);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000C338(retaddr, 149, (__int64)"SpectreMaterial.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
