/*
 * XREFs of _RegRtlSetKeySecurity @ 0x14093F004
 * Callers:
 *     _RegRtlCopyTreeInternal @ 0x14093E8FC (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x1401C34F0 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall RegRtlSetKeySecurity(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
