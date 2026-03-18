/*
 * XREFs of NtUnloadKey2 @ 0x140749F20
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x1406B8CA4 (CmUnloadKey.c)
 */

NTSTATUS __stdcall NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  return CmUnloadKey((__int64)TargetKey, Flags, 0, 0LL);
}
