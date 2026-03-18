/*
 * XREFs of imp_WdfIoTargetCreate @ 0x1C00655D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C0069814 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 */

int __fastcall imp_WdfIoTargetCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_OBJECT_ATTRIBUTES *IoTargetAttributes,
        WDFIOTARGET__ **IoTarget)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  WDFIOTARGET__ *v9; // rcx
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxDeviceBase *pDevice; // [rsp+50h] [rbp+8h] BYREF
  FxIoTargetRemote *pTarget; // [rsp+68h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1030u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !IoTarget )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x13u, WPP_FxIoTargetAPI_cpp_Traceguids, Device);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
  {
    result = FxValidateObjectAttributes(m_Globals, IoTargetAttributes, 0);
    if ( result >= 0 )
    {
      result = FxIoTargetRemote::_Create(m_Globals, IoTargetAttributes, pDevice, &pTarget);
      if ( result >= 0 )
      {
        if ( pTarget->m_ObjectSize )
          v9 = (WDFIOTARGET__ *)((unsigned __int64)pTarget ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v9 = 0LL;
        *IoTarget = v9;
      }
    }
  }
  return result;
}
