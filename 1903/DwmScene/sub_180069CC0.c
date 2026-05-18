/*
 * XREFs of sub_180069CC0 @ 0x180069CC0
 * Callers:
 *     sub_180067074 @ 0x180067074 (sub_180067074.c)
 *     sub_1800681A4 @ 0x1800681A4 (sub_1800681A4.c)
 *     sub_18007B430 @ 0x18007B430 (sub_18007B430.c)
 *     sub_18007B920 @ 0x18007B920 (sub_18007B920.c)
 *     sub_1800A2C64 @ 0x1800A2C64 (sub_1800A2C64.c)
 *     sub_1800A7C0C @ 0x1800A7C0C (sub_1800A7C0C.c)
 *     sub_18013CE70 @ 0x18013CE70 (sub_18013CE70.c)
 * Callees:
 *     sub_180069A30 @ 0x180069A30 (sub_180069A30.c)
 *     sub_180069D64 @ 0x180069D64 (sub_180069D64.c)
 */

__int64 **__fastcall sub_180069CC0(__int64 ***a1, __int64 **a2, __int64 *a3, __int64 *a4)
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
    sub_180069A30(a1);
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
      sub_180069D64(a1, v13, v9);
    }
    *a2 = j;
  }
  return a2;
}
