/*
 * XREFs of ZwQuerySecurityObject @ 0x1401C2B70
 * Callers:
 *     RtlIsUntrustedObject @ 0x1401340C0 (RtlIsUntrustedObject.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1406987C4 (CmpQueryFileSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1406FE104 (PiDevCfgGetKeySecurityDescriptor.c)
 *     CmpSaveBootControlSet @ 0x140823590 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x1408349A8 (CmpCloneHwProfile.c)
 *     _RegRtlGetKeySecurity @ 0x14093EFE0 (_RegRtlGetKeySecurity.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
