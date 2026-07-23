/*
 * XREFs of ZwLoadKeyEx @ 0x1401C2CD0
 * Callers:
 *     PiDrvDbLoadHive @ 0x1406F22B4 (PiDrvDbLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKeyEx(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        HANDLE TrustClassKey,
        HANDLE Event,
        ACCESS_MASK DesiredAccess,
        PHANDLE RootHandle,
        PVOID Reserved)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
