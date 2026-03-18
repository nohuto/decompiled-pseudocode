/*
 * XREFs of ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C0093A00
 * Callers:
 *     ?StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C006E570 (-StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C0070090 (-StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C0075FB4 (-StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@P.c)
 * Callees:
 *     <none>
 */

void __fastcall FxRequestContext::_StoreAndReferenceMemoryWorker(
        void *Tag,
        IFxMemory **PPMemory,
        FxRequestBuffer *Buffer)
{
  IFxMemory *v6; // rax
  IFxMemory *Memory; // rcx
  __int64 v8; // r8

  if ( Buffer->DataType == FxRequestBufferMemory )
  {
    Memory = Buffer->u.Memory.Memory;
    v8 = 130LL;
    goto LABEL_6;
  }
  if ( Buffer->DataType == FxRequestBufferReferencedMdl )
  {
    Memory = Buffer->u.Memory.Memory;
    v8 = 135LL;
LABEL_6:
    Memory->AddRef(Memory, Tag, v8, "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    v6 = Buffer->u.Memory.Memory;
    goto LABEL_7;
  }
  v6 = 0LL;
LABEL_7:
  *PPMemory = v6;
}
