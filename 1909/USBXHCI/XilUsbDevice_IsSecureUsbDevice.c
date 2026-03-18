/*
 * XREFs of XilUsbDevice_IsSecureUsbDevice @ 0x1C0004C00
 * Callers:
 *     TR_Create @ 0x1C0069444 (TR_Create.c)
 * Callees:
 *     <none>
 */

char __fastcall XilUsbDevice_IsSecureUsbDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 656);
}
