/*
 * XREFs of OSNotifyDeviceEnum @ 0x1C002E2C4
 * Callers:
 *     NotifyHandler @ 0x1C002E080 (NotifyHandler.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     ACPIDockIsDockDevice @ 0x1C00206B0 (ACPIDockIsDockDevice.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002BE18 (ACPIBuildSynchronizationRequestInternal.c)
 *     AMLIIterateParentNext @ 0x1C002E3F4 (AMLIIterateParentNext.c)
 *     WPP_RECORDER_SF_qs @ 0x1C002E428 (WPP_RECORDER_SF_qs.c)
 */

__int64 __fastcall OSNotifyDeviceEnum(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // r9
  KIRQL v4; // si
  __int64 v5; // rcx
  __int64 v6; // r8
  void (__fastcall *v7)(__int64, __int64); // rdx
  __int64 v8; // rcx

  v1 = a1;
  v2 = 0LL;
  dword_1C00806E0 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  byte_1C00806E4 = 0;
  WPP_RECORDER_SF_qs(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    8,
    24,
    (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
    a1,
    (__int64)&dword_1C00806E0);
  if ( ACPIDockIsDockDevice((__int64 *)v1) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
    if ( !v8 )
      return 0LL;
    v6 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
    v7 = (void (__fastcall *)(__int64, __int64))ACPIBuildIssueNotifyInvalidateRelationsForDockDevice;
    goto LABEL_13;
  }
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  dword_1C0080868 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v1 + 8));
  do
  {
    if ( v2 )
      break;
    v5 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
    if ( v5 )
    {
      v2 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
      if ( *(_DWORD *)(v5 + 16) != 1599293264 )
        v2 = 0LL;
    }
    v1 = AMLIIterateParentNext(v1);
  }
  while ( v1 );
  if ( v1 )
    AMLIDereferenceHandleEx(v1);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  if ( v2 )
  {
    v6 = v2;
    v7 = ACPIBuildIssueNotifyInvalidateRelations;
    v8 = v2;
LABEL_13:
    ACPIBuildSynchronizationRequestInternal(v8, (__int64)v7, v6, v3, 1);
  }
  return 0LL;
}
