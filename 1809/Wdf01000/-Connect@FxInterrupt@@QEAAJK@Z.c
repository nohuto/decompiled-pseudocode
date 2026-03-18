/*
 * XREFs of ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C0013398
 * Callers:
 *     ?PowerWakingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0013590 (-PowerWakingConnectInterrupt@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x1C0083A38 (-NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z.c)
 *     ?ForceReconnect@FxInterrupt@@QEAAJXZ @ 0x1C008BF14 (-ForceReconnect@FxInterrupt@@QEAAJXZ.c)
 * Callees:
 *     ?InterruptEnable@FxInterrupt@@AEAAJXZ @ 0x1C0013450 (-InterruptEnable@FxInterrupt@@AEAAJXZ.c)
 *     ?ConnectInternal@FxInterrupt@@QEAAJXZ @ 0x1C0013498 (-ConnectInternal@FxInterrupt@@QEAAJXZ.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00308F8 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qDDDDsdisd @ 0x1C008C9B8 (WPP_IFR_SF_qDDDDsdisd.c)
 *     ?ReportActive@FxInterrupt@@QEAAXE@Z @ 0x1C008CCE0 (-ReportActive@FxInterrupt@@QEAAXE@Z.c)
 */

int __fastcall FxInterrupt::Connect(FxInterrupt *this, char NotifyFlags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxWakeInterruptMachine *m_WakeInterruptMachine; // rax
  int id; // edi
  int result; // eax
  const char *_a10; // r11
  const char *flags; // r9
  FxDeviceBase *m_DeviceBase; // r8
  const void *v10; // rdx
  unsigned __int16 m_ObjectSize; // cx
  const void *v12; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]

  m_Globals = this->m_Globals;
  if ( (NotifyFlags & 8) != 0 )
  {
    m_WakeInterruptMachine = this->m_WakeInterruptMachine;
    if ( m_WakeInterruptMachine )
    {
      if ( m_WakeInterruptMachine->m_ActiveForWake )
      {
        m_WakeInterruptMachine->m_ActiveForWake = 0;
        return 0;
      }
    }
  }
  if ( this->m_UseSoftDisconnect
    && WPP_GLOBAL_WDF_Control.Dpc.ProcessorHistory
    && this->m_Interrupt
    && this->m_Connected
    && (NotifyFlags & 8) != 0 )
  {
    FxInterrupt::ReportActive(this, 1u);
    goto $Enable;
  }
  if ( this->m_ForceDisconnected || !this->m_InterruptInfo.Vector )
    return 0;
  if ( (NotifyFlags & 1) != 0 )
    goto $Enable;
  id = FxInterrupt::ConnectInternal(this);
  if ( id >= 0 )
  {
    this->m_Connected = 1;
    this->m_Active = 1;
$Enable:
    result = FxInterrupt::InterruptEnable(this);
    id = result;
    if ( result >= 0 )
    {
      this->m_Enabled = 1;
      return result;
    }
    m_DeviceBase = this->m_DeviceBase;
    v10 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    if ( !this->m_ObjectSize )
      v10 = 0LL;
    v12 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v12 = 0LL;
    WPP_IFR_SF_qqqd(
      m_Globals,
      2u,
      0xCu,
      0x18u,
      WPP_InterruptObject_cpp_Traceguids,
      v12,
      v10,
      (__int64)this->m_Interrupt,
      result);
    return id;
  }
  this->m_Interrupt = 0LL;
  _a10 = "True";
  flags = "True";
  if ( !this->m_FloatingSave )
    flags = "False";
  if ( this->m_InterruptInfo.ShareDisposition != 3 )
    _a10 = "False";
  WPP_IFR_SF_qDDDDsdisd(
    m_Globals,
    this->m_SynchronizeIrql,
    this->m_InterruptInfo.Irql,
    (unsigned __int16)flags,
    traceGuid,
    this->m_SpinLock,
    this->m_InterruptInfo.Vector,
    this->m_InterruptInfo.Irql,
    this->m_SynchronizeIrql,
    this->m_InterruptInfo.Mode,
    _a10,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.TargetProcessorSet,
    flags,
    id);
  return id;
}
