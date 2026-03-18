/*
 * XREFs of imp_WdfFdoQueryForInterface @ 0x1C003B6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C0051868 (-QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfFdoQueryForInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Fdo,
        const _GUID *InterfaceType,
        _INTERFACE *Interface,
        unsigned __int16 Size,
        unsigned __int16 Version,
        void *InterfaceSpecificData)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  FxQueryInterfaceParams params; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxDeviceBase *pDeviceBase; // [rsp+70h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+80h] [rbp+18h] BYREF

  params.Object = (void **)&pDevice;
  *(_DWORD *)&params.Type = 4098;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Fdo,
    0x1030u,
    (void **)&pDeviceBase);
  m_Globals = pDeviceBase->m_Globals;
  pDevice = 0LL;
  if ( !InterfaceType )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !Interface )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
  {
    if ( pDeviceBase->QueryInterface(pDeviceBase, &params) < 0
      || !pDevice->m_Legacy && pDevice->m_PkgPnp->m_Type == 4353 )
    {
      return FxDeviceBase::QueryForInterface(
               pDeviceBase,
               InterfaceType,
               Interface,
               Size,
               Version,
               InterfaceSpecificData,
               0LL);
    }
    else
    {
      WPP_IFR_SF_qL(m_Globals, 2u, 0x12u, 0x10u, WPP_FxDeviceFdoAPI_cpp_Traceguids, Fdo, 0xC000000D);
      return -1073741811;
    }
  }
  return result;
}
