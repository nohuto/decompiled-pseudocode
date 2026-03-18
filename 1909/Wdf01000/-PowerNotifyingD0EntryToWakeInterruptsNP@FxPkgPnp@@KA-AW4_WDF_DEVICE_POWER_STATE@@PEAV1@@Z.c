/*
 * XREFs of ?PowerNotifyingD0EntryToWakeInterruptsNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0081800
 * Callers:
 *     <none>
 * Callees:
 *     ?SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C00863E0 (-SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerNotifyingD0EntryToWakeInterruptsNP(FxPkgPnp *This)
{
  if ( !This->m_WakeInterruptCount )
    return 33590LL;
  FxPkgPnp::SendEventToAllWakeInterrupts(This, WakeInterruptEventEnteringD0);
  return 867LL;
}
