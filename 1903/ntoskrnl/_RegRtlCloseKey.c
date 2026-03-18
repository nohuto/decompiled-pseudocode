/*
 * XREFs of _RegRtlCloseKey @ 0x14093E8E8
 * Callers:
 *     _RegRtlCopyTreeInternal @ 0x14093E8FC (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 */

NTSTATUS __fastcall RegRtlCloseKey(void *a1)
{
  return ZwClose(a1);
}
