/*
 * XREFs of ?ForceReconnect@FxInterrupt@@QEAAJXZ @ 0x1C008D554
 * Callers:
 *     imp_WdfInterruptEnable @ 0x1C007B720 (imp_WdfInterruptEnable.c)
 * Callees:
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C000D1A0 (-Connect@FxInterrupt@@QEAAJK@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C0033E3C (WPP_IFR_SF_qqq.c)
 */

int __fastcall FxInterrupt::ForceReconnect(FxInterrupt *this)
{
  FxDeviceBase *m_DeviceBase; // r8
  unsigned int Flags; // ebx
  unsigned __int16 m_ObjectSize; // ax
  const void *v5; // rdx
  const void *v6; // r8
  bool v7; // zf
  struct _KINTERRUPT *m_Interrupt; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  m_DeviceBase = this->m_DeviceBase;
  Flags = m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    v5 = 0LL;
  v6 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  v7 = m_ObjectSize == 0;
  m_Interrupt = this->m_Interrupt;
  m_Globals = this->m_Globals;
  if ( v7 )
    v6 = 0LL;
  WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x1Bu, WPP_InterruptObject_cpp_Traceguids, v6, v5, m_Interrupt);
  this->m_ForceDisconnected = 0;
  return FxInterrupt::Connect(this, (Flags & 0x2000) == 0);
}
