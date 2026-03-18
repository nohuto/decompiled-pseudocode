/*
 * XREFs of imp_WdfDeviceSetDeviceInterfaceState @ 0x1C005FB00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000BA00 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C001598C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxIsEqualGuid @ 0x1C003AEB0 (FxIsEqualGuid.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceSetDeviceInterfaceState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *RefString,
        BOOLEAN State)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _FX_DRIVER_GLOBALS *v9; // rdx
  FxPkgPnp *m_PkgPnp; // rbx
  _SINGLE_LIST_ENTRY *i; // rdi
  BOOLEAN v12; // dl
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !InterfaceClassGUID )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( (int)FxVerifierCheckIrqlLevel(m_Globals, 0) < 0
    || RefString && (int)FxValidateUnicodeString(m_Globals, RefString) < 0 )
  {
    goto LABEL_8;
  }
  if ( pDevice->m_Legacy )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 2u, 0xDu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device);
LABEL_8:
    FxVerifierDbgBreakPoint(m_Globals);
    return;
  }
  m_PkgPnp = pDevice->m_PkgPnp;
  FxWaitLockInternal::AcquireLock(&m_PkgPnp->m_DeviceInterfaceLock, v9, 0LL);
  for ( i = m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = i->Next )
  {
    if ( FxIsEqualGuid((const _GUID *)&i[-6], InterfaceClassGUID) )
    {
      if ( RefString )
      {
        if ( RefString->Length == LOWORD(i[-4].Next)
          && RtlCompareMemory(RefString->Buffer, i[-3].Next, RefString->Length) == RefString->Length )
        {
LABEL_14:
          v12 = State;
          LOBYTE(i[1].Next) = State;
          if ( i[-1].Next )
            IoSetDeviceInterfaceState((PUNICODE_STRING)&i[-2], v12);
          break;
        }
      }
      else if ( !LOWORD(i[-4].Next) )
      {
        goto LABEL_14;
      }
    }
  }
  m_PkgPnp->m_DeviceInterfaceLock.m_OwningThread = 0LL;
  KeSetEvent(&m_PkgPnp->m_DeviceInterfaceLock.m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
