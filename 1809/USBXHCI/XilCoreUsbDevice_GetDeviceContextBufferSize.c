/*
 * XREFs of XilCoreUsbDevice_GetDeviceContextBufferSize @ 0x1C00430E8
 * Callers:
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0042E20 (XilCoreDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilCoreUsbDevice_GetDeviceContextBufferSize(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return *(unsigned int *)(result + 44);
  return result;
}
