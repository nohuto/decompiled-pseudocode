/*
 * XREFs of ZwQuerySecurityObject @ 0x1401BABF0
 * Callers:
 *     RtlIsUntrustedObject @ 0x140131B80 (RtlIsUntrustedObject.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1405B4B70 (CmpQueryFileSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140705B38 (PiDevCfgGetKeySecurityDescriptor.c)
 *     CmpSaveBootControlSet @ 0x1407E88F0 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x1407FB5FC (CmpCloneHwProfile.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083D808 (PiDrvDbOverlayCopyKeys.c)
 *     _RegRtlCopyTreeInternal @ 0x140900520 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&SecurityInformation, SecurityDescriptor);
}
