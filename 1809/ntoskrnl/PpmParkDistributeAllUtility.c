/*
 * XREFs of PpmParkDistributeAllUtility @ 0x140103710
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkDistributeUtility @ 0x1401037A0 (PpmParkDistributeUtility.c)
 */

char PpmParkDistributeAllUtility()
{
  char v0; // di
  unsigned int i; // ebx

  v0 = BYTE3(PpmCurrentProfile[341 * dword_14041918C + 20]) != 0;
  for ( i = 0; i < PpmParkNumNodes; ++i )
    PpmParkDistributeUtility(
      *(_QWORD *)(PpmParkNodes + 264LL * i + 8),
      *(_QWORD *)(PpmParkNodes + 264LL * i + 32),
      *(unsigned __int16 *)(PpmParkNodes + 264LL * i + 4),
      *(_BYTE *)(PpmParkNodes + 264LL * i + 134),
      v0,
      0,
      0LL);
  return 1;
}
