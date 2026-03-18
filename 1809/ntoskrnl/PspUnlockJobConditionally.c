/*
 * XREFs of PspUnlockJobConditionally @ 0x1405FE8B8
 * Callers:
 *     PspJobDelete @ 0x14008FE10 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x140584F0C (PspSetJobIoRateControl.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405FD228 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspRemoveProcessFromJobChain @ 0x140600410 (PspRemoveProcessFromJobChain.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     PspSendProcessNotificationToJobChain @ 0x14060394C (PspSendProcessNotificationToJobChain.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ACB24 (PspAllocateAndQueryNotificationChannel.c)
 *     PspSetNetRateControl @ 0x14088A70C (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 */

void __fastcall PspUnlockJobConditionally(__int64 a1, _QWORD *a2)
{
  int v2; // eax

  v2 = 0;
  while ( a1 != *a2 )
  {
    ++v2;
    ++a2;
    if ( v2 )
    {
      ExReleaseResourceLite((PERESOURCE)(a1 + 56));
      return;
    }
  }
}
