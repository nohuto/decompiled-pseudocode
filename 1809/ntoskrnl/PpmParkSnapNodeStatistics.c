/*
 * XREFs of PpmParkSnapNodeStatistics @ 0x1401049D4
 * Callers:
 *     PpmCheckSnapAllUtility @ 0x140104750 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     PpmIdleSnapConcurrency @ 0x140104A60 (PpmIdleSnapConcurrency.c)
 */

__int64 PpmParkSnapNodeStatistics()
{
  unsigned __int16 i; // di
  __int64 v1; // rbx
  __int64 result; // rax
  PKSPIN_LOCK *v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rbx

  for ( i = 0; i < (unsigned int)PpmParkNumNodes; result = i )
  {
    v1 = PpmParkNodes + 264LL * i;
    if ( *(_BYTE *)(v1 + 6) )
    {
      PpmIdleSnapConcurrency(*(PKSPIN_LOCK *)(v1 + 64));
      if ( *(_BYTE *)(v1 + 6) != *(_BYTE *)(v1 + 120) )
      {
        v3 = (PKSPIN_LOCK *)(v1 + 144);
        v4 = 2LL;
        v5 = v1 + 160;
        do
        {
          PpmIdleSnapConcurrency(*v3);
          v5 += 48LL;
          ++v3;
          --v4;
        }
        while ( v4 );
      }
    }
    ++i;
  }
  return result;
}
