/*
 * XREFs of PoInitializeStopWatch @ 0x140001E48
 * Callers:
 *     PopGetStopWatchByRequestType @ 0x1405898A4 (PopGetStopWatchByRequestType.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall PoInitializeStopWatch(__int64 **a1, __int64 *a2)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  memset(a1, 0, 0x30uLL);
  *a1 = a2;
  v4 = a1 + 1;
  result = *a2;
  if ( *(__int64 **)(*a2 + 8) != a2 )
    __fastfail(3u);
  *v4 = result;
  v4[1] = a2;
  *(_QWORD *)(result + 8) = v4;
  *a2 = (__int64)v4;
  return result;
}
