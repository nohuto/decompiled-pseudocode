/*
 * XREFs of ZwOpenKeyEx @ 0x1401C2FB0
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x1405C3B98 (_RegRtlOpenKeyTransacted.c)
 *     MfgInitSystem @ 0x140A223F4 (MfgInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
