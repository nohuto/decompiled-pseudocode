/*
 * XREFs of MiFreePhysicalView @ 0x140057630
 * Callers:
 *     MiRemoveVadCharges @ 0x140605D80 (MiRemoveVadCharges.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 */

char __fastcall MiFreePhysicalView(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx

  result = *(_DWORD *)(a2 + 48) & 0x70;
  if ( result == 16 )
  {
    v3 = *(_QWORD *)(a1 + 1296);
    v4 = a1 + 1280;
    SharedVm = MiGetSharedVm(a1 + 1280, a2);
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    LOBYTE(v7) = v6;
    --*(_QWORD *)(v3 + 304);
    return MiUnlockWorkingSetExclusive(v4, v7);
  }
  return result;
}
