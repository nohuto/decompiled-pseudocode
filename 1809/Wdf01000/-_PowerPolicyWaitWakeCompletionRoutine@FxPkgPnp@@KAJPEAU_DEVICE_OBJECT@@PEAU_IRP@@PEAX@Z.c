/*
 * XREFs of ?_PowerPolicyWaitWakeCompletionRoutine@FxPkgPnp@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C008B4F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00308F8 (WPP_IFR_SF_qqqd.c)
 *     ?PowerPolicyUpdateSystemWakeSource@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z @ 0x1C008F160 (-PowerPolicyUpdateSystemWakeSource@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::_PowerPolicyWaitWakeCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *OriginalIrp,
        void *Context)
{
  unsigned int v3; // ebx
  __int64 v7; // r8
  __int16 v8; // ax
  const void *_a1; // r8
  _FX_DRIVER_GLOBALS *v10; // rcx
  _FX_DRIVER_GLOBALS *v11; // rcx
  FxIrp Irp; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  Irp.m_Irp = OriginalIrp;
  if ( OriginalIrp->PendingReturned )
    OriginalIrp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v7 = *((_QWORD *)Context + 12);
  v8 = *(_WORD *)(v7 + 10);
  _a1 = (const void *)(v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v8 )
    _a1 = 0LL;
  WPP_IFR_SF_qqqd(
    *((_FX_DRIVER_GLOBALS **)Context + 2),
    4u,
    0xCu,
    0x2Au,
    WPP_PowerPolicyStateMachine_cpp_Traceguids,
    _a1,
    DeviceObject,
    (__int64)OriginalIrp,
    OriginalIrp->IoStatus.Status);
  if ( OriginalIrp->IoStatus.Status >= 0 )
    FxPkgPnp::PowerPolicyUpdateSystemWakeSource((FxPkgPnp *)Context, &Irp);
  if ( *((_BYTE *)Context + 1208) )
  {
    PoSetSystemWake(OriginalIrp);
    OriginalIrp->IoStatus.Status = 0;
  }
  if ( _InterlockedExchange64((volatile __int64 *)Context + 113, 0LL)
    || _InterlockedExchange((volatile __int32 *)(*((_QWORD *)Context + 110) + 560LL), 1) == 1 )
  {
    v11 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)Context + 2);
    if ( v11->FxVerboseOn )
      WPP_IFR_SF_q(v11, 5u, 0xCu, 0x2Bu, WPP_PowerPolicyStateMachine_cpp_Traceguids, OriginalIrp);
    PoStartNextPowerIrp(OriginalIrp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], OriginalIrp, 0x20u);
  }
  else
  {
    v10 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)Context + 2);
    if ( v10->FxVerboseOn )
      WPP_IFR_SF_q(v10, 5u, 0xCu, 0x2Cu, WPP_PowerPolicyStateMachine_cpp_Traceguids, OriginalIrp);
    return (unsigned int)-1073741802;
  }
  return v3;
}
