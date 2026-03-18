/*
 * XREFs of imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C004D010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C00305C0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x1C003B494 (WPP_IFR_SF_D.c)
 *     FxValiateCx @ 0x1C004CCF8 (FxValiateCx.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfCxDeviceInitSetFileObjectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDFCX_FILEOBJECT_CONFIG *CxFileObjectConfig,
        _WDF_OBJECT_ATTRIBUTES *FileObjectAttributes)
{
  _FX_DRIVER_GLOBALS *DriverName; // rcx
  _FX_DRIVER_GLOBALS *ClientDriverGlobals; // rbx
  unsigned __int8 v9; // dl
  _WDF_TRI_STATE AutoForwardCleanupClose; // eax
  _WDF_FILEOBJECT_CLASS _a1; // ecx
  unsigned __int16 v12; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( !CxDeviceInit )
    FxVerifierNullBugCheck(DriverName, retaddr);
  ClientDriverGlobals = CxDeviceInit->ClientDriverGlobals;
  if ( (int)FxValiateCx(ClientDriverGlobals, DriverName) >= 0 )
  {
    if ( !CxFileObjectConfig )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( CxFileObjectConfig->Size != 40 )
    {
      WPP_IFR_SF_dd(
        ClientDriverGlobals,
        2u,
        0x12u,
        0xFu,
        WPP_FxCxDeviceInitApi_cpp_Traceguids,
        CxFileObjectConfig->Size,
        40);
LABEL_19:
      FxVerifierDbgBreakPoint(ClientDriverGlobals);
      return;
    }
    if ( (int)FxValidateObjectAttributes(ClientDriverGlobals, FileObjectAttributes, 7) < 0 )
      goto LABEL_19;
    AutoForwardCleanupClose = CxFileObjectConfig->AutoForwardCleanupClose;
    if ( (unsigned int)AutoForwardCleanupClose > WdfUseDefault )
    {
      WPP_IFR_SF_D(ClientDriverGlobals, v9, 0x12u, 0x10u, WPP_FxCxDeviceInitApi_cpp_Traceguids, AutoForwardCleanupClose);
      goto LABEL_19;
    }
    CxDeviceInit->FileObject.Set = 1;
    CxDeviceInit->FileObject.AutoForwardCleanupClose = CxFileObjectConfig->AutoForwardCleanupClose;
    _a1 = CxFileObjectConfig->FileObjectClass;
    if ( (_a1 & 0x7FFFFFFFu) - 1 > 3 )
    {
      v12 = 17;
      goto LABEL_14;
    }
    if ( _a1 < WdfFileObjectInvalid && (_a1 & 0x7FFFFFFFu) < 2 )
    {
      v12 = 18;
LABEL_14:
      WPP_IFR_SF_d(ClientDriverGlobals, 2u, 0x12u, v12, WPP_FxCxDeviceInitApi_cpp_Traceguids, _a1);
      goto LABEL_19;
    }
    CxDeviceInit->FileObject.Class = _a1;
    *(_OWORD *)&CxDeviceInit->FileObject.Callbacks.Size = *(_OWORD *)&CxFileObjectConfig->Size;
    *(_OWORD *)&CxDeviceInit->FileObject.Callbacks.EvtFileClose = *(_OWORD *)&CxFileObjectConfig->EvtFileClose;
    *(_QWORD *)&CxDeviceInit->FileObject.Callbacks.AutoForwardCleanupClose = *(_QWORD *)&CxFileObjectConfig->AutoForwardCleanupClose;
    if ( FileObjectAttributes )
    {
      *(_OWORD *)&CxDeviceInit->FileObject.Attributes.Size = *(_OWORD *)&FileObjectAttributes->Size;
      *(_OWORD *)&CxDeviceInit->FileObject.Attributes.EvtDestroyCallback = *(_OWORD *)&FileObjectAttributes->EvtDestroyCallback;
      *(_OWORD *)&CxDeviceInit->FileObject.Attributes.ParentObject = *(_OWORD *)&FileObjectAttributes->ParentObject;
      CxDeviceInit->FileObject.Attributes.ContextTypeInfo = FileObjectAttributes->ContextTypeInfo;
    }
  }
}
