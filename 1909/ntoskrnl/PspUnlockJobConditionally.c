/*
 * XREFs of PspUnlockJobConditionally @ 0x140613C14
 * Callers:
 *     PspJobDelete @ 0x1400EB730 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1405B347C (PspSetJobIoRateControl.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x14061251C (PspQueryJobHierarchyAccountingInformation.c)
 *     PspRemoveProcessFromJobChain @ 0x140614EA4 (PspRemoveProcessFromJobChain.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406173EC (PspAllocateAndQueryNotificationChannel.c)
 *     PspSendProcessNotificationToJobChain @ 0x140687430 (PspSendProcessNotificationToJobChain.c)
 *     PspSetNetRateControl @ 0x1408C7F2C (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
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
