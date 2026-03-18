/*
 * XREFs of CKeyboardSensor_Destroy @ 0x1C00B3A80
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C00B3A10 (--_GCHidInput@@UEAAPEAXI@Z.c)
 */

CHidInput *CKeyboardSensor_Destroy()
{
  CHidInput *result; // rax

  if ( gpKeyboardSensor )
  {
    result = CHidInput::`scalar deleting destructor'(gpKeyboardSensor, 1);
    gpKeyboardSensor = 0LL;
  }
  return result;
}
