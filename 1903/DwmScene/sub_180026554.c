/*
 * XREFs of sub_180026554 @ 0x180026554
 * Callers:
 *     sub_1800204B8 @ 0x1800204B8 (sub_1800204B8.c)
 *     sub_1800205F0 @ 0x1800205F0 (sub_1800205F0.c)
 *     sub_180020778 @ 0x180020778 (sub_180020778.c)
 *     sub_180020854 @ 0x180020854 (sub_180020854.c)
 *     sub_180064140 @ 0x180064140 (sub_180064140.c)
 *     sub_1800645D8 @ 0x1800645D8 (sub_1800645D8.c)
 *     sub_18006490C @ 0x18006490C (sub_18006490C.c)
 *     sub_18008F8B8 @ 0x18008F8B8 (sub_18008F8B8.c)
 *     sub_180095284 @ 0x180095284 (sub_180095284.c)
 *     sub_18009D5AC @ 0x18009D5AC (sub_18009D5AC.c)
 *     sub_18009F03C @ 0x18009F03C (sub_18009F03C.c)
 *     sub_1800A2B04 @ 0x1800A2B04 (sub_1800A2B04.c)
 *     sub_1800CFB94 @ 0x1800CFB94 (sub_1800CFB94.c)
 *     sub_1800D1670 @ 0x1800D1670 (sub_1800D1670.c)
 *     sub_1800D2298 @ 0x1800D2298 (sub_1800D2298.c)
 *     sub_1800D2F44 @ 0x1800D2F44 (sub_1800D2F44.c)
 *     sub_1800D5028 @ 0x1800D5028 (sub_1800D5028.c)
 *     sub_1800F48C0 @ 0x1800F48C0 (sub_1800F48C0.c)
 *     sub_1800F48F4 @ 0x1800F48F4 (sub_1800F48F4.c)
 * Callees:
 *     sub_180026314 @ 0x180026314 (sub_180026314.c)
 *     sub_1800265F8 @ 0x1800265F8 (sub_1800265F8.c)
 */

__int64 **__fastcall sub_180026554(__int64 ***a1, __int64 **a2, __int64 *a3, __int64 *a4)
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
    sub_180026314(a1);
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
      sub_1800265F8(a1, v13, v9);
    }
    *a2 = j;
  }
  return a2;
}
