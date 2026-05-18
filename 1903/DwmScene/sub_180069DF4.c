/*
 * XREFs of sub_180069DF4 @ 0x180069DF4
 * Callers:
 *     sub_180066FD0 @ 0x180066FD0 (sub_180066FD0.c)
 *     sub_18006745C @ 0x18006745C (sub_18006745C.c)
 *     sub_180067B38 @ 0x180067B38 (sub_180067B38.c)
 *     sub_1800693C4 @ 0x1800693C4 (sub_1800693C4.c)
 *     sub_1800695AC @ 0x1800695AC (sub_1800695AC.c)
 *     sub_1800697A8 @ 0x1800697A8 (sub_1800697A8.c)
 *     sub_1800697C4 @ 0x1800697C4 (sub_1800697C4.c)
 *     sub_1800D50DC @ 0x1800D50DC (sub_1800D50DC.c)
 *     sub_1800D5AD4 @ 0x1800D5AD4 (sub_1800D5AD4.c)
 *     sub_1800D5C30 @ 0x1800D5C30 (sub_1800D5C30.c)
 *     sub_1800D63A4 @ 0x1800D63A4 (sub_1800D63A4.c)
 *     sub_180108E50 @ 0x180108E50 (sub_180108E50.c)
 *     sub_1801097AC @ 0x1801097AC (sub_1801097AC.c)
 * Callees:
 *     sub_180069AC8 @ 0x180069AC8 (sub_180069AC8.c)
 *     sub_180069E98 @ 0x180069E98 (sub_180069E98.c)
 */

__int64 **__fastcall sub_180069DF4(__int64 ***a1, __int64 **a2, __int64 *a3, __int64 *a4)
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
    sub_180069AC8(a1);
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
      sub_180069E98(a1, v13, v9);
    }
    *a2 = j;
  }
  return a2;
}
