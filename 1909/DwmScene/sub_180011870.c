/*
 * XREFs of sub_180011870 @ 0x180011870
 * Callers:
 *     <none>
 * Callees:
 *     sub_180090E8C @ 0x180090E8C (sub_180090E8C.c)
 */

__int64 __fastcall sub_180011870(__int64 a1, int a2)
{
  int v2; // edx
  __int64 v3; // rdx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
  {
    sub_180090E8C(*(_QWORD *)(a1 + 16), 0LL);
    return 0LL;
  }
  v2 = a2 - 1;
  if ( v2 )
  {
    if ( v2 != 1 )
      return 0LL;
    v3 = 3LL;
  }
  else
  {
    v3 = 1LL;
  }
  try
  {
    sub_180090E8C(*(_QWORD *)(a1 + 16), v3);
  }
  catch ( ... )
  {
    sub_18000C338(retaddr, 77, (__int64)"SpectreMaterial.cpp", 0x80004005);
    return 2147500037LL;
  }
  return 0LL;
}
