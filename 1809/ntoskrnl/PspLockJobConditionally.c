/*
 * XREFs of PspLockJobConditionally @ 0x1406016E4
 * Callers:
 *     PspJobDelete @ 0x14008FD50 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x140585F0C (PspSetJobIoRateControl.c)
 *     PspRemoveProcessFromJobChain @ 0x140601410 (PspRemoveProcessFromJobChain.c)
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 *     PspSendProcessNotificationToJobChain @ 0x14060494C (PspSendProcessNotificationToJobChain.c)
 *     PspSetNetRateControl @ 0x14088B94C (PspSetNetRateControl.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 */

char __fastcall PspLockJobConditionally(__int64 a1, _QWORD *a2)
{
  int v2; // eax

  v2 = 0;
  while ( a1 != *a2 )
  {
    ++v2;
    ++a2;
    if ( v2 )
    {
      LOBYTE(v2) = ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
      return v2;
    }
  }
  return v2;
}
