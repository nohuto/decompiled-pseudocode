/*
 * XREFs of CKeyboardSensor_Destroy @ 0x1C0005F10
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCKeyboardSensor@@UEAAPEAXI@Z @ 0x1C00075C0 (--_GCKeyboardSensor@@UEAAPEAXI@Z.c)
 */

void *CKeyboardSensor_Destroy()
{
  void *result; // rax

  if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
  {
    result = CKeyboardSensor::`scalar deleting destructor'((CKeyboardSensor *)WPP_MAIN_CB.Queue.Wcb.DeviceObject, 1u);
    WPP_MAIN_CB.Queue.Wcb.DeviceObject = 0LL;
  }
  return result;
}
