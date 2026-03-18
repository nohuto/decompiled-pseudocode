/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x14075DCA4
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x14075DA00 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x14086F030 (PopPdcCsDeviceNotification.c)
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
