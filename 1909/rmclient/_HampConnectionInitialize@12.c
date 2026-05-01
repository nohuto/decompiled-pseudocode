/*
 * XREFs of _HampConnectionInitialize@12 @ 0x1000B090
 * Callers:
 *     _HampConnectionCreate@20 @ 0x1000A120 (_HampConnectionCreate@20.c)
 *     _HamConnectForExtendedExecution@8 @ 0x1000B2B0 (_HamConnectForExtendedExecution@8.c)
 * Callees:
 *     _HamIpcChannelInitialize@16 @ 0x1000C1C3 (_HamIpcChannelInitialize@16.c)
 *     _memset @ 0x1000D154 (_memset.c)
 */

void *__fastcall HampConnectionInitialize(_DWORD *a1, int *a2, char *a3)
{
  void *result; // eax

  result = memset(a3, 0, 0x44u);
  if ( a1 )
  {
    *((_DWORD *)a3 + 14) = *a1;
    result = (void *)a1[1];
    *((_DWORD *)a3 + 15) = result;
  }
  if ( a2 == dword_100034E0 )
  {
    *((_DWORD *)a3 + 16) = 0;
    goto LABEL_6;
  }
  if ( a2 == dword_10003528 )
  {
    *((_DWORD *)a3 + 16) = 2;
LABEL_6:
    memset(a3 + 12, 0, 0x2Cu);
    *((_DWORD *)a3 + 7) = 0;
    *((_DWORD *)a3 + 8) = 0;
    RtlInitializeSRWLock(a3 + 16);
    result = a3 + 36;
    *((_DWORD *)a3 + 10) = a3 + 36;
    *((_DWORD *)a3 + 9) = a3 + 36;
    *((_DWORD *)a3 + 11) = HampConnectionDeliverPayload;
    *((_DWORD *)a3 + 12) = HampConnectionObjectCompareToObject;
    *((_DWORD *)a3 + 13) = HampConnectionObjectCompareToMessage;
    return result;
  }
  if ( a2 == dword_10003580 )
  {
    *((_DWORD *)a3 + 16) = 6;
    return result;
  }
  if ( a2 == dword_100035C8 )
  {
    *((_DWORD *)a3 + 16) = 1;
    return (void *)HamIpcChannelInitialize((int)HampConnectionObjectCompareToMessage, a3 + 12);
  }
  if ( a2 == dword_10003658 )
  {
    *((_DWORD *)a3 + 16) = 3;
    return (void *)HamIpcChannelInitialize((int)HampConnectionObjectCompareToMessage, a3 + 12);
  }
  if ( a2 == dword_10003610 )
  {
    *((_DWORD *)a3 + 16) = 4;
  }
  else if ( a2 == dword_100036A0 )
  {
    *((_DWORD *)a3 + 16) = 5;
  }
  else
  {
    *((_DWORD *)a3 + 16) = 7;
  }
  return result;
}
