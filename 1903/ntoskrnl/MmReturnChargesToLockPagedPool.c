/*
 * XREFs of MmReturnChargesToLockPagedPool @ 0x14088B180
 * Callers:
 *     PopEnableHiberFile @ 0x14074AAD0 (PopEnableHiberFile.c)
 * Callees:
 *     MiDeleteSystemPagableVm @ 0x14002D400 (MiDeleteSystemPagableVm.c)
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall MmReturnChargesToLockPagedPool(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v6; // r8
  _QWORD v7[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(v7, 0, 0x30uLL);
  v4 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  MiGetPteAddress(a1);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, v6, v4, 8, v7);
  MiReturnResidentAvailable(v4);
}
