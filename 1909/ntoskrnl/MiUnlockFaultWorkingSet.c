/*
 * XREFs of MiUnlockFaultWorkingSet @ 0x1402D8CD8
 * Callers:
 *     MiWaitForRotateToComplete @ 0x14013B138 (MiWaitForRotateToComplete.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1402CF498 (MiCheckHoldFaultForHotPatch.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 */

void __fastcall MiUnlockFaultWorkingSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  bool v5; // zf
  __int64 v6; // rcx

  v4 = *(_QWORD *)a1;
  LOBYTE(a2) = *(_BYTE *)(a1 + 12);
  v5 = (*(_BYTE *)(a1 + 13) & 1) == 0;
  v6 = *(_QWORD *)a1;
  if ( v5 )
    MiUnlockWorkingSetShared(v6, a2);
  else
    MiUnlockWorkingSetExclusive(v6, a2, v4, a4);
}
