/*
 * XREFs of NdisNblTrackerRegisterComponent @ 0x1C001C360
 * Callers:
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00C30B8 (ndisUpdateNoPauseOnSuspend.c)
 *     ndisAllocateOpenBlock @ 0x1C00C3978 (ndisAllocateOpenBlock.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00FC5B0 (ndisSelectiveSuspendInitialize.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisAllocatePerProcessorSlot @ 0x1C001C520 (ndisAllocatePerProcessorSlot.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C006B0E0 (-ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 */

__int64 __fastcall NdisNblTrackerRegisterComponent(__int16 a1, __int64 a2, __int64 a3)
{
  PVOID PoolWithTag; // rax
  __int64 v8; // rbx
  __int64 *v9; // r14
  unsigned int v10; // esi
  __int64 PerProcessorSlot; // rax
  KIRQL v12; // al
  __int64 *v13; // rcx

  if ( ndisNblTrackerMode < NdisTrackNblRuntimeCheck )
    return a2 | 2;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x6B74444Eu);
  v8 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return a2 | 2;
  memset(PoolWithTag, 0, 0x48uLL);
  *(_QWORD *)(v8 + 32) = a3;
  v9 = (__int64 *)(v8 + 40);
  *(_WORD *)(v8 + 16) = a1;
  v10 = 0;
  *(_QWORD *)(v8 + 24) = a2;
  *(_QWORD *)(v8 + 8) = v8;
  *(_QWORD *)v8 = v8;
  do
  {
    PerProcessorSlot = ndisAllocatePerProcessorSlot(1802781774LL);
    if ( !PerProcessorSlot )
    {
      ndisNblTrackerDeleteTracker((PVOID)v8);
      return a2 | 2;
    }
    *v9 = PerProcessorSlot;
    ++v10;
    v9 += 2;
  }
  while ( v10 < 2 );
  v12 = KeAcquireSpinLockRaiseToDpc(&ndisNblTrackerListLock);
  v13 = (__int64 *)qword_1C00A0958;
  if ( *(struct _NDIS_NBL_TRACKER ***)qword_1C00A0958 != &ndisNblTrackerList )
    __fastfail(3u);
  *(_QWORD *)v8 = &ndisNblTrackerList;
  *(_QWORD *)(v8 + 8) = v13;
  *v13 = v8;
  qword_1C00A0958 = v8;
  KeReleaseSpinLock(&ndisNblTrackerListLock, v12);
  return v8 | 1;
}
