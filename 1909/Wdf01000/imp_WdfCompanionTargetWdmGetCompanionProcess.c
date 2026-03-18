/*
 * XREFs of imp_WdfCompanionTargetWdmGetCompanionProcess @ 0x1C00438D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

struct _EPROCESS *__fastcall imp_WdfCompanionTargetWdmGetCompanionProcess(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMPANIONTARGET__ *CompanionTarget)
{
  FxCompanionTarget *pCompanionTarget; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)CompanionTarget,
    0x1038u,
    (void **)&pCompanionTarget);
  return pCompanionTarget->m_RdDeviceCompanion->GetCompanionProcess(pCompanionTarget->m_RdDeviceCompanion);
}
