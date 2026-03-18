/*
 * XREFs of MiReleaseFaultState @ 0x1400C4718
 * Callers:
 *     MiInPagePageTable @ 0x14005D7D0 (MiInPagePageTable.c)
 *     MiUserFault @ 0x1400AAC70 (MiUserFault.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MiUnlockSystemVa @ 0x1400C46E8 (MiUnlockSystemVa.c)
 *     MiFinishHardFault @ 0x1400CE220 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140109964 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140126D84 (MiPrivateFixup.c)
 *     MiKernelWriteToExecutableMemory @ 0x1402D296C (MiKernelWriteToExecutableMemory.c)
 *     MiReleaseFaultSynchronization @ 0x1402D2D70 (MiReleaseFaultSynchronization.c)
 *     MiIdealClusterPage @ 0x1402E0ADC (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockFaultPageTable @ 0x1400070F4 (MiUnlockFaultPageTable.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 */

__int64 __fastcall MiReleaseFaultState(__int64 a1, unsigned __int8 a2, _BYTE *a3)
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
    MiUnlockWorkingSetShared(v3, a2);
  return v5;
}
