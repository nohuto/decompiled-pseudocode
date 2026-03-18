/*
 * XREFs of ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C004AF90
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0006010 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0006B40 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00092E0 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A2F0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00124F0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C00143F4 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C00787C4 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0079E74 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?_CreateCompletionRoutine2@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0092600 (-_CreateCompletionRoutine2@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008280 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C002FD20 (WPP_IFR_SF_qqqd.c)
 */

__int64 __fastcall FxRequest::Complete(FxRequest *this, unsigned int Status, __int64 a3, unsigned __int16 a4)
{
  FxDeviceBase *m_DeviceBase; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  char m_Globals_high; // bl
  const void *v9; // r8

  m_DeviceBase = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  m_Globals_high = 0;
  if ( m_Globals->FxVerboseOn )
  {
    v9 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v9 = 0LL;
    WPP_IFR_SF_qqqd(
      m_Globals,
      5u,
      0x10u,
      0xBu,
      WPP_FxRequest_hpp_Traceguids,
      v9,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->IoStatus.Information,
      Status);
  }
  if ( m_DeviceBase )
    m_Globals_high = HIBYTE(m_DeviceBase[1].m_Globals);
  this->m_PriorityBoost = m_Globals_high;
  return FxRequest::CompleteInternal(this, (_FX_DRIVER_GLOBALS *)Status, a3, a4);
}
