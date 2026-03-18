/*
 * XREFs of PspUnlockJobConditionally @ 0x140612104
 * Callers:
 *     PspJobDelete @ 0x1400E6790 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1405B30A0 (PspSetJobIoRateControl.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140610A0C (PspQueryJobHierarchyAccountingInformation.c)
 *     PspRemoveProcessFromJobChain @ 0x140613394 (PspRemoveProcessFromJobChain.c)
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406158DC (PspAllocateAndQueryNotificationChannel.c)
 *     PspSendProcessNotificationToJobChain @ 0x140693EC0 (PspSendProcessNotificationToJobChain.c)
 *     PspSetNetRateControl @ 0x1408C864C (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
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
