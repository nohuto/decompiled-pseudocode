/*
 * XREFs of ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000A110
 * Callers:
 *     imp_WdfRequestCreate @ 0x1C0009C70 (imp_WdfRequestCreate.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0016740 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     imp_WdfRequestChangeTarget @ 0x1C004B490 (imp_WdfRequestChangeTarget.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C0050840 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C006A364 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C006E7CC (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C006F49C (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C006F7A8 (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C007129C (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C0072C88 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C00736AC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C0074AD0 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C00752AC (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C0075510 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C0075758 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C0075990 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0050258 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

__int64 __fastcall FxRequestBase::ValidateTarget(FxRequestBase *this, unsigned __int64 Target)
{
  _IRP *m_Irp; // rdi
  unsigned __int64 v3; // rbx
  FxRequestContext *m_RequestContext; // rcx
  CCHAR v6; // cl
  PIRP Irp; // rax
  _IRP *v8; // rcx
  _IRP *v9; // rsi
  _FX_DRIVER_GLOBALS *v11; // rax
  unsigned __int16 v12; // cx
  const void *_a1; // rsi
  unsigned __int16 v14; // ax
  unsigned __int64 _a2; // rsi
  const void *v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  const void *v20; // rcx
  unsigned __int64 v21; // rdx
  _FX_DRIVER_GLOBALS *v22; // r10
  unsigned __int64 v23; // rdx

  m_Irp = this->m_Irp.m_Irp;
  v3 = (unsigned __int64)this;
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
  {
    if ( m_Irp )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, (FxRequestBase *)v3);
      v11 = *(_FX_DRIVER_GLOBALS **)(v3 + 16);
      if ( v11->FxVerifierOn )
      {
        if ( v11->FxVerifierIO )
          FxRequestBase::ClearVerifierFlags((FxRequestBase *)v3, 128);
      }
    }
  }
  v6 = *(_BYTE *)(Target + 336);
  if ( v6 )
  {
    if ( !m_Irp )
      goto LABEL_4;
    if ( m_Irp->CurrentLocation > v6 )
      return 0LL;
    if ( *(_BYTE *)(v3 + 213) == 1 )
    {
LABEL_4:
      Irp = IoAllocateIrp(v6, 0);
      if ( Irp )
      {
        v8 = *(_IRP **)(v3 + 152);
        *(_QWORD *)(v3 + 152) = Irp;
        v9 = 0LL;
        *(_BYTE *)(v3 + 214) = 0;
        if ( v8 && v8 != Irp && *(_BYTE *)(v3 + 213) == 1 )
          v9 = v8;
        *(_BYTE *)(v3 + 213) = 1;
        if ( v9 )
        {
          v22 = *(_FX_DRIVER_GLOBALS **)(v3 + 16);
          if ( v22->FxVerboseOn )
          {
            v23 = v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
            if ( !*(_WORD *)(v3 + 10) )
              v23 = 0LL;
            if ( v23 )
              v3 = v23;
            WPP_IFR_SF_qq(v22, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v9, (const void *)v3);
          }
          IoFreeIrp(v9);
        }
        return 0LL;
      }
      else
      {
        v18 = *(unsigned __int16 *)(Target + 10);
        v19 = Target ^ 0xFFFFFFFFFFFFFFF8uLL;
        v20 = (const void *)v3;
        if ( !(_WORD)v18 )
          v19 = 0LL;
        v21 = v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !*(_WORD *)(v3 + 10) )
          v21 = 0LL;
        if ( v21 )
          v20 = (const void *)v21;
        WPP_IFR_SF_qid(
          *(_FX_DRIVER_GLOBALS **)(v3 + 16),
          2u,
          0xEu,
          0xCu,
          WPP_FxRequestBase_cpp_Traceguids,
          v20,
          v19,
          -1073741670);
        return 3221225626LL;
      }
    }
    else
    {
      v14 = *(_WORD *)(Target + 10);
      _a2 = Target ^ 0xFFFFFFFFFFFFFFF8uLL;
      v16 = (const void *)v3;
      if ( !v14 )
        _a2 = 0LL;
      v17 = v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(v3 + 10) )
        v17 = 0LL;
      if ( v17 )
        v16 = (const void *)v17;
      WPP_IFR_SF_qid(
        *(_FX_DRIVER_GLOBALS **)(v3 + 16),
        2u,
        0xEu,
        0xDu,
        WPP_FxRequestBase_cpp_Traceguids,
        v16,
        _a2,
        -1073741616);
      return 3221225680LL;
    }
  }
  else
  {
    v12 = *(_WORD *)(Target + 10);
    _a1 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v12 )
      _a1 = 0LL;
    WPP_IFR_SF_qL(*(_FX_DRIVER_GLOBALS **)(v3 + 16), 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, _a1, 0xC0000184);
    return 3221225860LL;
  }
}
