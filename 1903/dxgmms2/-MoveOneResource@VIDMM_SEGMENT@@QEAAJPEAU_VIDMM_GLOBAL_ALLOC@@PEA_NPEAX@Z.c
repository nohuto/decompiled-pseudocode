/*
 * XREFs of ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00C0430
 * Callers:
 *     <none>
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchiUpdateFlipQueueEntriesForMove @ 0x1C00313B0 (VidSchiUpdateFlipQueueEntriesForMove.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A718 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C005B910 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D3F0 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0081ED4 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AFD78 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B13C8 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C0250 (-IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::MoveOneResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        bool *a3,
        void *a4)
{
  VIDMM_GLOBAL *v6; // rcx
  _QWORD *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct _VIDMM_GLOBAL_ALLOC *v11; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v12; // r15
  _QWORD **v13; // r15
  _QWORD *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int16 v17; // cx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  char IsNonOverlappingResourceCB; // si

  if ( a2 && *((_QWORD *)a2 + 26) && *((_QWORD *)a2 + 28) == *((_QWORD *)a2 + 17) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)a2 + 480, 0LL);
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
    VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(v6, a2);
    v7 = (_QWORD *)((char *)a2 + 144);
    VIDMM_GLOBAL::MemoryTransfer(
      this[1],
      a2,
      *((_QWORD *)a2 + 2),
      0LL,
      *((struct VIDMM_SEGMENT **)a2 + 17),
      (union _LARGE_INTEGER *)a2 + 18,
      0LL,
      *((struct VIDMM_SEGMENT **)a2 + 17),
      (union _LARGE_INTEGER *)a2 + 27,
      0LL,
      0);
    if ( (*((_DWORD *)a2 + 19) & 0x100000) != 0 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v10 + 24) = a2;
      WdLogEvent5_WdAssertion(v10);
      v11 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
      while ( v11 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296) )
      {
        v12 = v11;
        v11 = *(struct _VIDMM_GLOBAL_ALLOC **)v11;
        v13 = (_QWORD **)((char *)v12 - 16);
        v14 = *v13;
        while ( v14 != v13 )
        {
          v15 = *(v14 - 4);
          v14 = (_QWORD *)*v14;
          VidSchMarkDeviceAsError(*(_QWORD *)(v15 + 32));
        }
      }
    }
    v16 = *((_QWORD *)a2 + 17);
    *v7 = *((_QWORD *)a2 + 27);
    if ( (*(_DWORD *)(v16 + 80) & 0x1000) != 0 )
      v17 = 0;
    else
      v17 = *(_DWORD *)(v16 + 16) + 1;
    *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = v17;
    *(_QWORD *)(*((_QWORD *)a2 + 63) + 32LL) = *v7 + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
    *((_QWORD *)a2 + 28) = 0LL;
    *((_QWORD *)a2 + 26) = 0LL;
    if ( VIDMM_GLOBAL::IsTdrPending(this[1]) )
    {
      ExReleasePushLockExclusiveEx((char *)a2 + 480, 0LL);
      KeLeaveCriticalRegion();
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
      v20 = WdLogNewEntry5_WdWarning(v19, v18);
      WdLogEvent5_WdWarning(v20);
      return 3221226166LL;
    }
    IsNonOverlappingResourceCB = VIDMM_SEGMENT::IsNonOverlappingResourceCB((_VIDMM_GLOBAL_ALLOC_NONPAGED **)a2);
    if ( IsNonOverlappingResourceCB )
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this[1], *((_DWORD *)a2 + 19) & 0x3F);
    if ( (**((_DWORD **)a2 + 63) & 0x10000) != 0 )
      VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this[1], a2, 1u);
    if ( IsNonOverlappingResourceCB )
      VidSchiUpdateFlipQueueEntriesForMove(*(_QWORD *)(*((_QWORD *)this[1] + 2) + 528LL), a2);
    VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation((VIDMM_SEGMENT *)this, a2);
    ExReleasePushLockExclusiveEx((char *)a2 + 480, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
  }
  return 0LL;
}
