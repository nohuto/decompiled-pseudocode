/*
 * XREFs of sub_18007EC1C @ 0x18007EC1C
 * Callers:
 *     sub_180074598 @ 0x180074598 (sub_180074598.c)
 *     sub_180078344 @ 0x180078344 (sub_180078344.c)
 *     sub_18007E5A8 @ 0x18007E5A8 (sub_18007E5A8.c)
 *     sub_1800D41A0 @ 0x1800D41A0 (sub_1800D41A0.c)
 * Callees:
 *     sub_18007E728 @ 0x18007E728 (sub_18007E728.c)
 *     sub_18007ECC0 @ 0x18007ECC0 (sub_18007ECC0.c)
 */

__int64 **__fastcall sub_18007EC1C(__int64 ***a1, __int64 **a2, __int64 *a3, __int64 *a4)
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
    sub_18007E728(a1);
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
      sub_18007ECC0(a1, v13, v9);
    }
    *a2 = j;
  }
  return a2;
}
