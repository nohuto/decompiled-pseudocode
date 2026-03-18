/*
 * XREFs of LpcInitSystem @ 0x1409D9D94
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     AlpcpInitSystem @ 0x14075D2AC (AlpcpInitSystem.c)
 */

char LpcInitSystem()
{
  LpcLegacyMaxMessageLength = 648;
  if ( (int)AlpcpInitSystem() < 0 )
    return 0;
  LpcPortObjectType = AlpcPortObjectType;
  LpcWaitablePortObjectType = (__int64)AlpcPortObjectType;
  return 1;
}
