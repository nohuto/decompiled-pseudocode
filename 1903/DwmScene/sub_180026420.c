/*
 * XREFs of sub_180026420 @ 0x180026420
 * Callers:
 *     sub_180020778 @ 0x180020778 (sub_180020778.c)
 *     sub_18003F0AC @ 0x18003F0AC (sub_18003F0AC.c)
 *     sub_18006480C @ 0x18006480C (sub_18006480C.c)
 *     sub_18006490C @ 0x18006490C (sub_18006490C.c)
 *     sub_1800656A8 @ 0x1800656A8 (sub_1800656A8.c)
 *     sub_1800748FC @ 0x1800748FC (sub_1800748FC.c)
 *     sub_18008949C @ 0x18008949C (sub_18008949C.c)
 *     sub_180095284 @ 0x180095284 (sub_180095284.c)
 *     sub_18009D5AC @ 0x18009D5AC (sub_18009D5AC.c)
 *     sub_18009F03C @ 0x18009F03C (sub_18009F03C.c)
 *     sub_1800A2B04 @ 0x1800A2B04 (sub_1800A2B04.c)
 *     sub_1800A2C64 @ 0x1800A2C64 (sub_1800A2C64.c)
 *     sub_1800A6FDC @ 0x1800A6FDC (sub_1800A6FDC.c)
 *     sub_1800A9E3C @ 0x1800A9E3C (sub_1800A9E3C.c)
 *     sub_1800A9E98 @ 0x1800A9E98 (sub_1800A9E98.c)
 *     sub_1800AA124 @ 0x1800AA124 (sub_1800AA124.c)
 *     sub_1800ABDC8 @ 0x1800ABDC8 (sub_1800ABDC8.c)
 *     sub_1800BD3B4 @ 0x1800BD3B4 (sub_1800BD3B4.c)
 *     sub_1800CFB94 @ 0x1800CFB94 (sub_1800CFB94.c)
 *     sub_1800D1670 @ 0x1800D1670 (sub_1800D1670.c)
 *     sub_1800D2298 @ 0x1800D2298 (sub_1800D2298.c)
 *     sub_1800D2F44 @ 0x1800D2F44 (sub_1800D2F44.c)
 *     sub_1800F7044 @ 0x1800F7044 (sub_1800F7044.c)
 * Callees:
 *     sub_18002627C @ 0x18002627C (sub_18002627C.c)
 *     sub_1800264C4 @ 0x1800264C4 (sub_1800264C4.c)
 */

__int64 **__fastcall sub_180026420(__int64 ***a1, __int64 **a2, __int64 *a3, __int64 *a4)
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
    sub_18002627C(a1);
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
      sub_1800264C4(a1, v13, v9);
    }
    *a2 = j;
  }
  return a2;
}
