/*
 * XREFs of sub_18007EE80 @ 0x18007EE80
 * Callers:
 *     sub_1800745C4 @ 0x1800745C4 (sub_1800745C4.c)
 *     sub_1800748FC @ 0x1800748FC (sub_1800748FC.c)
 *     sub_18007EFB0 @ 0x18007EFB0 (sub_18007EFB0.c)
 * Callees:
 *     sub_18007E854 @ 0x18007E854 (sub_18007E854.c)
 *     sub_18007EF24 @ 0x18007EF24 (sub_18007EF24.c)
 */

__int64 **__fastcall sub_18007EE80(__int64 ***a1, __int64 **a2, __int64 *a3, __int64 *a4)
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
    sub_18007E854(a1);
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
      sub_18007EF24(a1, v13, v9);
    }
    *a2 = j;
  }
  return a2;
}
