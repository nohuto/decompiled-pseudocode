/*
 * XREFs of _RegRtlCloseKey @ 0x14093E358
 * Callers:
 *     _RegRtlCopyTreeInternal @ 0x14093E36C (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 */

NTSTATUS __fastcall RegRtlCloseKey(void *a1)
{
  return ZwClose(a1);
}
