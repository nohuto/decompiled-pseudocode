/*
 * XREFs of XilCoreUsbDevice_GetInputContextBufferLA @ 0x1C0048B58
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C003A570 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C003B4BC (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SetAddress @ 0x1C003B8A0 (UsbDevice_SetAddress.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C003CF00 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilCoreUsbDevice_GetInputContextBufferLA(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 32);
  if ( result )
    return *(_QWORD *)(result + 24);
  return result;
}
