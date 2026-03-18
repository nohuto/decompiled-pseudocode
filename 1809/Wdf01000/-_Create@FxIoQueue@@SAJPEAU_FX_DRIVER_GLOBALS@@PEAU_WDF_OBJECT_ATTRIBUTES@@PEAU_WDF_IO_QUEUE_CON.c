/*
 * XREFs of ?_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CONFIG@@PEAVFxDriver@@PEAVFxPkgIo@@EPEAPEAV1@@Z @ 0x1C0079AE8
 * Callers:
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0076FF8 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z @ 0x1C0077B3C (--0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z.c)
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C00789F4 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 */

__int64 __fastcall FxIoQueue::_Create(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_IO_QUEUE_CONFIG *Config,
        FxDriver *Caller,
        FxPkgIo *PkgIo,
        unsigned __int8 InitialPowerStateOn,
        FxIoQueue **Object)
{
  _POOL_TYPE v10; // edx
  FxIoQueue *v12; // rax
  FxIoQueue *v13; // rax
  FxIoQueue *v14; // rbx
  int _a1; // eax
  unsigned int v17; // edi

  v10 = ExDefaultNonPagedPoolType;
  *Object = 0LL;
  v12 = (FxIoQueue *)FxObjectHandleAlloc(DriverGlobals, v10, 0x3A8uLL, 0, Attributes, 0, FxObjectTypeExternal);
  if ( v12 )
  {
    FxIoQueue::FxIoQueue(v12, DriverGlobals, PkgIo);
    v14 = v13;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    _a1 = FxIoQueue::Initialize(v14, Config, Attributes, Caller, InitialPowerStateOn);
    v17 = _a1;
    if ( _a1 >= 0 )
    {
      *Object = v14;
    }
    else
    {
      WPP_IFR_SF_d(DriverGlobals, 2u, 0xDu, 0xBu, WPP_FxIoQueue_cpp_Traceguids, _a1);
      FxObject::ClearEvtCallbacks(v14);
      v14->DeleteObject(v14);
    }
    return v17;
  }
  else
  {
    WPP_IFR_SF_d(DriverGlobals, 2u, 0xDu, 0xAu, WPP_FxIoQueue_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
