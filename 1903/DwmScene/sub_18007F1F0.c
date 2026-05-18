/*
 * XREFs of sub_18007F1F0 @ 0x18007F1F0
 * Callers:
 *     sub_180074628 @ 0x180074628 (sub_180074628.c)
 *     sub_1800748FC @ 0x1800748FC (sub_1800748FC.c)
 *     sub_180074E54 @ 0x180074E54 (sub_180074E54.c)
 * Callees:
 *     sub_18007E8E8 @ 0x18007E8E8 (sub_18007E8E8.c)
 *     sub_18007F294 @ 0x18007F294 (sub_18007F294.c)
 */

__int64 **__fastcall sub_18007F1F0(__int64 ***a1, __int64 **a2, __int64 *a3, __int64 *a4)
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
    sub_18007E8E8(a1);
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
      sub_18007F294(a1, v13, v9);
    }
    *a2 = j;
  }
  return a2;
}
