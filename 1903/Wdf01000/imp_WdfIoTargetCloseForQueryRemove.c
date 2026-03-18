/*
 * XREFs of imp_WdfIoTargetCloseForQueryRemove @ 0x1C0065BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0069364 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 */

void __fastcall imp_WdfIoTargetCloseForQueryRemove(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  FxIoTargetRemote *pTarget; // [rsp+40h] [rbp+8h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)IoTarget,
    0x1201u,
    (void **)&pTarget);
  if ( DriverName->FxVerboseOn )
    WPP_IFR_SF_q(DriverName, 5u, 0xEu, 0x17u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget);
  if ( (int)FxVerifierCheckIrqlLevel(DriverName, 0) >= 0 )
    FxIoTargetRemote::Close(pTarget, FxIoTargetRemoteCloseReasonQueryRemove);
}
