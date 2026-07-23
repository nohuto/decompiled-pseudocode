/*
 * XREFs of sub_180055288 @ 0x180055288
 * Callers:
 *     sub_18005521C @ 0x18005521C (sub_18005521C.c)
 *     sub_1800F74E0 @ 0x1800F74E0 (sub_1800F74E0.c)
 *     sub_1800F7544 @ 0x1800F7544 (sub_1800F7544.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwSetInformationVirtualMemory @ 0x18009F9D0 (ZwSetInformationVirtualMemory.c)
 */

NTSTATUS __fastcall sub_180055288(__int64 a1, unsigned int a2)
{
  char v3; // [rsp+30h] [rbp-9h] BYREF
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [rsp+38h] [rbp-1h] BYREF
  _QWORD VmInformation[5]; // [rsp+48h] [rbp+Fh] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp+37h] BYREF

  VirtualAddresses.NumberOfBytes = 4096LL;
  VirtualAddresses.VirtualAddress = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  v6[1] = a2;
  v6[0] = a1 & 0xFFF;
  VmInformation[1] = &v3;
  VmInformation[3] = 0LL;
  VmInformation[2] = v6;
  VmInformation[4] = 0LL;
  VmInformation[0] = 1LL;
  return ZwSetInformationVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           VmCfgCallTargetInformation,
           1uLL,
           &VirtualAddresses,
           VmInformation,
           0x28u);
}
