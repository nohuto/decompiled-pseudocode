/*
 * XREFs of ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0014594
 * Callers:
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0014554 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013DAC (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C0014620 (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00147DC (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 */

void __fastcall FxRequest::PostProcessCompletion(FxRequest *this, FxRequestCompletionState State, FxIoQueue *Queue)
{
  if ( State )
  {
    if ( (State & 0x80u) == 0 )
      FxIoQueue::RequestCompletedCallback(Queue, this);
    FxObject::DeleteEarlyDisposedObject(this);
  }
  else
  {
    FxObject::AddRef(this, (void *)0x706D6F43, 925, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    this->DeleteObject(this);
  }
}
