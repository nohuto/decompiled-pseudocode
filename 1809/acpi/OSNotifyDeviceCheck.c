/*
 * XREFs of OSNotifyDeviceCheck @ 0x1C0056C14
 * Callers:
 *     NotifyHandler @ 0x1C002E080 (NotifyHandler.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1C001AEEC (AMLIGetParent.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     ACPIDockIsDockDevice @ 0x1C00206B0 (ACPIDockIsDockDevice.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002BE18 (ACPIBuildSynchronizationRequestInternal.c)
 *     AMLIIterateParentNext @ 0x1C002E3F4 (AMLIIterateParentNext.c)
 *     WPP_RECORDER_SF_qs @ 0x1C002E428 (WPP_RECORDER_SF_qs.c)
 *     OSNotifyDeviceEject @ 0x1C0056D8C (OSNotifyDeviceEject.c)
 */

__int64 __fastcall OSNotifyDeviceCheck(__int64 *a1)
{
  KIRQL v3; // si
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9

  dword_1C00806E0 = *(_DWORD *)(*a1 + 40);
  byte_1C00806E4 = 0;
  WPP_RECORDER_SF_qs(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    8u,
    0x16u,
    (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
    (char)a1,
    (const char *)&dword_1C00806E0);
  if ( ACPIDockIsDockDevice(a1) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x15u,
      0x17u,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids);
    return OSNotifyDeviceEject(a1);
  }
  else
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v4 = *(_QWORD *)(*a1 + 104);
    if ( v4 && (*(_QWORD *)(v4 + 8) & 0x2000000000LL) != 0 && (unsigned int)(*(_DWORD *)(v4 + 320) - 2) > 1 )
      *(_BYTE *)(v4 + 185) = 0;
    v5 = 0LL;
    v6 = AMLIGetParent((__int64)a1);
    if ( v6 )
    {
      do
      {
        if ( v5 )
          break;
        v7 = *(_QWORD *)(*(_QWORD *)v6 + 104LL);
        if ( v7 )
        {
          v5 = *(_QWORD *)(*(_QWORD *)v6 + 104LL);
          if ( *(_DWORD *)(v7 + 16) != 1599293264 )
            v5 = 0LL;
        }
        v6 = AMLIIterateParentNext(v6);
      }
      while ( v6 );
      if ( v6 )
        AMLIDereferenceHandleEx(v6);
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v3);
    if ( v5 )
      ACPIBuildSynchronizationRequestInternal(v5, (__int64)ACPIBuildIssueNotifyInvalidateRelations, v5, v8, 1);
    return 0LL;
  }
}
