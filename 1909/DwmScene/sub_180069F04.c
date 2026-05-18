/*
 * XREFs of sub_180069F04 @ 0x180069F04
 * Callers:
 *     sub_1800670E0 @ 0x1800670E0 (sub_1800670E0.c)
 *     sub_18006756C @ 0x18006756C (sub_18006756C.c)
 *     sub_180067C48 @ 0x180067C48 (sub_180067C48.c)
 *     sub_1800694D4 @ 0x1800694D4 (sub_1800694D4.c)
 *     sub_1800696BC @ 0x1800696BC (sub_1800696BC.c)
 *     sub_1800698B8 @ 0x1800698B8 (sub_1800698B8.c)
 *     sub_1800698D4 @ 0x1800698D4 (sub_1800698D4.c)
 *     sub_1800D51EC @ 0x1800D51EC (sub_1800D51EC.c)
 *     sub_1800D5BE4 @ 0x1800D5BE4 (sub_1800D5BE4.c)
 *     sub_1800D5D40 @ 0x1800D5D40 (sub_1800D5D40.c)
 *     sub_1800D64B4 @ 0x1800D64B4 (sub_1800D64B4.c)
 *     sub_180108F60 @ 0x180108F60 (sub_180108F60.c)
 *     sub_1801098BC @ 0x1801098BC (sub_1801098BC.c)
 * Callees:
 *     sub_180069BD8 @ 0x180069BD8 (sub_180069BD8.c)
 *     sub_180069FA8 @ 0x180069FA8 (sub_180069FA8.c)
 */

__int64 **__fastcall sub_180069F04(__int64 ***a1, __int64 **a2, __int64 *a3, __int64 *a4)
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
    sub_180069BD8(a1);
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
      sub_180069FA8(a1, v13, v9);
    }
    *a2 = j;
  }
  return a2;
}
