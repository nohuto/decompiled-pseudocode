/*
 * XREFs of LpcInitSystem @ 0x140A1D178
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     AlpcpInitSystem @ 0x140783A7C (AlpcpInitSystem.c)
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
