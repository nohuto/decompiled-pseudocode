/*
 * XREFs of sub_18007ED2C @ 0x18007ED2C
 * Callers:
 *     sub_1800746A8 @ 0x1800746A8 (sub_1800746A8.c)
 *     sub_180078454 @ 0x180078454 (sub_180078454.c)
 *     sub_18007E6B8 @ 0x18007E6B8 (sub_18007E6B8.c)
 *     sub_1800D42B0 @ 0x1800D42B0 (sub_1800D42B0.c)
 * Callees:
 *     sub_18007E838 @ 0x18007E838 (sub_18007E838.c)
 *     sub_18007EDD0 @ 0x18007EDD0 (sub_18007EDD0.c)
 */

__int64 **__fastcall sub_18007ED2C(__int64 ***a1, __int64 **a2, __int64 *a3, __int64 *a4)
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
    sub_18007E838(a1);
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
      sub_18007EDD0(a1, v13, v9);
    }
    *a2 = j;
  }
  return a2;
}
