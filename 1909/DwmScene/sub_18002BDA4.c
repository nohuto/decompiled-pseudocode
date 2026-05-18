/*
 * XREFs of sub_18002BDA4 @ 0x18002BDA4
 * Callers:
 *     sub_18002822C @ 0x18002822C (sub_18002822C.c)
 *     sub_180028284 @ 0x180028284 (sub_180028284.c)
 *     sub_18002A518 @ 0x18002A518 (sub_18002A518.c)
 *     sub_180074A0C @ 0x180074A0C (sub_180074A0C.c)
 *     sub_180074F64 @ 0x180074F64 (sub_180074F64.c)
 *     sub_1800D9558 @ 0x1800D9558 (sub_1800D9558.c)
 *     sub_1800E23F8 @ 0x1800E23F8 (sub_1800E23F8.c)
 * Callees:
 *     sub_18002BB04 @ 0x18002BB04 (sub_18002BB04.c)
 *     sub_18002BE48 @ 0x18002BE48 (sub_18002BE48.c)
 */

__int64 **__fastcall sub_18002BDA4(__int64 ***a1, __int64 **a2, __int64 *a3, __int64 *a4)
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
    sub_18002BB04(a1);
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
      sub_18002BE48(a1, v13, v9);
    }
    *a2 = j;
  }
  return a2;
}
