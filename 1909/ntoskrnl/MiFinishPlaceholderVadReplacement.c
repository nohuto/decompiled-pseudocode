/*
 * XREFs of MiFinishPlaceholderVadReplacement @ 0x140898B00
 * Callers:
 *     MiReserveUserMemory @ 0x140609670 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x14060AE10 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiVadDeleted @ 0x1400539D0 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x1400539E0 (MiLockVadShared.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140053A30 (MiUnlockAndDereferenceVadShared.c)
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiDecrementVadsBeingDeleted @ 0x1402BB020 (MiDecrementVadsBeingDeleted.c)
 *     PerfInfoLogVirtualAlloc @ 0x1408F55C8 (PerfInfoLogVirtualAlloc.c)
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
