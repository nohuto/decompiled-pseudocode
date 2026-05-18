/*
 * XREFs of sub_180083688 @ 0x180083688
 * Callers:
 *     sub_1800836F4 @ 0x1800836F4 (sub_1800836F4.c)
 *     sub_180084E84 @ 0x180084E84 (sub_180084E84.c)
 * Callees:
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 */

_QWORD *__fastcall sub_180083688(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax

  sub_180087340(a1);
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
      {
        *a2 = *(_QWORD *)(a1 + 128);
        a2[1] = *(_QWORD *)(a1 + 136);
        return a2;
      }
    }
  }
  return a2;
}
