/*
 * XREFs of MiReleaseFaultState @ 0x1400A1624
 * Callers:
 *     MiInPagePageTable @ 0x14005D730 (MiInPagePageTable.c)
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiUnlockSystemVa @ 0x1400A15F4 (MiUnlockSystemVa.c)
 *     MiUserFault @ 0x1400CADF0 (MiUserFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140100F44 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140101BD0 (MiPrivateFixup.c)
 *     MiKernelWriteToExecutableMemory @ 0x1402D2C0C (MiKernelWriteToExecutableMemory.c)
 *     MiReleaseFaultSynchronization @ 0x1402D3010 (MiReleaseFaultSynchronization.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockFaultPageTable @ 0x140007064 (MiUnlockFaultPageTable.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 */

__int64 __fastcall MiReleaseFaultState(__int64 a1, char a2, _BYTE *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 16);
  MiUnlockFaultPageTable((__int64 *)a1);
  if ( a3 )
    *a3 = *(_BYTE *)(a1 + 12);
  else
    a2 = *(_BYTE *)(a1 + 12);
  LOBYTE(v8) = a2;
  if ( (*(_BYTE *)(a1 + 13) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v3, v8, v9, v10);
  else
    MiUnlockWorkingSetShared(v3, v8);
  return v5;
}
