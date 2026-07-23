/*
 * XREFs of VfFreePoolNotification @ 0x140938E9C
 * Callers:
 *     ExpFreePoolChecks @ 0x14009D6BC (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     VerifierExFreePoolWithTag @ 0x1409267D0 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     VfRemLockDeleteMemoryRange @ 0x140935768 (VfRemLockDeleteMemoryRange.c)
 *     ViPoolLogStackTrace @ 0x140939198 (ViPoolLogStackTrace.c)
 *     VfDeadlockDeleteMemoryRange @ 0x14093CD60 (VfDeadlockDeleteMemoryRange.c)
 */

char __fastcall VfFreePoolNotification(unsigned __int64 a1, __int64 a2)
{
  int v4; // eax

  if ( (MmVerifierData & 8) != 0 || (v4 = 1, VfVerifyMode != 2) )
    v4 = 0;
  if ( a2 )
  {
    if ( !v4 && VfPoolTraces )
      ViPoolLogStackTrace(a1, a2);
    VfDeadlockDeleteMemoryRange(a1, a2);
    LOBYTE(v4) = VfRemLockDeleteMemoryRange(a1, a2);
  }
  else if ( v4 )
  {
    if ( (MmVerifierData & 0x400000) == 0 || (LOBYTE(v4) = VfFlightOptions, (VfFlightOptions & 9) != 0) )
    {
      if ( VfPoolTraces )
        LOBYTE(v4) = ViPoolLogStackTrace(a1, 16LL);
    }
  }
  return v4;
}
