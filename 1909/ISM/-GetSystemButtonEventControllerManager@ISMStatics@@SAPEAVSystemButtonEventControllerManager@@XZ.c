/*
 * XREFs of ?GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ @ 0x18002E130
 * Callers:
 *     ?DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z @ 0x18002F9E8 (-DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z.c)
 *     ?OnConnected@SystemButtonEventController@@MEAAJXZ @ 0x18002FA00 (-OnConnected@SystemButtonEventController@@MEAAJXZ.c)
 *     ?OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18002FA90 (-OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z.c)
 *     ?OnDisconnected@SystemButtonEventController@@MEAAJXZ @ 0x18002FB90 (-OnDisconnected@SystemButtonEventController@@MEAAJXZ.c)
 *     ?OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180035BD0 (-OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRes.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 */

struct SystemButtonEventControllerManager *ISMStatics::GetSystemButtonEventControllerManager(void)
{
  struct SystemButtonEventControllerManager *result; // rax

  result = ISMStatics::s_systemButtonControllerManager;
  if ( !ISMStatics::s_systemButtonControllerManager )
  {
    result = (struct SystemButtonEventControllerManager *)operator new(0x10uLL);
    ISMStatics::s_systemButtonControllerManager = result;
    *(_QWORD *)result = 0LL;
    *((_QWORD *)result + 1) = 0LL;
  }
  return result;
}
