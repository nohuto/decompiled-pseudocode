/*
 * XREFs of MiCleanWorkingSet @ 0x14000FEA4
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1405F2BC8 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiDrainSystemAccessLog @ 0x14000FF28 (MiDrainSystemAccessLog.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiCleanWorkingSet(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 SharedVm; // rbx
  KIRQL v5; // al
  KIRQL v6; // di
  __int64 v7; // rbx
  __int64 v8; // rdx

  v2 = a1 + 1280;
  SharedVm = MiGetSharedVm(a1 + 1280, a2);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v6 = v5;
  *(_BYTE *)(v2 + 187) |= 1u;
  --*(_QWORD *)(a1 + 920);
  MiDrainSystemAccessLog(v2);
  v7 = *(_QWORD *)(v2 + 112);
  LOBYTE(v8) = v6;
  MiUnlockWorkingSetExclusive(v2, v8);
  return v7 - 4;
}
