/*
 * XREFs of WPP_IFR_SF_qDqD @ 0x1C005880C
 * Callers:
 *     imp_WdfObjectDelete @ 0x1C0002C50 (imp_WdfObjectDelete.c)
 *     imp_WdfMemoryCreate @ 0x1C00045F0 (imp_WdfMemoryCreate.c)
 *     FxIoTargetFormatIoctl @ 0x1C0004BF0 (FxIoTargetFormatIoctl.c)
 *     imp_WdfRequestCreate @ 0x1C0009C70 (imp_WdfRequestCreate.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     imp_WdfDeviceWdmGetDeviceObject @ 0x1C00163E0 (imp_WdfDeviceWdmGetDeviceObject.c)
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C0016490 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     imp_WdfMemoryGetBuffer @ 0x1C0017660 (imp_WdfMemoryGetBuffer.c)
 *     imp_WdfDeviceGetIoTarget @ 0x1C0017BB0 (imp_WdfDeviceGetIoTarget.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 * Callees:
 *     FxIFR @ 0x1C00040B0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C003AED8 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qDqD(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *globals_0,
        unsigned int level,
        const void *flags,
        unsigned int id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_HandleAPI_cpp_Traceguids,
      0xBu,
      &globals_0,
      8LL,
      &level,
      4LL,
      &flags,
      8LL,
      &id,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0x12u,
    WPP_HandleAPI_cpp_Traceguids,
    0xBu,
    &globals_0,
    8LL,
    &level,
    4LL,
    &flags,
    8LL,
    &id,
    4LL,
    0LL);
}
