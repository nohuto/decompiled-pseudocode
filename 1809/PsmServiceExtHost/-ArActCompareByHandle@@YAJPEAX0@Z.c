/*
 * XREFs of ?ArActCompareByHandle@@YAJPEAX0@Z @ 0x18006FD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ArActCompareByHandle(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r8

  v2 = a2[5];
  if ( *a1 >= v2 )
    return *a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
