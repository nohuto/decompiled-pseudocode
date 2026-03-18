/*
 * XREFs of imp_WdfDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C0046130
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x1C0045CE8 (--0FxIrpPreprocessInfo@@QEAA@XZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceInitAssignWdmIrpPreprocessCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        int (__fastcall *EvtDeviceWdmIrpPreprocess)(WDFDEVICE__ *, _IRP *),
        unsigned __int8 MajorFunction,
        unsigned __int8 *MinorFunctions,
        unsigned int NumMinorFunctions)
{
  _FX_DRIVER_GLOBALS *v9; // rbx
  FxIrpPreprocessInfo *PreprocessInfo; // rcx
  FxIrpPreprocessInfo *v12; // rax
  FxIrpPreprocessInfo *v13; // rax
  unsigned __int16 v14; // r9
  unsigned __int8 *v15; // rcx
  void *Caller; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Caller);
  v9 = DeviceInit->DriverGlobals;
  if ( !EvtDeviceWdmIrpPreprocess )
    FxVerifierNullBugCheck(v9, Caller);
  if ( NumMinorFunctions && !MinorFunctions )
    FxVerifierNullBugCheck(v9, Caller);
  if ( MajorFunction >= 0x1Cu )
  {
    WPP_IFR_SF_(v9, 2u, 0x12u, 0x1Eu, WPP_FxDeviceInitApi_cpp_Traceguids);
    return 3221225485LL;
  }
  PreprocessInfo = DeviceInit->PreprocessInfo;
  if ( !PreprocessInfo )
  {
    v12 = (FxIrpPreprocessInfo *)FxPoolAllocator(
                                   v9,
                                   &v9->FxPoolFrameworks,
                                   ExDefaultNonPagedPoolType,
                                   0x2B8uLL,
                                   v9->Tag,
                                   Caller);
    if ( v12 )
    {
      FxIrpPreprocessInfo::FxIrpPreprocessInfo(v12);
      PreprocessInfo = v13;
    }
    else
    {
      PreprocessInfo = 0LL;
    }
    DeviceInit->PreprocessInfo = PreprocessInfo;
    if ( !PreprocessInfo )
    {
      v14 = 31;
LABEL_16:
      WPP_IFR_SF_(v9, 2u, 0x12u, v14, WPP_FxDeviceInitApi_cpp_Traceguids);
      return 3221225626LL;
    }
  }
  if ( NumMinorFunctions )
  {
    if ( PreprocessInfo->Dispatch[MajorFunction].NumMinorFunctions )
    {
      WPP_IFR_SF_(v9, 2u, 0x12u, 0x20u, WPP_FxDeviceInitApi_cpp_Traceguids);
      return 3221225488LL;
    }
    DeviceInit->PreprocessInfo->Dispatch[MajorFunction].MinorFunctions = (unsigned __int8 *)FxPoolAllocator(
                                                                                              v9,
                                                                                              &v9->FxPoolFrameworks,
                                                                                              ExDefaultNonPagedPoolType,
                                                                                              NumMinorFunctions,
                                                                                              v9->Tag,
                                                                                              Caller);
    v15 = DeviceInit->PreprocessInfo->Dispatch[MajorFunction].MinorFunctions;
    if ( !v15 )
    {
      v14 = 33;
      goto LABEL_16;
    }
    memmove(v15, MinorFunctions, NumMinorFunctions);
    DeviceInit->PreprocessInfo->Dispatch[MajorFunction].NumMinorFunctions = NumMinorFunctions;
    PreprocessInfo = DeviceInit->PreprocessInfo;
  }
  PreprocessInfo->Dispatch[MajorFunction].EvtDevicePreprocess = EvtDeviceWdmIrpPreprocess;
  return 0LL;
}
