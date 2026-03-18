/*
 * XREFs of MmReturnChargesToLockPagedPool @ 0x14084F210
 * Callers:
 *     PopEnableHiberFile @ 0x140745F9C (PopEnableHiberFile.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiGetPteAddress @ 0x140065DE8 (MiGetPteAddress.c)
 *     MiDeleteSystemPagableVm @ 0x140079F10 (MiDeleteSystemPagableVm.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

void __fastcall MmReturnChargesToLockPagedPool(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v6; // r8
  _QWORD v7[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(v7, 0, 0x28uLL);
  v4 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  MiGetPteAddress(a1);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, v6, v4, 8, v7);
  MiReturnResidentAvailable(v4);
}
