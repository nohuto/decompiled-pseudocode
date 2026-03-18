/*
 * XREFs of CMouseSensor_Destroy @ 0x1C00B57E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C00B5810 (--_GCHidInput@@UEAAPEAXI@Z.c)
 */

void *CMouseSensor_Destroy()
{
  void *result; // rax

  if ( gpMouseSensor )
  {
    result = CHidInput::`scalar deleting destructor'(gpMouseSensor, 1u);
    gpMouseSensor = 0LL;
  }
  return result;
}
