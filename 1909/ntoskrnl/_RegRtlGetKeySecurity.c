/*
 * XREFs of _RegRtlGetKeySecurity @ 0x14093EA50
 * Callers:
 *     _RegRtlCopyTreeInternal @ 0x14093E36C (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwQuerySecurityObject @ 0x1401C36F0 (ZwQuerySecurityObject.c)
 */

NTSTATUS __fastcall RegRtlGetKeySecurity(void *a1, __int64 a2, void *a3, ULONG *LengthNeeded)
{
  return ZwQuerySecurityObject(a1, 4u, a3, *LengthNeeded, LengthNeeded);
}
