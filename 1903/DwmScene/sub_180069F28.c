/*
 * XREFs of sub_180069F28 @ 0x180069F28
 * Callers:
 *     sub_180066F90 @ 0x180066F90 (sub_180066F90.c)
 *     sub_1800670B0 @ 0x1800670B0 (sub_1800670B0.c)
 * Callees:
 *     sub_180069B60 @ 0x180069B60 (sub_180069B60.c)
 *     sub_180069FCC @ 0x180069FCC (sub_180069FCC.c)
 */

__int64 **__fastcall sub_180069F28(__int64 ***a1, __int64 **a2, __int64 *a3, __int64 *a4)
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
    sub_180069B60(a1);
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
      sub_180069FCC(a1, v13, v9);
    }
    *a2 = j;
  }
  return a2;
}
