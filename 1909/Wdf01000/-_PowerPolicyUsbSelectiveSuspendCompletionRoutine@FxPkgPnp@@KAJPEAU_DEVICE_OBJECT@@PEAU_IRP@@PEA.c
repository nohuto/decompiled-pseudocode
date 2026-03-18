/*
 * XREFs of ?_PowerPolicyUsbSelectiveSuspendCompletionRoutine@FxPkgPnp@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C008CA70
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011470 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C002FD20 (WPP_IFR_SF_qqqd.c)
 */

__int64 __fastcall FxPkgPnp::_PowerPolicyUsbSelectiveSuspendCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        FxPkgPnp *Context)
{
  unsigned __int8 v4; // r8

  WPP_IFR_SF_qqqd(
    Context->m_Globals,
    4u,
    0xCu,
    0x2Du,
    WPP_PowerPolicyStateMachine_cpp_Traceguids,
    Context->m_DeviceBase,
    Context->m_DeviceBase->m_DeviceObject.m_DeviceObject,
    (__int64)Irp,
    Irp->IoStatus.Status);
  FxPkgPnp::PowerPolicyProcessEvent(Context, PwrPolUsbSelectiveSuspendCompleted, v4);
  return 3221225494LL;
}
