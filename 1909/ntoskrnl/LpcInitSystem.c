/*
 * XREFs of LpcInitSystem @ 0x140A1D354
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     AlpcpInitSystem @ 0x140785DDC (AlpcpInitSystem.c)
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
