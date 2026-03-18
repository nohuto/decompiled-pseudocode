/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x140291DC0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x14018AF60 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x140291ABC (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x140291AF0 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x140291B4C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x140291BD8 (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x140291F18 (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x1406ADC90 (PsTerminateSystemThread.c)
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
