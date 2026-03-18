/*
 * XREFs of ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C003768C
 * Callers:
 *     imp_WdfDmaTransactionCreate @ 0x1C0031E60 (imp_WdfDmaTransactionCreate.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013F08 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C00311F8 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ??0FxDmaScatterGatherTransaction@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxDmaEnabler@@@Z @ 0x1C0036C98 (--0FxDmaScatterGatherTransaction@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxDmaEnabler@@@Z.c)
 *     FxAllocateFromNPagedLookasideList @ 0x1C003784C (FxAllocateFromNPagedLookasideList.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDmaEnabler *DmaEnabler,
        WDFDMATRANSACTION__ **Transaction)
{
  $FD12C6E5D97FBF1457EB8C1089047E2C *DmaDescription; // rax
  unsigned __int16 v9; // bx
  unsigned __int16 ExtraSize; // r10
  FxDmaScatterGatherTransaction *v11; // r10
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // edi
  unsigned __int64 v15; // rdx
  void *v16; // rax
  const void *v17; // rcx
  void *hTransaction; // [rsp+40h] [rbp-28h] BYREF

  DmaDescription = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
  v9 = 128;
  ExtraSize = 128;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
    ExtraSize = 0;
  if ( FxObjectHandleAlloc(
         FxDriverGlobals,
         ExDefaultNonPagedPoolType,
         0x118uLL,
         0,
         Attributes,
         ExtraSize,
         FxObjectTypeExternal) )
  {
    if ( FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
      v9 = 0;
    FxDmaScatterGatherTransaction::FxDmaScatterGatherTransaction(v11, FxDriverGlobals, v9, DmaEnabler);
    v13 = v12;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    v14 = FxObject::Commit((FxObject *)v13, (_FX_DRIVER_GLOBALS *)Attributes, &hTransaction, DmaEnabler, 1u);
    if ( (v14 & 0x80000000) == 0 )
    {
      if ( (*((_BYTE *)DmaEnabler + 380) & 0x20) != 0 )
      {
        v16 = FxAllocateFromNPagedLookasideList(&DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside, v15);
        *(_QWORD *)(v13 + 264) = v16;
        if ( !v16 )
        {
          v14 = -1073741670;
          v17 = (const void *)(v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(v13 + 10) )
            v17 = 0LL;
          WPP_IFR_SF_qL(
            FxDriverGlobals,
            2u,
            0xFu,
            0xBu,
            WPP_FxDmaTransactionScatterGather_cpp_Traceguids,
            v17,
            0xC000009A);
          goto LABEL_16;
        }
        FxObject::AddRef(
          DmaEnabler,
          (void *)v13,
          96,
          "minkernel\\wdf\\framework\\kmdf\\src\\dma\\base\\fxdmatransactionscattergather.cpp");
        *(_DWORD *)(v13 + 272) = DmaEnabler->m_SGListSize;
        *(_BYTE *)(v13 + 276) = 1;
      }
      *Transaction = (WDFDMATRANSACTION__ *)hTransaction;
      return v14;
    }
LABEL_16:
    FxObject::ClearEvtCallbacks((FxObject *)v13);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13);
    return v14;
  }
  v14 = -1073741670;
  WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xFu, 0xAu, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, -1073741670);
  return v14;
}
