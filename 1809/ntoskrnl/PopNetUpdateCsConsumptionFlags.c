/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x14075EE74
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x14075EBD0 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x140870270 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_14043D448 )
  {
    if ( (byte_14043D511 & 1) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      byte_14043D511 = (PopNetCompliantNicCount != 0) | byte_14043D511 & 0xFE;
    }
  }
  return result;
}
