/*
 * XREFs of UsbDevice_OnResetDisableCompletion @ 0x1C003B4A0
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_DisableCompletion @ 0x1C0039E40 (UsbDevice_DisableCompletion.c)
 */

void __fastcall UsbDevice_OnResetDisableCompletion(__int64 a1, __int64 a2)
{
  UsbDevice_DisableCompletion(a1, a2, 2);
}
