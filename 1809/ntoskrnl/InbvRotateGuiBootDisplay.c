/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x14027D5E0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x1401817B4 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x14027D2DC (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x14027D310 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x14027D36C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x14027D3F8 (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x14027D738 (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x1406CC570 (PsTerminateSystemThread.c)
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
