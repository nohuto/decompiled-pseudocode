/*
 * XREFs of ZwQuerySecurityObject @ 0x1401C36F0
 * Callers:
 *     RtlIsUntrustedObject @ 0x140132B70 (RtlIsUntrustedObject.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14068BD34 (CmpQueryFileSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1406FFEE4 (PiDevCfgGetKeySecurityDescriptor.c)
 *     CmpSaveBootControlSet @ 0x140822C90 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x140834008 (CmpCloneHwProfile.c)
 *     _RegRtlGetKeySecurity @ 0x14093EA50 (_RegRtlGetKeySecurity.c)
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
