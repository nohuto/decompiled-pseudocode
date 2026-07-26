/*
 * XREFs of ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0076BF8
 * Callers:
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C001F9B4 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0077498 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00776E0 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C007822C (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00784EC (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C007865C (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     NdisReleaseNicActive @ 0x1C007A040 (NdisReleaseNicActive.c)
 * Callees:
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0077440 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00836E8 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ndisAoAcActiveRefSubtract(struct _NDIS_MINIPORT_AOAC *a1, enum _NDIS_PM_COMPONENT_ID a2, int a3)
{
  unsigned int ActiveRef; // esi
  __int64 v5; // rbp
  __int64 v6; // rdi
  bool v7; // sf

  a1->ActiveRef -= a3;
  ActiveRef = a1->ActiveRef;
  v5 = a2;
  v6 = a2;
  v7 = a1->ComponentRefCounts[a2] - a3 < 0;
  a1->ComponentRefCounts[a2] -= a3;
  if ( v7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( a1->IsInCsResiliency && !a1->ComponentRefCounts[v5] )
  {
    if ( a1->CsRefTimes[v5].CurrentRefStartTime )
    {
      a1->CsRefTimes[v6].TotalRefTime += MEMORY[0xFFFFF78000000008] - a1->CsRefTimes[v5].CurrentRefStartTime;
      a1->CsRefTimes[v5].CurrentRefStartTime = 0LL;
    }
    if ( (_DWORD)v5 == 15 )
    {
      ndisAoAcStartRefTimeStats(a1);
    }
    else if ( ActiveRef == 1 && a1->CsRefTimes[0].CurrentRefStartTime )
    {
      a1->CsRefTimes[0].CurrentRefStartTime = MEMORY[0xFFFFF78000000008];
    }
  }
  return ActiveRef;
}
