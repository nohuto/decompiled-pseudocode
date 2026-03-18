/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x140292060
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x14018A5D0 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x140291D5C (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x140291D90 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x140291DEC (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x140291E78 (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x1402921B8 (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x1406B85A0 (PsTerminateSystemThread.c)
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
