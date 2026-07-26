/*
 * XREFs of ndisMSetTimestampOnNblChainTx @ 0x1C007AC14
 * Callers:
 *     ndisMSendNBLToMiniportInternal @ 0x1C000DCC0 (ndisMSendNBLToMiniportInternal.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall ndisMSetTimestampOnNblChainTx(LARGE_INTEGER *a1, char a2)
{
  LARGE_INTEGER result; // rax
  bool v5; // dl

  result.QuadPart = 0LL;
  if ( !a2 )
    result = KeQueryPerformanceCounter(0LL);
  if ( a1 )
  {
    v5 = a2 == 0;
    while ( 1 )
    {
      if ( !a2 )
        goto LABEL_9;
      if ( (a1[16].LowPart & 0x10000) != 0 )
        break;
LABEL_10:
      a1 = (LARGE_INTEGER *)a1->QuadPart;
      if ( !a1 )
        return result;
    }
    if ( !v5 )
    {
      result = KeQueryPerformanceCounter(0LL);
      v5 = 1;
    }
LABEL_9:
    a1[44] = result;
    goto LABEL_10;
  }
  return result;
}
