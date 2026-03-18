/*
 * XREFs of imp_WdfIoTargetSelfAssignDefaultIoQueue @ 0x1C0066160
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qqqqd @ 0x1C004DBC8 (WPP_IFR_SF_qqqqd.c)
 */

__int64 __fastcall imp_WdfIoTargetSelfAssignDefaultIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFQUEUE__ *Queue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxDeviceBase *m_DeviceBase; // rbx
  FxDeviceBase *v7; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a5; // rbx
  bool v10; // zf
  unsigned __int16 v11; // ax
  const void *_a3; // rdx
  unsigned __int16 v14; // r9
  unsigned __int16 v15; // ax
  const void *v16; // rbx
  FxIoQueue *pFxIoQueue; // [rsp+70h] [rbp+8h] BYREF
  FxIoTargetSelf *pTargetSelf; // [rsp+88h] [rbp+20h] BYREF

  pFxIoQueue = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)IoTarget,
    0x1205u,
    (void **)&pTargetSelf);
  m_Globals = pTargetSelf->m_Globals;
  m_DeviceBase = pTargetSelf->m_DeviceBase;
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Queue, 0x1003u, (void **)&pFxIoQueue);
  v7 = pFxIoQueue->m_DeviceBase;
  if ( m_DeviceBase != v7 )
  {
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a5 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    v10 = m_ObjectSize == 0;
    v11 = v7->m_ObjectSize;
    if ( v10 )
      _a5 = 0LL;
    _a3 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11 )
      _a3 = 0LL;
    WPP_IFR_SF_qqqqd(
      m_Globals,
      (unsigned __int8)WPP_FxIoTargetAPI_cpp_Traceguids,
      0xDu,
      0x3Au,
      WPP_FxIoTargetAPI_cpp_Traceguids,
      Queue,
      _a3,
      IoTarget,
      _a5,
      -1073741808);
    return 3221225488LL;
  }
  if ( !BYTE5(m_DeviceBase[1].m_Globals) )
  {
    if ( LODWORD(m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) != 261 )
    {
      v14 = 60;
      goto LABEL_10;
    }
LABEL_15:
    pTargetSelf->m_DispatchQueue = pFxIoQueue;
    return 0LL;
  }
  if ( (m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags & 0x80u) != 0 )
    goto LABEL_15;
  v14 = 59;
LABEL_10:
  v15 = m_DeviceBase->m_ObjectSize;
  v16 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v15 )
    v16 = 0LL;
  WPP_IFR_SF_qL(m_Globals, 2u, 0xCu, v14, WPP_FxIoTargetAPI_cpp_Traceguids, v16, 0xC0000184);
  return 3221225860LL;
}
