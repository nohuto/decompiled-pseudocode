/*
 * XREFs of sub_1800A6168 @ 0x1800A6168
 * Callers:
 *     sub_1800A2A18 @ 0x1800A2A18 (sub_1800A2A18.c)
 *     sub_1800A4298 @ 0x1800A4298 (sub_1800A4298.c)
 *     sub_1800A5D2C @ 0x1800A5D2C (sub_1800A5D2C.c)
 *     sub_1800A7D1C @ 0x1800A7D1C (sub_1800A7D1C.c)
 *     sub_1800AF560 @ 0x1800AF560 (sub_1800AF560.c)
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 *     sub_1800D45C8 @ 0x1800D45C8 (sub_1800D45C8.c)
 *     sub_1800EB1B0 @ 0x1800EB1B0 (sub_1800EB1B0.c)
 *     sub_1800EDA30 @ 0x1800EDA30 (sub_1800EDA30.c)
 *     sub_1800EE370 @ 0x1800EE370 (sub_1800EE370.c)
 *     sub_1800EE508 @ 0x1800EE508 (sub_1800EE508.c)
 *     sub_1800F8CD4 @ 0x1800F8CD4 (sub_1800F8CD4.c)
 *     sub_1800FF478 @ 0x1800FF478 (sub_1800FF478.c)
 *     sub_18010DDE0 @ 0x18010DDE0 (sub_18010DDE0.c)
 * Callees:
 *     sub_1800A5E70 @ 0x1800A5E70 (sub_1800A5E70.c)
 *     sub_1800A620C @ 0x1800A620C (sub_1800A620C.c)
 */

__int64 **__fastcall sub_1800A6168(__int64 ***a1, __int64 **a2, __int64 *a3, __int64 *a4)
{
  __int64 *j; // rbx
  __int64 **v8; // rax
  __int64 *v9; // r8
  __int64 *i; // rax
  __int64 *v11; // rcx
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  j = a3;
  if ( a3 == **a1 && a4 == (__int64 *)*a1 )
  {
    sub_1800A5E70(a1);
    *a2 = **a1;
  }
  else
  {
    while ( j != a4 )
    {
      v8 = (__int64 **)j[2];
      v9 = j;
      if ( *((_BYTE *)v8 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v11 = *v8;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v11 + 25); v11 = (__int64 *)*v11 )
          j = v11;
      }
      sub_1800A620C(a1, v13, v9);
    }
    *a2 = j;
  }
  return a2;
}
