/*
 * XREFs of imp_WdfDeviceRetrieveCompanionTarget @ 0x1C004A730
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceRetrieveCompanionTarget(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFCOMPANIONTARGET__ **CompanionTarget)
{
  FxPkgPnp *m_PkgPnp; // rdx
  __int64 result; // rax
  FxCompanionTarget *m_CompanionTarget; // rcx
  unsigned __int16 m_ObjectSize; // ax
  WDFCOMPANIONTARGET__ *v8; // rcx
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( !m_PkgPnp )
    return 3221225488LL;
  result = (unsigned int)m_PkgPnp->m_CompanionTargetStatus;
  if ( (int)result >= 0 )
  {
    m_CompanionTarget = m_PkgPnp->m_CompanionTarget;
    m_ObjectSize = m_CompanionTarget->m_ObjectSize;
    v8 = (WDFCOMPANIONTARGET__ *)((unsigned __int64)m_CompanionTarget ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v8 = 0LL;
    *CompanionTarget = v8;
    return (unsigned int)m_PkgPnp->m_CompanionTargetStatus;
  }
  return result;
}
