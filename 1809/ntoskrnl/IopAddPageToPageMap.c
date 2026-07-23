/*
 * XREFs of IopAddPageToPageMap @ 0x140281058
 * Callers:
 *     IoSetDumpRange @ 0x1402804A0 (IoSetDumpRange.c)
 * Callees:
 *     RtlFindNextForwardRunClearCappedEx @ 0x14015B220 (RtlFindNextForwardRunClearCappedEx.c)
 *     IopAddPageRangeToPageMaps @ 0x140280F6C (IopAddPageRangeToPageMaps.c)
 */

__int64 __fastcall IopAddPageToPageMap(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        char a6,
        unsigned int a7)
{
  unsigned __int64 v9; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // r15
  unsigned int v15; // r12d
  unsigned __int64 NextForwardRunClearCapped; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rbx
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF

  v9 = a5;
  if ( !a5 )
    return 0LL;
  v12 = *a2;
  if ( a4 < *a2 )
  {
    if ( a4 + a5 - 1 >= v12 )
    {
      if ( !a6 )
        return 3221225793LL;
      v9 = v12 - a4;
    }
    if ( v9 )
    {
      if ( a3 )
      {
        v14 = a4 + v9;
        v15 = a7;
        v19[1] = a2[1];
        v19[0] = a4 + v9;
        a5 = a4;
        while ( 1 )
        {
          NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx((__int64)v19, a4, (__int64)a3, &a5);
          v17 = NextForwardRunClearCapped;
          if ( !NextForwardRunClearCapped )
            break;
          if ( NextForwardRunClearCapped > *a3 )
          {
            IopAddPageRangeToPageMaps(a1, (__int128 *)a2, a5, *a3, v15);
            *a3 = 0LL;
            return 3221225507LL;
          }
          v18 = a5;
          IopAddPageRangeToPageMaps(a1, (__int128 *)a2, a5, NextForwardRunClearCapped, v15);
          *a3 -= v17;
          a4 = v17 + v18;
          a5 = v17 + v18;
          if ( v17 + v18 >= v14 )
            return 0LL;
        }
      }
      else
      {
        IopAddPageRangeToPageMaps(a1, (__int128 *)a2, a4, v9, a7);
      }
    }
    return 0LL;
  }
  if ( a6 )
    return 0LL;
  return 3221225793LL;
}
