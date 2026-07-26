/*
 * XREFs of NdisNblTrackerDeregisterComponent @ 0x1C0014880
 * Callers:
 *     ndisDereferenceFilter @ 0x1C005AE80 (ndisDereferenceFilter.c)
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00C30B8 (ndisUpdateNoPauseOnSuspend.c)
 *     ndisFreeOpenBlock @ 0x1C00EC434 (ndisFreeOpenBlock.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C00F01D8 (ndisMCleanupMiniportBlockOnStop.c)
 *     ndisSelectiveSuspendFree @ 0x1C00FC4B0 (ndisSelectiveSuspendFree.c)
 * Callees:
 *     ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C006B0E0 (-ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C006B9A4 (-ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 */

void __fastcall NdisNblTrackerDeregisterComponent(__int64 a1)
{
  _QWORD *v1; // rbx
  KIRQL v2; // al
  __int64 v3; // r8
  KIRQL v4; // di
  _QWORD *v5; // rdx

  if ( (a1 & 1) != 0 )
  {
    v1 = (_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF8uLL);
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisNblTrackerListLock);
    v3 = *v1;
    v4 = v2;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v5 = (_QWORD *)v1[1], (_QWORD *)*v5 != v1) )
      __fastfail(3u);
    *v5 = v3;
    *(_QWORD *)(v3 + 8) = v5;
    ndisNblTrackerVerifyNoNblsHeld((ULONG_PTR)v1);
    KeReleaseSpinLock(&ndisNblTrackerListLock, v4);
    ndisNblTrackerDeleteTracker(v1);
  }
}
