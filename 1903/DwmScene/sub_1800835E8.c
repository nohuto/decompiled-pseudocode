/*
 * XREFs of sub_1800835E8 @ 0x1800835E8
 * Callers:
 *     sub_1800836F4 @ 0x1800836F4 (sub_1800836F4.c)
 *     sub_1800C1DD4 @ 0x1800C1DD4 (sub_1800C1DD4.c)
 * Callees:
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 */

_QWORD *__fastcall sub_1800835E8(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx

  sub_180087340(a1);
  v4 = *(_QWORD **)(a1 + 32);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v4 != *(_QWORD **)(a1 + 40) )
  {
    v5 = v4[1];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = v4[1];
    }
    *a2 = *v4;
    a2[1] = v5;
  }
  return a2;
}
