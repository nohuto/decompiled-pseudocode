/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x14027D7D0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x1401818F4 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x14027D4CC (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x14027D500 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x14027D55C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x14027D5E8 (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x14027D928 (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x1406CD810 (PsTerminateSystemThread.c)
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
