/*
 * XREFs of XilCoreUsbDevice_GetInputContextBufferVA @ 0x1C0043140
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0035400 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C00362EC (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SetAddress @ 0x1C00366DC (UsbDevice_SetAddress.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C0037C00 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilCoreUsbDevice_GetInputContextBufferVA(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 32);
  if ( result )
    return *(_QWORD *)(result + 16);
  return result;
}
