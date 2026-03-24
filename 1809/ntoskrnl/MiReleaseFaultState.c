/*
 * XREFs of MiReleaseFaultState @ 0x14001AED0
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140003F00 (MiWaitForCollidedFaultComplete.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiInPagePageTable @ 0x1400987E0 (MiInPagePageTable.c)
 *     MiValidFault @ 0x1400B6DF0 (MiValidFault.c)
 *     MiStealPage @ 0x1400EBF44 (MiStealPage.c)
 *     MiUnlockSystemVa @ 0x1400ECDC4 (MiUnlockSystemVa.c)
 *     MiPrivateFixup @ 0x140125E40 (MiPrivateFixup.c)
 *     MiReleaseFaultSynchronization @ 0x1402BC6CC (MiReleaseFaultSynchronization.c)
 *     MiMakeImagePageOk @ 0x1402C45FC (MiMakeImagePageOk.c)
 *     MiIdealClusterPage @ 0x1402C6C14 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockFaultPageTable @ 0x14001BC3C (MiUnlockFaultPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CE0 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiReleaseFaultState(__int64 *a1, char a2, _BYTE *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v8; // rdx

  v3 = *a1;
  v5 = a1[2];
  MiUnlockFaultPageTable();
  if ( a3 )
    *a3 = *((_BYTE *)a1 + 12);
  else
    a2 = *((_BYTE *)a1 + 12);
  LOBYTE(v8) = a2;
  if ( (*((_BYTE *)a1 + 13) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v3, v8);
  else
    MiUnlockWorkingSetShared(v3, v8);
  return v5;
}
