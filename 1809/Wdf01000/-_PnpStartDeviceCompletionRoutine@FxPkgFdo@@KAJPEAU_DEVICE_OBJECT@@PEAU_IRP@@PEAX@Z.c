/*
 * XREFs of ?_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0087790
 * Callers:
 *     ?_PnpFilteredStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00875D0 (-_PnpFilteredStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007E428 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0082B00 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z @ 0x1C0085470 (-SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z.c)
 */

__int64 __fastcall FxPkgFdo::_PnpStartDeviceCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        FxPkgPnp *Context)
{
  int _a1; // eax
  unsigned __int8 v6; // r8
  KIRQL v7; // bl
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r8
  FxIrp v11; // [rsp+48h] [rbp+10h] BYREF

  _a1 = Irp->IoStatus.Status;
  v11.m_Irp = Irp;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(Context->m_Globals, 2u, 0xCu, 0x18u, WPP_fxpkgfdo_cpp_Traceguids, _a1);
    FxPkgPnp::PnpProcessEvent(Context, PnpEventStartDeviceFailed, v9);
    FxPkgPnp::CompletePnpRequest(Context, &v11, Irp->IoStatus.Status);
  }
  else
  {
    FxPkgPnp::SetPendingPnpIrp(Context, &v11, 1u);
    if ( Context->m_PowerPolicyMachine.m_Owner )
    {
      v7 = KfRaiseIrql(2u);
      FxPkgPnp::PnpProcessEvent(Context, PnpEventStartDeviceComplete, v8);
      KeLowerIrql(v7);
    }
    else
    {
      FxPkgPnp::PnpProcessEvent(Context, PnpEventStartDeviceComplete, v6);
    }
  }
  return 3221225494LL;
}
