/*
 * XREFs of ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C009345C
 * Callers:
 *     ?CreatePowerThread@FxPkgPnp@@IEAAJXZ @ 0x1C0082B80 (-CreatePowerThread@FxPkgPnp@@IEAAJXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxSystemThread@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0092F14 (--0FxSystemThread@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CreateThread@FxSystemThread@@AEAAJXZ @ 0x1C0093018 (-CreateThread@FxSystemThread@@AEAAJXZ.c)
 */

__int64 __fastcall FxSystemThread::_CreateAndInit(
        FxSystemThread **SystemThread,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *DeviceObject)
{
  FxSystemThread *v8; // rax
  unsigned __int8 v9; // r8
  FxSystemThread *v10; // rax
  FxSystemThread *v11; // rbx
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // r8
  unsigned __int8 PreviousIrql; // [rsp+60h] [rbp+8h] BYREF

  *SystemThread = 0LL;
  v8 = (FxSystemThread *)FxObjectHandleAlloc(
                           FxDriverGlobals,
                           ExDefaultNonPagedPoolType,
                           0x100uLL,
                           0,
                           0LL,
                           0,
                           FxObjectTypeInternal);
  if ( v8 )
  {
    FxSystemThread::FxSystemThread(v8, FxDriverGlobals);
    v11 = v10;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    FxNonPagedObject::Lock(v11, &PreviousIrql, v9);
    v13 = PreviousIrql;
    v11->m_Initialized = 1;
    FxNonPagedObject::Unlock(v11, v13, v14);
    if ( (int)FxSystemThread::CreateThread(v11) >= 0 )
    {
      *SystemThread = v11;
      return 0LL;
    }
    else
    {
      WPP_IFR_SF_qid(
        FxDriverGlobals,
        2u,
        0xCu,
        0xBu,
        WPP_FxSystemThread_cpp_Traceguids,
        Device,
        (__int64)DeviceObject,
        -1073741823);
      FxObject::ClearEvtCallbacks(v11);
      v11->DeleteObject(v11);
      return 3221225473LL;
    }
  }
  else
  {
    WPP_IFR_SF_qid(
      FxDriverGlobals,
      2u,
      0xCu,
      0xAu,
      WPP_FxSystemThread_cpp_Traceguids,
      Device,
      (__int64)DeviceObject,
      -1073741670);
    return 3221225626LL;
  }
}
