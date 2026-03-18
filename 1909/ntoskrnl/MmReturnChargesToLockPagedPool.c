/*
 * XREFs of MmReturnChargesToLockPagedPool @ 0x14088A9A0
 * Callers:
 *     PopEnableHiberFile @ 0x140759E1C (PopEnableHiberFile.c)
 * Callees:
 *     MiDeleteSystemPagableVm @ 0x14002D7F0 (MiDeleteSystemPagableVm.c)
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
