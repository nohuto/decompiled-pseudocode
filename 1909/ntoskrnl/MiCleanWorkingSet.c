/*
 * XREFs of MiCleanWorkingSet @ 0x14012FDD4
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14060B9E8 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiDrainSystemAccessLog @ 0x14012FE58 (MiDrainSystemAccessLog.c)
 */

__int64 __fastcall MiCleanWorkingSet(__int64 a1)
{
  __int64 v1; // rbp
  LONG *SharedVm; // rbx
  KIRQL v4; // al
  KIRQL v5; // di
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v1 = a1 + 1280;
  SharedVm = MiGetSharedVm(a1 + 1280);
  v4 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v5 = v4;
  *(_BYTE *)(v1 + 187) |= 1u;
  --*(_QWORD *)(a1 + 928);
  MiDrainSystemAccessLog(v1);
  v6 = *(_QWORD *)(v1 + 112);
  LOBYTE(v7) = v5;
  MiUnlockWorkingSetExclusive(v1, v7, v8, v9);
  return v6 - 4;
}
