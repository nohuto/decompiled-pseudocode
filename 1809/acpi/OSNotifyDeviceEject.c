/*
 * XREFs of OSNotifyDeviceEject @ 0x1C0056D8C
 * Callers:
 *     NotifyHandler @ 0x1C002E080 (NotifyHandler.c)
 *     OSNotifyDeviceCheck @ 0x1C0056C14 (OSNotifyDeviceCheck.c)
 * Callees:
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002BE18 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x1C002E428 (WPP_RECORDER_SF_qs.c)
 */

__int64 __fastcall OSNotifyDeviceEject(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx

  dword_1C00806E0 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  byte_1C00806E4 = 0;
  WPP_RECORDER_SF_qs(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xCu,
    0x19u,
    (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
    a1,
    (const char *)&dword_1C00806E0);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( v3 )
    ACPIBuildSynchronizationRequestInternal(
      v3,
      (__int64)ACPIBuildIssueNotifyDeviceEject,
      *(_QWORD *)(*(_QWORD *)a1 + 104LL),
      v2,
      1);
  return 0LL;
}
