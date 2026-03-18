/*
 * XREFs of PspLockJobConditionally @ 0x140615178
 * Callers:
 *     PspJobDelete @ 0x1400EB730 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1405B347C (PspSetJobIoRateControl.c)
 *     PspRemoveProcessFromJobChain @ 0x140614EA4 (PspRemoveProcessFromJobChain.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     PspSendProcessNotificationToJobChain @ 0x140687430 (PspSendProcessNotificationToJobChain.c)
 *     PspSetNetRateControl @ 0x1408C7F2C (PspSetNetRateControl.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
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
