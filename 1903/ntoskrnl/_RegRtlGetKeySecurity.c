/*
 * XREFs of _RegRtlGetKeySecurity @ 0x14093EFE0
 * Callers:
 *     _RegRtlCopyTreeInternal @ 0x14093E8FC (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwQuerySecurityObject @ 0x1401C2B70 (ZwQuerySecurityObject.c)
 */

NTSTATUS __fastcall RegRtlGetKeySecurity(void *a1, __int64 a2, void *a3, ULONG *LengthNeeded)
{
  return ZwQuerySecurityObject(a1, 4u, a3, *LengthNeeded, LengthNeeded);
}
