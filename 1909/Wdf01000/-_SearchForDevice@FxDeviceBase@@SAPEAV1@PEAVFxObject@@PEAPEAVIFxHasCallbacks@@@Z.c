/*
 * XREFs of ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C000DA90
 * Callers:
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C000DC48 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0013A60 (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C002FFE0 (imp_WdfDmaEnablerCreate.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C003B74C (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C004F07C (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C0069EA4 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0077638 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C008D718 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z @ 0x1C005C590 (-GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DDB8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

FxDeviceBase *__fastcall FxDeviceBase::_SearchForDevice(unsigned __int64 Object, IFxHasCallbacks **Callbacks)
{
  FxDeviceBase *v2; // rsi
  FxObject *v3; // rdi
  unsigned int v7; // ecx
  FxTagTracker *m_Lock; // rax
  const void *_a1; // rcx
  FxObject *ParentObjectReferenced; // rbx
  const void *_a2; // r8
  const void *v13; // r14
  FxQueryInterfaceParams cbParams; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(FxDeviceBase **)(Object + 96);
  cbParams.Object = (void **)Callbacks;
  v3 = (FxObject *)Object;
  cbParams.Type = 5379;
  *(_DWORD *)&cbParams.Offset = 0;
  *(&cbParams.Offset + 2) = 0;
  if ( v2 )
  {
    if ( Callbacks )
    {
      *Callbacks = 0LL;
      v7 = _InterlockedIncrement((volatile signed __int32 *)(Object + 12));
      if ( *(char *)(Object + 24) < 0 )
        m_Lock = (FxTagTracker *)v3[-1].m_SpinLock.m_Lock;
      else
        m_Lock = 0LL;
      if ( m_Lock )
        FxTagTracker::UpdateTagHistory(
          m_Lock,
          v3,
          254,
          "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp",
          TagAddRef,
          v7);
      do
      {
        if ( v3->QueryInterface(v3, &cbParams) >= 0 )
        {
          v3->Release(v3, (void *)Object, 266, "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
          return v2;
        }
        ParentObjectReferenced = FxObject::GetParentObjectReferenced(v3, (void *)Object);
        v3->Release(v3, (void *)Object, 276, "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
        v3 = ParentObjectReferenced;
      }
      while ( ParentObjectReferenced );
      if ( v2->QueryInterface(v2, &cbParams) < 0 )
      {
        _a2 = (const void *)((unsigned __int64)v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v2->m_ObjectSize )
          _a2 = 0LL;
        v13 = (const void *)(Object ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !*(_WORD *)(Object + 10) )
          v13 = 0LL;
        WPP_IFR_SF_qq(*(_FX_DRIVER_GLOBALS **)(Object + 16), 2u, 0x14u, 0xCu, WPP_FxDeviceBase_cpp_Traceguids, v13, _a2);
      }
    }
    return v2;
  }
  else
  {
    _a1 = (const void *)(Object ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v3->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(v3->m_Globals, 2u, 0x14u, 0xBu, WPP_FxDeviceBase_cpp_Traceguids, _a1);
    return 0LL;
  }
}
