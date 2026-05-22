/*
 * XREFs of ?DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z @ 0x18002F9E8
 * Callers:
 *     ?OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18002FA90 (-OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z.c)
 *     ?OnDisconnected@SystemButtonEventController@@MEAAJXZ @ 0x18002FB90 (-OnDisconnected@SystemButtonEventController@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SystemButtonEventController::DeliverToNextTarget(
        SystemButtonEventController *this,
        const struct SystemButtonEventInfo *a2)
{
  SystemButtonEventController *v2; // rcx

  v2 = (SystemButtonEventController *)*((_QWORD *)this + 6);
  if ( v2 )
    SystemButtonEventController::SendSystemButtonEvent(v2, a2);
  else
    ISMStatics::GetSystemButtonEventControllerManager();
}
