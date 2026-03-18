/*
 * XREFs of ?PowerWakingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000D0E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C000D1A0 (-Connect@FxInterrupt@@QEAAJK@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x1C006CF68 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingConnectInterrupt(FxPkgPnp *This)
{
  _LIST_ENTRY *p_m_InterruptListHead; // r14
  _LIST_ENTRY *i; // rbx
  signed int _a2; // ebp
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  unsigned __int16 m_ObjectSize; // r8
  int globals; // r8d
  _LIST_ENTRY **p_Blink; // rsi
  unsigned __int64 v11; // rcx
  __int16 v12; // ax
  const void *_a1; // rsi
  FxDeviceBase *v14; // r10
  const void *v15; // rdx

  p_m_InterruptListHead = &This->m_InterruptListHead;
  for ( i = This->m_InterruptListHead.Flink; ; i = i->Flink )
  {
    if ( i == p_m_InterruptListHead )
    {
      _a2 = 0;
      goto LABEL_4;
    }
    p_Blink = &i[-28].Blink;
    _a2 = FxInterrupt::Connect((FxInterrupt *)&i[-28].Blink, 8u);
    if ( _a2 < 0 )
      break;
  }
  v12 = *((_WORD *)p_Blink + 5);
  _a1 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v12 )
    _a1 = 0LL;
  WPP_IFR_SF_qL(This->m_Globals, 2u, 0xCu, 0x51u, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
LABEL_4:
  if ( _a2 >= 0 )
  {
    m_DeviceBase = This->m_DeviceBase;
    m_Method = This->m_DeviceD0EntryPostInterruptsEnabled.m_Method;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    if ( m_Method )
    {
      v11 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v11 = 0LL;
      globals = m_Method((WDFDEVICE__ *)v11, (_WDF_POWER_DEVICE_STATE)This->m_DevicePowerState);
    }
    else
    {
      globals = 0;
    }
    if ( globals >= 0 )
      return 825LL;
    v14 = This->m_DeviceBase;
    v15 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v14->m_ObjectSize )
      v15 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      (unsigned __int8)v15,
      0xCu,
      0x16u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v15,
      v14->m_DeviceObject.m_DeviceObject,
      This->m_DevicePowerState,
      globals);
  }
  return 823LL;
}
