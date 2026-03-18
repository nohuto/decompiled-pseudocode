/*
 * XREFs of NtUnloadKey2 @ 0x140748020
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x14069A6C4 (CmUnloadKey.c)
 */

NTSTATUS __stdcall NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  return CmUnloadKey((__int64)TargetKey, Flags, 0, 0LL);
}
