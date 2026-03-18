/*
 * XREFs of MiFreePhysicalView @ 0x1400684E8
 * Callers:
 *     MiRemoveVadCharges @ 0x1405EC820 (MiRemoveVadCharges.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140063CE0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiFreePhysicalView(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  LONG *SharedVm; // rbx
  KIRQL v5; // al
  __int64 v6; // r8
  __int64 v7; // r9

  if ( (*(_DWORD *)(a2 + 48) & 7) == 1 )
  {
    v2 = *(_QWORD *)(a1 + 1296);
    v3 = a1 + 1280;
    SharedVm = MiGetSharedVm(a1 + 1280);
    v5 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    --*(_QWORD *)(v2 + 240);
    MiUnlockWorkingSetExclusive(v3, v5, v6, v7);
  }
}
