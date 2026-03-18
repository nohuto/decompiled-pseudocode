/*
 * XREFs of UsbDevice_DisableCompletionReturnSuccess @ 0x1C003A160
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_DisableCompletion @ 0x1C0039E40 (UsbDevice_DisableCompletion.c)
 */

void __fastcall UsbDevice_DisableCompletionReturnSuccess(__int64 a1, __int64 a2)
{
  UsbDevice_DisableCompletion(a1, a2, 0);
}
