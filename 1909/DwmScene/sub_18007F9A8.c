/*
 * XREFs of sub_18007F9A8 @ 0x18007F9A8
 * Callers:
 *     sub_180076F50 @ 0x180076F50 (sub_180076F50.c)
 * Callees:
 *     unknown_libname_115 @ 0x1800100F8 (unknown_libname_115.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 ***__fastcall sub_18007F9A8(__int64 ****a1, __int64 **a2)
{
  __int64 ***v2; // rdi
  __int64 ***result; // rax
  __int64 **v6; // rbx
  __int64 v7; // rcx
  __int64 *v8; // rbp

  v2 = *a1;
  result = *a1;
  v6 = **a1;
  if ( v6 != (__int64 **)*a1 )
  {
    do
    {
      v7 = (__int64)(v6 + 2);
      v8 = *v6;
      if ( v6[2] == *a2 )
      {
        if ( (__int64 **)v7 == a2 )
        {
          v2 = (__int64 ***)v6;
        }
        else
        {
          *v6[1] = (__int64)v8;
          (*v6)[1] = (__int64)v6[1];
          a1[1] = (__int64 ***)((char *)a1[1] - 1);
          unknown_libname_115(v7, 0);
          j_j__o_free(v6);
        }
      }
      result = *a1;
      v6 = (__int64 **)v8;
    }
    while ( v8 != (__int64 *)*a1 );
  }
  if ( v2 != result )
  {
    *v2[1] = (__int64 *)*v2;
    (*v2)[1] = (__int64 *)v2[1];
    a1[1] = (__int64 ***)((char *)a1[1] - 1);
    unknown_libname_115((__int64)(v2 + 2), 0);
    return (__int64 ***)j_j__o_free(v2);
  }
  return result;
}
