/*
 * XREFs of ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C000E7C4
 * Callers:
 *     FxIoTargetSendIoctl @ 0x1C000E5D8 (FxIoTargetSendIoctl.c)
 *     FxIoTargetSendIo @ 0x1C00649D0 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0065C40 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C006DC10 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C00706FC (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C001A20C (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_D @ 0x1C003B494 (WPP_IFR_SF_D.c)
 */

__int64 __fastcall FxRequestBuffer::ValidateMemoryDescriptor(
        FxRequestBuffer *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_MEMORY_DESCRIPTOR *Descriptor,
        char Flags)
{
  IFxMemory *Buffer; // rcx
  unsigned int Length; // eax
  int v9; // ebx
  unsigned __int16 v11; // r9
  void *v12; // rdx
  _WDFMEMORY_OFFSET *Offsets; // rax
  unsigned __int64 BufferLength; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned int globals; // eax
  unsigned __int16 v18; // r9
  IFxMemory *pMemory; // [rsp+50h] [rbp+18h] BYREF

  if ( !Descriptor )
  {
    if ( (Flags & 1) != 0 )
      return 0LL;
    v11 = 10;
    goto LABEL_12;
  }
  if ( Descriptor->Type == WdfMemoryDescriptorTypeBuffer )
  {
    Buffer = (IFxMemory *)Descriptor->u.BufferType.Buffer;
    if ( Buffer )
    {
LABEL_4:
      Length = Descriptor->u.BufferType.Length;
      this->DataType = FxRequestBufferBuffer;
LABEL_5:
      this->u.Mdl.Length = Length;
      this->u.Memory.Memory = Buffer;
      return 0;
    }
    if ( (Flags & 2) == 0 )
    {
      v11 = 11;
      goto LABEL_12;
    }
    globals = Descriptor->u.BufferType.Length;
    if ( !globals )
      goto LABEL_4;
    v18 = 12;
LABEL_13:
    WPP_IFR_SF_D(
      FxDriverGlobals,
      (unsigned __int8)FxDriverGlobals,
      6u,
      v18,
      WPP_FxRequestBuffer_cpp_Traceguids,
      globals);
    return 3221225485LL;
  }
  if ( Descriptor->Type != WdfMemoryDescriptorTypeMdl )
  {
    if ( Descriptor->Type != WdfMemoryDescriptorTypeHandle )
      return (unsigned int)-1073741811;
    pMemory = 0LL;
    v12 = Descriptor->u.BufferType.Buffer;
    if ( !v12 )
    {
      if ( (Flags & 2) != 0 )
        return 0;
      WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, 0xFu, WPP_FxRequestBuffer_cpp_Traceguids);
      return (unsigned int)-1073741811;
    }
    FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)v12, 0x100Au, (void **)&pMemory);
    Offsets = Descriptor->u.HandleType.Offsets;
    if ( !Offsets )
    {
      v9 = 0;
      goto LABEL_23;
    }
    BufferLength = Offsets->BufferLength;
    v15 = BufferLength + Offsets->BufferOffset;
    if ( v15 >= BufferLength )
    {
      v16 = BufferLength + Offsets->BufferOffset;
      if ( v16 > pMemory->GetBufferSize(pMemory) )
      {
        v9 = -1073741675;
        goto LABEL_31;
      }
      v9 = 0;
    }
    else
    {
      v9 = v15 < BufferLength ? 0xC0000095 : 0;
    }
    if ( v9 >= 0 )
    {
LABEL_23:
      if ( pMemory )
        FxRequestBuffer::SetMemory(this, pMemory, Descriptor->u.HandleType.Offsets);
      return (unsigned int)v9;
    }
LABEL_31:
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 6u, 0x10u, WPP_FxRequestBuffer_cpp_Traceguids, v9);
    return (unsigned int)v9;
  }
  Buffer = (IFxMemory *)Descriptor->u.BufferType.Buffer;
  if ( Buffer )
  {
LABEL_36:
    Length = Descriptor->u.BufferType.Length;
    this->DataType = FxRequestBufferMdl;
    goto LABEL_5;
  }
  if ( (Flags & 2) != 0 )
  {
    globals = Descriptor->u.BufferType.Length;
    if ( globals )
    {
      v18 = 14;
      goto LABEL_13;
    }
    goto LABEL_36;
  }
  v11 = 13;
LABEL_12:
  WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, v11, WPP_FxRequestBuffer_cpp_Traceguids);
  return 3221225485LL;
}
