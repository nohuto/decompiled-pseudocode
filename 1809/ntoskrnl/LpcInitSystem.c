/*
 * XREFs of LpcInitSystem @ 0x1409DAD94
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     AlpcpInitSystem @ 0x14075E47C (AlpcpInitSystem.c)
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
