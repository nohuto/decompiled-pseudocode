/*
 * XREFs of imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C006AA70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C00314B0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qddd @ 0x1C00315F4 (WPP_IFR_SF_qddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?_UsbdPipeTypeToWdf@FxUsbPipe@@SA?AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z @ 0x1C006E648 (-_UsbdPipeTypeToWdf@FxUsbPipe@@SA-AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z.c)
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C006FA1C (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 */

int __fastcall imp_WdfUsbTargetPipeConfigContinuousReader(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config)
{
  unsigned __int8 v5; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int v7; // esi
  int result; // eax
  unsigned __int16 v9; // r9
  int v10; // edi
  unsigned __int64 TransferLength; // rax
  unsigned __int64 HeaderLength; // rcx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int16 v16; // r9
  unsigned __int64 v17; // rcx
  _WDF_USB_PIPE_TYPE _a3; // eax
  unsigned __int8 v19; // dl
  FxUsbPipe *v20; // r9
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rdx
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]
  FxUsbPipe *pUsbPipe; // [rsp+70h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  if ( !Config )
    FxVerifierNullBugCheck(pUsbPipe->m_Globals, retaddr);
  if ( Config->Size != 72 )
  {
    v7 = -1073741820;
    WPP_IFR_SF_qddd(m_Globals, v5, 0xEu, 0xFu, WPP_FxUsbPipeAPI_cpp_Traceguids, Config, Config->Size, 72, -1073741820);
    return v7;
  }
  if ( !Config->EvtUsbTargetPipeReadComplete )
  {
    v9 = 16;
LABEL_8:
    v10 = -1073741811;
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, v9, WPP_FxUsbPipeAPI_cpp_Traceguids, -1073741811);
    return v10;
  }
  TransferLength = Config->TransferLength;
  if ( !TransferLength )
  {
    v9 = 17;
    goto LABEL_8;
  }
  HeaderLength = Config->HeaderLength;
  v13 = -1LL;
  v14 = HeaderLength + TransferLength;
  v15 = -1LL;
  if ( v14 >= HeaderLength )
    v15 = v14;
  v7 = v14 < HeaderLength ? 0xC0000095 : 0;
  if ( v14 < HeaderLength )
  {
    v16 = 18;
LABEL_16:
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, v16, WPP_FxUsbPipeAPI_cpp_Traceguids, v7);
    return v7;
  }
  v17 = v15 + Config->TrailerLength;
  if ( v17 >= v15 )
    v13 = v15 + Config->TrailerLength;
  v7 = v17 < v15 ? 0xC0000095 : 0;
  if ( v17 < v15 )
  {
    v16 = 19;
    goto LABEL_16;
  }
  result = FxValidateObjectAttributes(pUsbPipe->m_Globals, Config->BufferAttributes, 1);
  if ( result >= 0 )
  {
    _a3 = FxUsbPipe::_UsbdPipeTypeToWdf(pUsbPipe->m_PipeInformation.PipeType);
    if ( (unsigned int)(_a3 - 3) > 1 )
    {
      v10 = -1073741808;
      WPP_IFR_SF_qDd(m_Globals, v19, 0xEu, 0x14u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, _a3, 0xC0000010);
      return v10;
    }
    if ( (v20->m_PipeInformation.EndpointAddress & 0x80u) == 0 )
    {
      v10 = -1073741808;
      WPP_IFR_SF_qL(m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, 0xC0000010);
      return v10;
    }
    if ( v20->m_CheckPacketSize )
    {
      v21 = Config->TransferLength;
      v22 = v21 % v20->m_PipeInformation.MaximumPacketSize;
      if ( v22 )
      {
        v10 = -1073741306;
        WPP_IFR_SF_qDd(
          m_Globals,
          v22,
          0xEu,
          0x16u,
          WPP_FxUsbPipeAPI_cpp_Traceguids,
          (const void *)v21,
          v20->m_PipeInformation.MaximumPacketSize,
          0xC0000206);
        return v10;
      }
    }
    return FxUsbPipe::InitContinuousReader(v20, Config, v13);
  }
  return result;
}
