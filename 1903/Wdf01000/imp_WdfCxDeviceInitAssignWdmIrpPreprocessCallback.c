/*
 * XREFs of imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C004C6D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     memmove @ 0x1C001B400 (memmove.c)
 *     WPP_IFR_SF_dd @ 0x1C002F9E8 (WPP_IFR_SF_dd.c)
 *     ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x1C00453C4 (--0FxIrpPreprocessInfo@@QEAA@XZ.c)
 *     FxValiateCx @ 0x1C004C5D8 (FxValiateCx.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        int (__fastcall *EvtCxDeviceWdmIrpPreprocess)(WDFDEVICE__ *, _IRP *),
        unsigned __int8 MajorFunction,
        unsigned __int8 *MinorFunctions,
        unsigned int NumMinorFunctions)
{
  _FX_DRIVER_GLOBALS *DriverName; // rcx
  _FX_DRIVER_GLOBALS *ClientDriverGlobals; // rbx
  unsigned int v11; // edi
  FxIrpPreprocessInfo *v12; // rax
  unsigned __int16 v13; // r9
  unsigned __int8 *v14; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( !CxDeviceInit )
    FxVerifierNullBugCheck(DriverName, retaddr);
  ClientDriverGlobals = CxDeviceInit->ClientDriverGlobals;
  v11 = FxValiateCx(ClientDriverGlobals, DriverName);
  if ( (v11 & 0x80000000) == 0 )
  {
    if ( !EvtCxDeviceWdmIrpPreprocess )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( NumMinorFunctions && !MinorFunctions )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( MajorFunction >= 0x1Cu )
    {
      v11 = -1073741811;
      WPP_IFR_SF_dd(
        ClientDriverGlobals,
        2u,
        0x12u,
        0xBu,
        WPP_FxCxDeviceInitApi_cpp_Traceguids,
        MajorFunction,
        -1073741811);
      return v11;
    }
    if ( !CxDeviceInit->PreprocessInfo )
    {
      v12 = (FxIrpPreprocessInfo *)FxPoolAllocator(
                                     ClientDriverGlobals,
                                     &ClientDriverGlobals->FxPoolFrameworks,
                                     ExDefaultNonPagedPoolType,
                                     0x2B8uLL,
                                     ClientDriverGlobals->Tag,
                                     retaddr);
      if ( v12 )
        FxIrpPreprocessInfo::FxIrpPreprocessInfo(v12);
      CxDeviceInit->PreprocessInfo = v12;
      if ( !v12 )
      {
        v11 = -1073741670;
        v13 = 12;
LABEL_16:
        WPP_IFR_SF_d(ClientDriverGlobals, 2u, 0x12u, v13, WPP_FxCxDeviceInitApi_cpp_Traceguids, -1073741670);
        return v11;
      }
      v12->ClassExtension = 1;
    }
    if ( NumMinorFunctions )
    {
      if ( CxDeviceInit->PreprocessInfo->Dispatch[MajorFunction].NumMinorFunctions )
      {
        v11 = -1073741808;
        WPP_IFR_SF_d(ClientDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxCxDeviceInitApi_cpp_Traceguids, -1073741808);
        return v11;
      }
      CxDeviceInit->PreprocessInfo->Dispatch[MajorFunction].MinorFunctions = (unsigned __int8 *)FxPoolAllocator(
                                                                                                  ClientDriverGlobals,
                                                                                                  &ClientDriverGlobals->FxPoolFrameworks,
                                                                                                  ExDefaultNonPagedPoolType,
                                                                                                  NumMinorFunctions,
                                                                                                  ClientDriverGlobals->Tag,
                                                                                                  retaddr);
      v14 = CxDeviceInit->PreprocessInfo->Dispatch[MajorFunction].MinorFunctions;
      if ( !v14 )
      {
        v11 = -1073741670;
        v13 = 14;
        goto LABEL_16;
      }
      memmove(v14, MinorFunctions, NumMinorFunctions);
      CxDeviceInit->PreprocessInfo->Dispatch[MajorFunction].NumMinorFunctions = NumMinorFunctions;
    }
    v11 = 0;
    CxDeviceInit->PreprocessInfo->Dispatch[MajorFunction].EvtDevicePreprocess = EvtCxDeviceWdmIrpPreprocess;
  }
  return v11;
}
