/*
 * XREFs of UsbDevice_OnResetDisableCompletion @ 0x1C00362D0
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_DisableCompletion @ 0x1C0034D40 (UsbDevice_DisableCompletion.c)
 */

void __fastcall UsbDevice_OnResetDisableCompletion(__int64 a1, int a2)
{
  UsbDevice_DisableCompletion(a1, a2, 2);
}
