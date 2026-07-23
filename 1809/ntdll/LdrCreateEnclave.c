/*
 * XREFs of LdrCreateEnclave @ 0x1800CEBB0
 * Callers:
 *     <none>
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A06C0 (ZwFreeVirtualMemory.c)
 *     ZwCreateEnclave @ 0x1800A1750 (ZwCreateEnclave.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800CF1E0 (LdrpCreateSoftwareEnclave.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800D1E18 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl LdrCreateEnclave(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG Reserved,
        SIZE_T Size,
        SIZE_T InitialCommitment,
        ULONG EnclaveType,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  int SoftwareEnclave; // ebx
  PVOID BaseAddressa; // [rsp+58h] [rbp-10h] BYREF

  BaseAddressa = *BaseAddress;
  SoftwareEnclave = ZwCreateEnclave(
                      ProcessHandle,
                      &BaseAddressa,
                      *(ULONG_PTR *)&Reserved,
                      Size,
                      InitialCommitment,
                      EnclaveType,
                      EnclaveInformation,
                      EnclaveInformationLength,
                      EnclaveError);
  if ( SoftwareEnclave >= 0 )
  {
    if ( EnclaveType == 16 && (SoftwareEnclave = LdrpCreateSoftwareEnclave(BaseAddressa, Size), SoftwareEnclave < 0) )
      ZwFreeVirtualMemory(ProcessHandle, &BaseAddressa, 0LL, 0x8000u);
    else
      *BaseAddress = BaseAddressa;
  }
  if ( EnclaveType == 16 )
    LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry(16LL, (unsigned int)SoftwareEnclave);
  return SoftwareEnclave;
}
