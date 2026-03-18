/*
 * XREFs of ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0006AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0006B40 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     WPP_IFR_SF_qqcDq @ 0x1C0048158 (WPP_IFR_SF_qqcDq.c)
 */

int __fastcall FxPkgIo::Dispatch(FxPkgIo *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // r11
  const void *_a3; // r8

  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C00AEE88.m_DriverUsage->FxDriverGlobals
                                    + stru_1C00AEE88.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    m_Globals = this->m_Globals;
  }
  if ( m_Globals->FxVerboseOn )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a3 = 0LL;
    WPP_IFR_SF_qqcDq(
      m_Globals,
      Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
      (unsigned int)_a3,
      0xCu,
      WPP_FxPkgIo_cpp_Traceguids,
      _a3,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
      Irp);
  }
  return FxPkgIo::DispatchStep1(this, Irp, this->m_DynamicDispatchInfoListHead.Flink);
}
