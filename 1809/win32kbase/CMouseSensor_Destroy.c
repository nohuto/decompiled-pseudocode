/*
 * XREFs of CMouseSensor_Destroy @ 0x1C0005FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_ECMouseSensor@@UEAAPEAXI@Z @ 0x1C0007600 (--_ECMouseSensor@@UEAAPEAXI@Z.c)
 */

void *CMouseSensor_Destroy()
{
  void *result; // rax

  if ( WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
  {
    result = CMouseSensor::`vector deleting destructor'((CMouseSensor *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp, 1u);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  }
  return result;
}
