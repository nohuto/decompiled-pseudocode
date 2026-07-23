/*
 * XREFs of MiRelockFaultState @ 0x14002D290
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140003F00 (MiWaitForCollidedFaultComplete.c)
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiValidFault @ 0x1400B6D30 (MiValidFault.c)
 *     MiPrivateFixup @ 0x140125F10 (MiPrivateFixup.c)
 *     MiMakeImagePageOk @ 0x1402C47EC (MiMakeImagePageOk.c)
 *     MiIdealClusterPage @ 0x1402C6E04 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 */

char __fastcall MiRelockFaultState(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  char v6; // r14
  __int64 valid; // rax
  __int64 SharedVm; // rbx
  __int64 v9; // rdx
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  if ( !a2 )
    goto LABEL_6;
  v6 = MiLockWorkingSetShared(*a1);
  valid = MiLockLowestValidPageTable(v2, a2 << 25 >> 16, &v11);
  v3 = valid;
  if ( valid != a2 )
  {
    MiUnlockPageTableInternal(v2, valid);
    LOBYTE(v9) = v6;
    LOBYTE(valid) = MiUnlockWorkingSetShared(v2, v9);
    v3 = 0LL;
  }
  if ( !v3 )
  {
LABEL_6:
    *((_BYTE *)a1 + 13) |= 1u;
    SharedVm = MiGetSharedVm(v2, a2);
    LOBYTE(valid) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
  }
  a1[2] = v3;
  return valid;
}
