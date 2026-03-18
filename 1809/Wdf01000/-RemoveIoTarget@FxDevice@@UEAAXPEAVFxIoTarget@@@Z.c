/*
 * XREFs of ?RemoveIoTarget@FxDevice@@UEAAXPEAVFxIoTarget@@@Z @ 0x1C00544A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C006417C (-Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 */

void __fastcall FxDevice::RemoveIoTarget(FxDevice *this, FxIoTarget *IoTarget)
{
  FxTransactionedList::Remove(&this->m_IoTargetsList, this->m_Globals, &IoTarget->m_TransactionedEntry);
  IoTarget->Release(IoTarget, this, 1829, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
}
