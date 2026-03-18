/*
 * XREFs of ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0037E38
 * Callers:
 *     imp_WdfDmaTransactionCreate @ 0x1C0031E60 (imp_WdfDmaTransactionCreate.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C00311F8 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ??0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C0034BA4 (--0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxDmaSystemTransaction::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDmaEnabler *DmaEnabler,
        WDFDMATRANSACTION__ **Transaction)
{
  $FD12C6E5D97FBF1457EB8C1089047E2C *DmaDescription; // rax
  unsigned __int16 v9; // bp
  unsigned __int16 ExtraSize; // r10
  FxDmaPacketTransaction *v11; // rbx
  int v13; // edi
  void *hTransaction; // [rsp+40h] [rbp-28h] BYREF

  DmaDescription = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
  v9 = 128;
  ExtraSize = 128;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
    ExtraSize = 0;
  v11 = (FxDmaPacketTransaction *)FxObjectHandleAlloc(
                                    FxDriverGlobals,
                                    ExDefaultNonPagedPoolType,
                                    0x158uLL,
                                    0,
                                    Attributes,
                                    ExtraSize,
                                    FxObjectTypeExternal);
  if ( v11 )
  {
    if ( FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
      v9 = 0;
    FxDmaPacketTransaction::FxDmaPacketTransaction(v11, FxDriverGlobals, 0x158u, v9, DmaEnabler);
    v11->__vftable = (FxDmaPacketTransaction_vtbl *)FxDmaSystemTransaction::`vftable';
    v11[1].__vftable = 0LL;
    v11[1].m_Globals = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    v13 = FxObject::Commit(v11, (_FX_DRIVER_GLOBALS *)Attributes, &hTransaction, DmaEnabler, 1u);
    if ( v13 < 0 )
    {
      FxObject::ClearEvtCallbacks(v11);
      ((void (*)(void))v11->DeleteObject)();
    }
    else
    {
      *Transaction = (WDFDMATRANSACTION__ *)hTransaction;
    }
    return (unsigned int)v13;
  }
  else
  {
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xFu, 0xAu, WPP_FxDmaTransactionSystem_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
