/*
 * XREFs of ?ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C00096B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerDebugBreak@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C006B0AC (-ndisNblTrackerDebugBreak@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C006B614 (-ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisNblTrackerSetSqmFlag@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C006B6CC (-ndisNblTrackerSetSqmFlag@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?NdisTraceLoggingStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C007E594 (-NdisTraceLoggingStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 */

void __fastcall ndisNblTrackerWatchdogTimer(struct _EX_TIMER *a1, void *a2)
{
  unsigned int v2; // esi
  struct _NDIS_NBL_TRACKER *i; // rbx
  ULONG ActiveProcessorCount; // eax
  __int64 PassiveCounter; // r8
  ULONG j; // edx
  ULONG v7; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // edi

  v2 = (ndisNblTrackerEpoch - 1) & 1;
  KeAcquireSpinLockAtDpcLevel(&ndisNblTrackerListLock);
  for ( i = ndisNblTrackerList;
        i != (struct _NDIS_NBL_TRACKER *)&ndisNblTrackerList;
        i = (struct _NDIS_NBL_TRACKER *)i->Linkage.Flink )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    PassiveCounter = i->Buckets[v2].PassiveCounter;
    for ( j = 0; j < ActiveProcessorCount; PassiveCounter += *((_QWORD *)i->Buckets[v2].Slot + 512 * v7) )
      v7 = j++;
    if ( PassiveCounter )
    {
      v8 = *((_DWORD *)i + 4);
      v9 = ndisNblTrackerStuckNblDisposition;
      if ( (v8 & 0x10000) == 0 )
      {
        *((_WORD *)i + 9) = HIWORD(v8) | 1;
        NdisTraceLoggingStuckNbl(i);
        ndisNblTrackerReportStuckNbl(i);
        ndisLastFailedNblTracker = i;
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
            ndisNblTrackerSetSqmFlag(i);
        }
        else
        {
          ndisNblTrackerDebugBreak(i);
        }
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&ndisNblTrackerListLock);
  ndisNblTrackerEpoch = v2;
}
