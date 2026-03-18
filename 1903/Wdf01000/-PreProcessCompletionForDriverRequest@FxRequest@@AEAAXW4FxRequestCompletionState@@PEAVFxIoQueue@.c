/*
 * XREFs of ?PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C00505B4
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008280 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013DAC (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?PreRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C005061C (-PreRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 */

void __fastcall FxRequest::PreProcessCompletionForDriverRequest(
        FxRequest *this,
        FxRequestCompletionState State,
        FxIoQueue *Queue)
{
  if ( State == FxRequestCompletionStateQueue )
  {
    FxIoQueue::PreRequestCompletedCallback(Queue, this);
  }
  else if ( Queue )
  {
    FxObject::AddRef(this, (void *)0x706D6F43, 995, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
  }
  this->Release(this, (void *)1129464644, 1001, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
}
