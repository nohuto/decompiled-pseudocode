/*
 * XREFs of CMouseSensor_Destroy @ 0x1C00B3A50
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C00B3A10 (--_GCHidInput@@UEAAPEAXI@Z.c)
 */

CHidInput *CMouseSensor_Destroy()
{
  CHidInput *result; // rax

  if ( gpMouseSensor )
  {
    result = CHidInput::`scalar deleting destructor'(gpMouseSensor, 1);
    gpMouseSensor = 0LL;
  }
  return result;
}
