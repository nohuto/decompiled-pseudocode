/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x14027D4E0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x140181794 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x14027D1DC (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x14027D210 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x14027D26C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x14027D2F8 (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x14027D638 (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x1406CC590 (PsTerminateSystemThread.c)
 */

void __fastcall InbvRotateGuiBootDisplay(PVOID StartContext)
{
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -800000LL;
  do
  {
    KeDelayExecutionThread(0, 0, &Interval);
    InbvAcquireLock();
    if ( !(unsigned int)InbvGetDisplayState() && RotBarSelection == 1 )
      RotBarUpdate();
    InbvReleaseLock();
  }
  while ( InbvCheckDisplayOwnership() );
  InbvReleaseResources();
  PsTerminateSystemThread(0);
}
