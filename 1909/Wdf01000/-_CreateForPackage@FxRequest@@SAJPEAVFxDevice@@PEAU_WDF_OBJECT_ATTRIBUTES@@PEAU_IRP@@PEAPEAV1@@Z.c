/*
 * XREFs of ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C00509E0
 * Callers:
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0077848 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1C0078680 (-AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ??0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@G@Z @ 0x1C0009A10 (--0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstru.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C0012C00 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0052F94 (-AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequest::_CreateForPackage(
        FxDevice *Device,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        FxRequest **Request)
{
  FxRequest *RequestMemory; // rax
  FxRequest *v9; // rbx
  FxDevice *v11; // r9
  int _a1; // eax
  unsigned int v13; // esi

  *Request = 0LL;
  RequestMemory = (FxRequest *)FxDevice::AllocateRequestMemory(Device, RequestAttributes);
  v9 = RequestMemory;
  if ( RequestMemory )
  {
    FxRequest::FxRequest(RequestMemory, Device->m_Globals, Irp, FxRequestDoesNotOwnIrp, FxRequestConstructorCallerIsFx);
    v9->__vftable = (FxRequest_vtbl *)FxRequestFromLookaside::`vftable';
    v9->m_DeviceBase = Device->m_DeviceBase;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    if ( Irp )
      FxRequest::AssignMemoryBuffers(v9, Device->m_ReadWriteIoType);
    v11 = 0LL;
    if ( !Device->m_Globals->FxRequestParentOptimizationOn )
      v11 = Device;
    _a1 = FxObject::Commit(v9, (_FX_DRIVER_GLOBALS *)RequestAttributes, 0LL, v11, 0);
    v13 = _a1;
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(Device->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, _a1);
      FxObject::ClearEvtCallbacks(v9);
      ((void (*)(void))v9->DeleteObject)();
    }
    else
    {
      *Request = v9;
    }
    return v13;
  }
  else
  {
    WPP_IFR_SF_d(Device->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
