/*
 * XREFs of EditionWakeInputThreadForPnp @ 0x1C0138CB0
 * Callers:
 *     <none>
 * Callees:
 *     WakeDIT @ 0x1C00BAAD8 (WakeDIT.c)
 */

__int64 __fastcall EditionWakeInputThreadForPnp(int a1)
{
  unsigned int v1; // ecx

  if ( _InterlockedCompareExchange(&glDitMouseHandling, 1, 1) )
  {
    if ( !a1 )
    {
      v1 = 8;
      return WakeDIT(v1);
    }
    if ( a1 == 1 )
    {
      v1 = 16;
      return WakeDIT(v1);
    }
  }
  return 0LL;
}
