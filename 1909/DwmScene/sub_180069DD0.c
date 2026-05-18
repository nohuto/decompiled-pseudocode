/*
 * XREFs of sub_180069DD0 @ 0x180069DD0
 * Callers:
 *     sub_180067184 @ 0x180067184 (sub_180067184.c)
 *     sub_1800682B4 @ 0x1800682B4 (sub_1800682B4.c)
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 *     sub_18007BA30 @ 0x18007BA30 (sub_18007BA30.c)
 *     sub_1800A2D74 @ 0x1800A2D74 (sub_1800A2D74.c)
 *     sub_1800A7D1C @ 0x1800A7D1C (sub_1800A7D1C.c)
 *     sub_18013CF80 @ 0x18013CF80 (sub_18013CF80.c)
 * Callees:
 *     sub_180069B40 @ 0x180069B40 (sub_180069B40.c)
 *     sub_180069E74 @ 0x180069E74 (sub_180069E74.c)
 */

__int64 **__fastcall sub_180069DD0(__int64 ***a1, __int64 **a2, __int64 *a3, __int64 *a4)
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
    sub_180069B40(a1);
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
      sub_180069E74(a1, v13, v9);
    }
    *a2 = j;
  }
  return a2;
}
