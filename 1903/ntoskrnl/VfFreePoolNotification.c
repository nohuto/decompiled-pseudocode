/*
 * XREFs of VfFreePoolNotification @ 0x14097D3B0
 * Callers:
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     ExpFreePoolChecks @ 0x140117AE8 (ExpFreePoolChecks.c)
 *     VerifierExFreePoolWithTag @ 0x140972840 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     VfRemLockDeleteMemoryRange @ 0x140973D18 (VfRemLockDeleteMemoryRange.c)
 *     VfDeadlockDeleteMemoryRange @ 0x14097B188 (VfDeadlockDeleteMemoryRange.c)
 *     ViPoolLogStackTrace @ 0x14097D6A8 (ViPoolLogStackTrace.c)
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
