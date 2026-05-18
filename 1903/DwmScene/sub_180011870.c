/*
 * XREFs of sub_180011870 @ 0x180011870
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800909EC @ 0x1800909EC (sub_1800909EC.c)
 */

__int64 __fastcall sub_180011870(__int64 a1, __int128 *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int128 v4; // [rsp+28h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = *a2;
  v2 = *(_QWORD *)(a1 + 16);
  try
  {
    sub_1800909EC(v2, &qword_18025B558, &v4);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000C338(retaddr, 93, (__int64)"SpectreMaterial.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
