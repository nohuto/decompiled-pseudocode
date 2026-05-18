/*
 * XREFs of sub_180026664 @ 0x180026664
 * Callers:
 *     sub_1800205C8 @ 0x1800205C8 (sub_1800205C8.c)
 *     sub_180020700 @ 0x180020700 (sub_180020700.c)
 *     sub_180020888 @ 0x180020888 (sub_180020888.c)
 *     sub_180020964 @ 0x180020964 (sub_180020964.c)
 *     sub_180064250 @ 0x180064250 (sub_180064250.c)
 *     sub_1800646E8 @ 0x1800646E8 (sub_1800646E8.c)
 *     sub_180064A1C @ 0x180064A1C (sub_180064A1C.c)
 *     sub_18008F9C8 @ 0x18008F9C8 (sub_18008F9C8.c)
 *     sub_180095394 @ 0x180095394 (sub_180095394.c)
 *     sub_18009D6BC @ 0x18009D6BC (sub_18009D6BC.c)
 *     sub_18009F14C @ 0x18009F14C (sub_18009F14C.c)
 *     sub_1800A2C14 @ 0x1800A2C14 (sub_1800A2C14.c)
 *     sub_1800CFCA4 @ 0x1800CFCA4 (sub_1800CFCA4.c)
 *     sub_1800D1780 @ 0x1800D1780 (sub_1800D1780.c)
 *     sub_1800D23A8 @ 0x1800D23A8 (sub_1800D23A8.c)
 *     sub_1800D3054 @ 0x1800D3054 (sub_1800D3054.c)
 *     sub_1800D5138 @ 0x1800D5138 (sub_1800D5138.c)
 *     sub_1800F49D0 @ 0x1800F49D0 (sub_1800F49D0.c)
 *     sub_1800F4A04 @ 0x1800F4A04 (sub_1800F4A04.c)
 * Callees:
 *     sub_180026424 @ 0x180026424 (sub_180026424.c)
 *     sub_180026708 @ 0x180026708 (sub_180026708.c)
 */

__int64 **__fastcall sub_180026664(__int64 ***a1, __int64 **a2, __int64 *a3, __int64 *a4)
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
    sub_180026424(a1);
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
      sub_180026708(a1, v13, v9);
    }
    *a2 = j;
  }
  return a2;
}
