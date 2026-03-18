/*
 * XREFs of OSNotifyDeviceEject @ 0x1C0058888
 * Callers:
 *     NotifyHandler @ 0x1C002E800 (NotifyHandler.c)
 *     OSNotifyDeviceCheck @ 0x1C00586F4 (OSNotifyDeviceCheck.c)
 * Callees:
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002C300 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x1C002EBCC (WPP_RECORDER_SF_qs.c)
 */

__int64 __fastcall OSNotifyDeviceEject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_1C00826D4 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
    byte_1C00826D8 = 0;
    WPP_RECORDER_SF_qs(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xCu,
      0x19u,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
      a1,
      (const char *)&dword_1C00826D4);
  }
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( v5 )
    ACPIBuildSynchronizationRequestInternal(
      v5,
      (__int64)ACPIBuildIssueNotifyDeviceEject,
      *(_QWORD *)(*(_QWORD *)a1 + 104LL),
      a4,
      1);
  return 0LL;
}
