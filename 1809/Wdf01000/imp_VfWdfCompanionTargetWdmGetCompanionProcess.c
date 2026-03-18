/*
 * XREFs of imp_VfWdfCompanionTargetWdmGetCompanionProcess @ 0x1C00BB4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _EPROCESS *__fastcall imp_VfWdfCompanionTargetWdmGetCompanionProcess(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMPANIONTARGET__ *CompanionTarget)
{
  return WdfVersion.Functions.pfnWdfCompanionTargetWdmGetCompanionProcess(DriverGlobals, CompanionTarget);
}
