/*
 * XREFs of PpmParkSnapNodeStatistics @ 0x1400BD654
 * Callers:
 *     PpmCheckSnapAllUtility @ 0x1400BD3D0 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     PpmIdleSnapConcurrency @ 0x1400BD6F0 (PpmIdleSnapConcurrency.c)
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
    v1 = PpmParkNodes + 272LL * i;
    if ( *(_BYTE *)(v1 + 6) )
    {
      PpmIdleSnapConcurrency(*(PKSPIN_LOCK *)(v1 + 72));
      if ( *(_BYTE *)(v1 + 6) != *(_BYTE *)(v1 + 128) )
      {
        v3 = (PKSPIN_LOCK *)(v1 + 152);
        v4 = 2LL;
        v5 = v1 + 168;
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
