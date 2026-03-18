/*
 * XREFs of MiFinishPlaceholderVadReplacement @ 0x14085C78C
 * Callers:
 *     MiMapViewOfDataSection @ 0x1405F0BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F1600 (MiReserveUserMemory.c)
 * Callees:
 *     MiDeleteVad @ 0x140065E10 (MiDeleteVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1400754A0 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadDeleted @ 0x140075560 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x140075570 (MiLockVadShared.c)
 *     MiDecrementVadsBeingDeleted @ 0x1402A3E00 (MiDecrementVadsBeingDeleted.c)
 *     PerfInfoLogVirtualAlloc @ 0x1408B9120 (PerfInfoLogVirtualAlloc.c)
 */

LONG __fastcall MiFinishPlaceholderVadReplacement(char *P, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rcx
  _KPROCESS *Process; // rsi
  unsigned __int64 v7; // rax

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a3 )
  {
    MiLockVadShared((__int64)CurrentThread, (__int64)P);
    if ( !(unsigned int)MiVadDeleted((__int64)P) && (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
    {
      v7 = *((unsigned int *)P + 6) | ((unsigned __int64)(unsigned __int8)P[32] << 32);
      PerfInfoLogVirtualAlloc(
        v7 << 12,
        ((*((unsigned int *)P + 7) | ((unsigned __int64)(unsigned __int8)P[33] << 32)) - v7 + 1) << 12,
        Process,
        0x2000LL);
    }
    MiUnlockAndDereferenceVadShared(P);
  }
  else
  {
    MiDeleteVad((unsigned int *)P, 0LL, 0);
  }
  return MiDecrementVadsBeingDeleted(a2);
}
