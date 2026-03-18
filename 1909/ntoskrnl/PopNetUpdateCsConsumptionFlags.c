/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x140786D38
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x140786A70 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x1408AB4B4 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_140467B88 )
  {
    if ( (byte_140467C51 & 1) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      byte_140467C51 = (PopNetCompliantNicCount != 0) | byte_140467C51 & 0xFE;
    }
  }
  return result;
}
