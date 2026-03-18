/*
 * XREFs of ?AddIoTarget@FxDevice@@UEAAJPEAVFxIoTarget@@@Z @ 0x1C00534B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013F08 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C0064090 (-Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 */

__int64 __fastcall FxDevice::AddIoTarget(FxDevice *this, FxIoTarget *IoTarget)
{
  int v4; // edi

  v4 = FxTransactionedList::Add(&this->m_IoTargetsList, this->m_Globals, &IoTarget->m_TransactionedEntry);
  if ( v4 >= 0 )
  {
    IoTarget->m_AddedToDeviceList = 1;
    FxObject::AddRef(IoTarget, this, 1812, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
  }
  return (unsigned int)v4;
}
