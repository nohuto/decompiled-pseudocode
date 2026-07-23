/*
 * XREFs of LdrCreateEnclave @ 0x1800CD360
 * Callers:
 *     <none>
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     ZwCreateEnclave @ 0x18009DB50 (ZwCreateEnclave.c)
 *     sub_1800CD9D4 @ 0x1800CD9D4 (sub_1800CD9D4.c)
 *     sub_1800D0528 @ 0x1800D0528 (sub_1800D0528.c)
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
  int v12; // ebx
  PVOID BaseAddressa; // [rsp+58h] [rbp-10h] BYREF

  BaseAddressa = *BaseAddress;
  v12 = ZwCreateEnclave(
          ProcessHandle,
          &BaseAddressa,
          *(ULONG_PTR *)&Reserved,
          Size,
          InitialCommitment,
          EnclaveType,
          EnclaveInformation,
          EnclaveInformationLength,
          EnclaveError);
  if ( v12 >= 0 )
  {
    if ( EnclaveType - 16 > 1 || (v12 = sub_1800CD9D4(BaseAddressa, Size, EnclaveType), v12 >= 0) )
      *BaseAddress = BaseAddressa;
    else
      ZwFreeVirtualMemory(ProcessHandle, &BaseAddressa, 0LL, 0x8000u);
  }
  if ( EnclaveType == 16 )
    sub_1800D0528(16LL, (unsigned int)v12);
  return v12;
}
