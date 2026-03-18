/*
 * XREFs of ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C000EA30
 * Callers:
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C000D6C4 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0068470 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C00019F0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

__int64 __fastcall FxIoTarget::Submit(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        int Flags)
{
  unsigned int v8; // ebx
  unsigned __int8 v9; // r8
  unsigned __int8 irql[24]; // [rsp+20h] [rbp-18h] BYREF

  FxNonPagedObject::Lock(this, irql, (unsigned __int8)Options);
  v8 = FxIoTarget::SubmitLocked(this, Request, Options, Flags);
  FxNonPagedObject::Unlock(this, irql[0], v9);
  return v8;
}
