/*
 * XREFs of sub_1800110A4 @ 0x1800110A4
 * Callers:
 *     sub_18000FC30 @ 0x18000FC30 (sub_18000FC30.c)
 *     sub_180011324 @ 0x180011324 (sub_180011324.c)
 *     sub_180016B94 @ 0x180016B94 (sub_180016B94.c)
 *     sub_18011E420 @ 0x18011E420 (sub_18011E420.c)
 * Callees:
 *     unknown_libname_115 @ 0x1800100F8 (unknown_libname_115.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800110A4(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // r14
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        unknown_libname_115(v4, 0);
        v4 += 16LL;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    v10 = (a1[2] - v4) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v10 >= 0x1000 )
    {
      v11 = *(_QWORD *)(v4 - 8);
      v12 = v10 + 39;
      if ( (unsigned __int64)(v4 - v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v12);
        JUMPOUT(0x18001115BLL);
      }
      v4 = *(_QWORD *)(v4 - 8);
    }
    result = j_j__o_free(v4);
  }
  *a1 = a2;
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
  return result;
}
