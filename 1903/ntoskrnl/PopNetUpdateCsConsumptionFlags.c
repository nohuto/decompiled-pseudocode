/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x1407849D8
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x140784710 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x1408ABC54 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_140467E48 )
  {
    if ( (byte_140467F11 & 1) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      byte_140467F11 = (PopNetCompliantNicCount != 0) | byte_140467F11 & 0xFE;
    }
  }
  return result;
}
