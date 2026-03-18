/*
 * XREFs of AcquireGL @ 0x1C0064BC4
 * Callers:
 *     ParseAcquire @ 0x1C0024F00 (ParseAcquire.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcquireGL(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // eax

  v1 = 0;
  if ( ghGlobalLock )
  {
    v3 = ghGlobalLock(5LL, 0LL, qword_1C00830E8, RestartCtxtCallback, a1 + 328);
    v1 = v3;
    if ( v3 == 259 )
    {
      return 32772;
    }
    else if ( v3 )
    {
      v1 = -1072431086;
      LogError(-1072431086);
      AcpiDiagTraceAmlError(a1, -1072431086);
      PrintDebugMessage(6, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return v1;
}
