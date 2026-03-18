/*
 * XREFs of CKeyboardSensor_Destroy @ 0x1C012B0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCKeyboardSensor@@UEAAPEAXI@Z @ 0x1C012AEA0 (--_GCKeyboardSensor@@UEAAPEAXI@Z.c)
 */

CKeyboardSensor *CKeyboardSensor_Destroy()
{
  CKeyboardSensor *result; // rax

  if ( gpKeyboardSensor )
  {
    result = CKeyboardSensor::`scalar deleting destructor'(gpKeyboardSensor, 1LL);
    gpKeyboardSensor = 0LL;
  }
  return result;
}
