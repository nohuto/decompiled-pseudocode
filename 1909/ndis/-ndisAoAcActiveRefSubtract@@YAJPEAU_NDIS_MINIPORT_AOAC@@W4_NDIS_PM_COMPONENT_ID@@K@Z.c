/*
 * XREFs of ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C00BA9C4
 * Callers:
 *     ?ndisDispatchRequest@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0019840 (-ndisDispatchRequest@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C00BB2E8 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00BB590 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00BC184 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00BC4CC (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00BC66C (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     NdisReleaseNicActive @ 0x1C00BE260 (NdisReleaseNicActive.c)
 * Callees:
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BB290 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00C902C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
