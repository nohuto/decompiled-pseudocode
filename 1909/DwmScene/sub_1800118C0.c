/*
 * XREFs of sub_1800118C0 @ 0x1800118C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180090AFC @ 0x180090AFC (sub_180090AFC.c)
 */

__int64 __fastcall sub_1800118C0(__int64 a1, __int128 *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int128 v4; // [rsp+28h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = *a2;
  v2 = *(_QWORD *)(a1 + 16);
  try
  {
    sub_180090AFC(v2, &qword_18025C558, &v4);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000C338(retaddr, 93, (__int64)"SpectreMaterial.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
