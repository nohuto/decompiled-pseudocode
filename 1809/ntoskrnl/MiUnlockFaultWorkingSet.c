/*
 * XREFs of MiUnlockFaultWorkingSet @ 0x1402BF8B4
 * Callers:
 *     MiWaitForRotateToComplete @ 0x140139D0C (MiWaitForRotateToComplete.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1402B945C (MiCheckHoldFaultForHotPatch.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiUnlockFaultWorkingSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  unsigned __int8 v5; // dl
  bool v6; // zf
  __int64 v7; // rcx

  v4 = *(_QWORD *)a1;
  v5 = *(_BYTE *)(a1 + 12);
  v6 = (*(_BYTE *)(a1 + 13) & 1) == 0;
  v7 = *(_QWORD *)a1;
  if ( v6 )
    MiUnlockWorkingSetShared(v7, v5);
  else
    MiUnlockWorkingSetExclusive(v7, v5, v4, a4);
}
