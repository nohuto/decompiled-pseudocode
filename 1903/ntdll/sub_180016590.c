/*
 * XREFs of sub_180016590 @ 0x180016590
 * Callers:
 *     sub_180013124 @ 0x180013124 (sub_180013124.c)
 *     sub_1800159B8 @ 0x1800159B8 (sub_1800159B8.c)
 *     sub_18006A9F8 @ 0x18006A9F8 (sub_18006A9F8.c)
 *     sub_1800EB91C @ 0x1800EB91C (sub_1800EB91C.c)
 * Callees:
 *     sub_180015FD0 @ 0x180015FD0 (sub_180015FD0.c)
 *     sub_180016690 @ 0x180016690 (sub_180016690.c)
 */

__int64 __fastcall sub_180016590(__int64 *a1, __int64 a2, char a3, __int16 *a4, const WCHAR *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rdi
  int v11; // edx
  __int16 v12; // cx

  if ( a1 && (v9 = *a1) != 0 && a5 && a4 )
  {
    v10 = -1LL;
    *a4 = -1;
    v11 = sub_180016690(a2, v9, a5);
    if ( v11 < 0 || *a4 < 0 )
    {
      do
        ++v10;
      while ( a5[v10] );
      v11 = sub_180015FD0(a2, a5, (int)v10 + 1, a3 == 0 ? 2 : 0, 2, 1u, a1);
      if ( v11 >= 0 )
      {
        v12 = *(_WORD *)(*a1 + 4);
        if ( v12 )
          *a4 = v12 - 1;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v11;
}
