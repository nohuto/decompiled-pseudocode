/*
 * XREFs of ZwOpenKeyEx @ 0x1401C2430
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x1405C36C8 (_RegRtlOpenKeyTransacted.c)
 *     MfgInitSystem @ 0x140A22314 (MfgInitSystem.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
