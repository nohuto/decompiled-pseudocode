/*
 * XREFs of imp_WdfIoResourceRequirementsListInsertIoResList @ 0x1C005F2A0
 * Callers:
 *     <none>
 * Callees:
 *     FxIoResourceRequirementsListInsertIoResList @ 0x1C005E8C8 (FxIoResourceRequirementsListInsertIoResList.c)
 */

int __fastcall imp_WdfIoResourceRequirementsListInsertIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList,
        unsigned int Index)
{
  return FxIoResourceRequirementsListInsertIoResList(DriverGlobals, RequirementsList, IoResList, Index);
}
