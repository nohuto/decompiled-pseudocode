/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x14075DC84
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x14075D9E0 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x14086F010 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_14043C388 )
  {
    if ( (byte_14043C451 & 1) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      byte_14043C451 = (PopNetCompliantNicCount != 0) | byte_14043C451 & 0xFE;
    }
  }
  return result;
}
