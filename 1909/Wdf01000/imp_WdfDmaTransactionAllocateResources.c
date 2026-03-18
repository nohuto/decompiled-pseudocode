/*
 * XREFs of imp_WdfDmaTransactionAllocateResources @ 0x1C0031090
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0030628 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C00308E0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C0034580 (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDmaTransactionAllocateResources(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned int DmaDirection,
        unsigned int RequiredMapRegisters,
        void (__fastcall *EvtReserveDmaFunction)(WDFDMATRANSACTION__ *, void *),
        void *EvtReserveDmaContext)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v10; // dl
  __int64 v11; // rcx
  FxDmaPacketTransaction *v12; // r10
  __int16 v13; // ax
  unsigned __int64 _a2; // rcx
  int v15; // ebx
  unsigned int v16; // eax
  int v17; // ecx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDmaPacketTransaction *pDmaTrans; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  m_Globals = pDmaTrans->m_Globals;
  if ( FxDmaEnabler::GetDmaDescription(pDmaTrans->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
  {
    v13 = *(_WORD *)(v11 + 10);
    _a2 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v15 = -1073741808;
    if ( !v13 )
      _a2 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xFu, 0x21u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2, -1073741808);
    goto LABEL_13;
  }
  v16 = *(_DWORD *)(v11 + 376);
  if ( v16 > 8 || (v17 = 394, !_bittest(&v17, v16)) )
  {
    v15 = -1073741808;
    WPP_IFR_SF_qDd(m_Globals, v10, 0xFu, 0x22u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, v16, 0xC0000010);
    goto LABEL_13;
  }
  if ( DmaDirection > 1 )
  {
    v15 = -1073741811;
    WPP_IFR_SF_qDd(
      m_Globals,
      v10,
      0xFu,
      0x23u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      DmaDirection,
      0xC000000D);
LABEL_13:
    FxVerifierDbgBreakPoint(m_Globals);
    return v15;
  }
  if ( !EvtReserveDmaFunction )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  return FxDmaPacketTransaction::ReserveAdapter(
           v12,
           RequiredMapRegisters,
           (_WDF_DMA_DIRECTION)DmaDirection,
           EvtReserveDmaFunction,
           EvtReserveDmaContext);
}
