/*
 * XREFs of imp_WdfDmaTransactionStopSystemTransfer @ 0x1C00320F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?StopTransfer@FxDmaSystemTransaction@@QEAAXXZ @ 0x1C0037158 (-StopTransfer@FxDmaSystemTransaction@@QEAAXXZ.c)
 */

void __fastcall imp_WdfDmaTransactionStopSystemTransfer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxDmaTransactionBase *pDmaTrans; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  m_Globals = pDmaTrans->m_Globals;
  if ( (unsigned int)(pDmaTrans->m_DmaEnabler->m_Profile - 7) <= 1 )
  {
    FxDmaSystemTransaction::StopTransfer((FxDmaSystemTransaction *)pDmaTrans);
  }
  else
  {
    WPP_IFR_SF_qL(
      m_Globals,
      2u,
      0xFu,
      0x27u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      pDmaTrans->m_DmaEnabler->m_Profile);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
