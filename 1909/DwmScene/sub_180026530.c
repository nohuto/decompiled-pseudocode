/*
 * XREFs of sub_180026530 @ 0x180026530
 * Callers:
 *     sub_180020888 @ 0x180020888 (sub_180020888.c)
 *     sub_18003F1BC @ 0x18003F1BC (sub_18003F1BC.c)
 *     sub_18006491C @ 0x18006491C (sub_18006491C.c)
 *     sub_180064A1C @ 0x180064A1C (sub_180064A1C.c)
 *     sub_1800657B8 @ 0x1800657B8 (sub_1800657B8.c)
 *     sub_180074A0C @ 0x180074A0C (sub_180074A0C.c)
 *     sub_1800895AC @ 0x1800895AC (sub_1800895AC.c)
 *     sub_180095394 @ 0x180095394 (sub_180095394.c)
 *     sub_18009D6BC @ 0x18009D6BC (sub_18009D6BC.c)
 *     sub_18009F14C @ 0x18009F14C (sub_18009F14C.c)
 *     sub_1800A2C14 @ 0x1800A2C14 (sub_1800A2C14.c)
 *     sub_1800A2D74 @ 0x1800A2D74 (sub_1800A2D74.c)
 *     sub_1800A70EC @ 0x1800A70EC (sub_1800A70EC.c)
 *     sub_1800A9F4C @ 0x1800A9F4C (sub_1800A9F4C.c)
 *     sub_1800A9FA8 @ 0x1800A9FA8 (sub_1800A9FA8.c)
 *     sub_1800AA234 @ 0x1800AA234 (sub_1800AA234.c)
 *     sub_1800ABED8 @ 0x1800ABED8 (sub_1800ABED8.c)
 *     sub_1800BD4C4 @ 0x1800BD4C4 (sub_1800BD4C4.c)
 *     sub_1800CFCA4 @ 0x1800CFCA4 (sub_1800CFCA4.c)
 *     sub_1800D1780 @ 0x1800D1780 (sub_1800D1780.c)
 *     sub_1800D23A8 @ 0x1800D23A8 (sub_1800D23A8.c)
 *     sub_1800D3054 @ 0x1800D3054 (sub_1800D3054.c)
 *     sub_1800F7154 @ 0x1800F7154 (sub_1800F7154.c)
 * Callees:
 *     sub_18002638C @ 0x18002638C (sub_18002638C.c)
 *     sub_1800265D4 @ 0x1800265D4 (sub_1800265D4.c)
 */

__int64 **__fastcall sub_180026530(__int64 ***a1, __int64 **a2, __int64 *a3, __int64 *a4)
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
    sub_18002638C(a1);
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
      sub_1800265D4(a1, v13, v9);
    }
    *a2 = j;
  }
  return a2;
}
