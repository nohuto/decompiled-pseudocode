/*
 * XREFs of Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00C5B08
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00124F0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C002F9E8 (WPP_IFR_SF_dd.c)
 *     ?GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z @ 0x1C0047D98 (-GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z.c)
 *     WPP_IFR_SF_qqcDq @ 0x1C0048158 (WPP_IFR_SF_qqcDq.c)
 *     WPP_IFR_SF_qqcDqd @ 0x1C0048294 (WPP_IFR_SF_qqcDqd.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C0079690 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 */

__int64 __fastcall Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *device,
        _IRP *Irp,
        FxIoQueue *queue,
        int Flags)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int _a2; // r14d
  unsigned __int8 MajorFunction; // r15
  unsigned int level; // r12d
  const void *flags; // rsi
  const void *v14; // rcx
  unsigned __int8 v15; // dl
  unsigned int v16; // r8d
  const void *v17; // r9
  unsigned __int16 m_ObjectSize; // ax
  const void *v19; // rbp
  unsigned __int16 v20; // r9
  const void *v21; // r9
  const _GUID *v22; // r10
  unsigned __int16 v23; // ax
  FxDevice *m_ParentDevice; // rax
  FxDevice *m_Device; // rcx
  unsigned __int16 v26; // r9
  FxPkgPnp *m_PkgPnp; // rax
  unsigned __int16 v28; // ax
  const void *_a1; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  _a2 = 0;
  MajorFunction = CurrentStackLocation->MajorFunction;
  level = CurrentStackLocation->MinorFunction;
  flags = (const void *)((unsigned __int64)device ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( FxDriverGlobals->FxVerboseOn )
  {
    v14 = (const void *)((unsigned __int64)device ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !device->m_ObjectSize )
      v14 = 0LL;
    WPP_IFR_SF_qqcDq(
      FxDriverGlobals,
      (unsigned __int8)device,
      (unsigned int)Irp,
      0x3Fu,
      WPP_FxDeviceApi_cpp_Traceguids,
      v14,
      device->m_DeviceObject.m_DeviceObject,
      MajorFunction,
      level,
      Irp);
  }
  if ( (Flags & 0xFFFFFFFC) != 0 )
  {
    _a2 = -1073741811;
    WPP_IFR_SF_dd(FxDriverGlobals, 2u, 0xDu, 0x40u, WPP_FxDeviceApi_cpp_Traceguids, Flags, -1073741811);
LABEL_35:
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return _a2;
  }
  if ( FxDevice::GetDispatchPackage(device, MajorFunction) != (FxDefaultIrpHandler *)device->m_PkgIo )
  {
    _a2 = -1073741811;
    m_ObjectSize = queue->m_ObjectSize;
    if ( device->m_ObjectSize <= (unsigned __int16)v17 )
      flags = v17;
    v19 = (const void *)((unsigned __int64)queue ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v19 = v17;
    v20 = 65;
LABEL_13:
    WPP_IFR_SF_qqcDqd(FxDriverGlobals, v15, v16, v20, traceGuid, v19, Irp, MajorFunction, level, flags);
    goto LABEL_35;
  }
  if ( !FxIoQueue::IsIoEventHandlerRegistered(queue, (_WDF_REQUEST_TYPE)MajorFunction) )
  {
    _a2 = -1073741811;
    v23 = queue->m_ObjectSize;
    if ( device->m_ObjectSize <= (unsigned __int16)v21 )
      flags = v21;
    v19 = (const void *)((unsigned __int64)queue ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v23 )
      v19 = v21;
    v20 = 66;
    goto LABEL_13;
  }
  m_ParentDevice = device->m_ParentDevice;
  m_Device = queue->m_Device;
  if ( m_ParentDevice == m_Device )
  {
    if ( !m_ParentDevice )
    {
      _a2 = -1073741811;
      if ( device->m_ObjectSize <= (unsigned __int16)v21 )
        flags = v21;
      v26 = 67;
LABEL_25:
      WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0xDu, v26, v22, flags, _a2);
      goto LABEL_35;
    }
    m_PkgPnp = device->m_PkgPnp;
    if ( m_PkgPnp && BYTE3(m_PkgPnp[1].m_DisposeSingleEntry.Next) == (_BYTE)v21 )
    {
      _a2 = -1073741808;
      if ( device->m_ObjectSize <= (unsigned __int16)v21 )
        flags = v21;
      v26 = 68;
      goto LABEL_25;
    }
  }
  else if ( device != m_Device )
  {
    _a2 = -1073741811;
    v28 = m_Device->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_Device ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v28 )
      _a1 = v21;
    WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0xDu, 0x45u, v22, _a1, 0xC000000D);
    goto LABEL_35;
  }
  return _a2;
}
