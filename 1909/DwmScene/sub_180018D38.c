/*
 * XREFs of sub_180018D38 @ 0x180018D38
 * Callers:
 *     sub_1800C01E0 @ 0x1800C01E0 (sub_1800C01E0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180018D38(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  signed __int32 v3; // eax

  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 + 8);
      if ( !v3 )
        break;
      if ( v3 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3) )
      {
        *a2 = *(_QWORD *)(a1 + 56);
        a2[1] = *(_QWORD *)(a1 + 64);
        return a2;
      }
    }
  }
  return a2;
}
