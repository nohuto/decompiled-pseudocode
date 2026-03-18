/*
 * XREFs of MmStoreDecommitVirtualMemory @ 0x140167834
 * Callers:
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1401619B4 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140320C40 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiLocateAddress @ 0x140073F60 (MiLocateAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MmStoreDecommitVirtualMemory(unsigned __int64 a1, __int64 a2)
{
  _KPROCESS *Process; // rbp
  unsigned __int64 Address; // rdi
  unsigned __int8 v6; // r10
  _QWORD v8[6]; // [rsp+30h] [rbp-38h] BYREF

  memset(v8, 0, sizeof(v8));
  Process = KeGetCurrentThread()->ApcState.Process;
  MiLockWorkingSetShared((__int64)&Process[1].IdealNode[6]);
  Address = MiLocateAddress(a1);
  MiUnlockWorkingSetShared((__int64)&Process[1].IdealNode[6], v6);
  return MiDecommitPages(
           a1,
           (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (__int64)Process,
           Address,
           0,
           v8);
}
