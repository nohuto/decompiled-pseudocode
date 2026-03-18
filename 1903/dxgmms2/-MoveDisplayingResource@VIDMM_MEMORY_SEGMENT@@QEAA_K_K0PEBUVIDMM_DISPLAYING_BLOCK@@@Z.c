/*
 * XREFs of ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00BDF6C
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00BDA30 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AFD78 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B13C8 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1C00BEC90 (-VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00C84FC (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATION_ARGS@@_NPEA_K2@Z @ 0x1C00C8758 (-FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATI.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::MoveDisplayingResource(
        struct VIDMM_GLOBAL **this,
        __int64 a2,
        __int64 a3,
        const struct VIDMM_DISPLAYING_BLOCK *a4)
{
  __int64 v4; // rbx
  __int64 v8; // r14
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // r13
  VIDMM_LINEAR_POOL *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // r15d
  unsigned __int64 v21; // r14
  _QWORD *v22; // rax
  unsigned __int64 v24; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v26[8]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v27[5]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v28; // [rsp+90h] [rbp+17h]
  __int64 v29; // [rsp+98h] [rbp+1Fh]
  char v31; // [rsp+F8h] [rbp+7Fh] BYREF

  v4 = *(_QWORD *)a4;
  v8 = *(_QWORD *)(*(_QWORD *)a4 + 16LL) + *((_QWORD *)a4 + 1);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 480, 0LL);
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v4 + 320));
  VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(v9, (struct _VIDMM_GLOBAL_ALLOC *)v4);
  if ( !*((_BYTE *)a4 + 24) && (*((_DWORD *)this[1] + 1760) & 0x40000) == 0 )
  {
    v12 = WdLogNewEntry5_WdEvent(v11, v10);
    *(_QWORD *)(v12 + 24) = *((_QWORD *)a4 + 1);
    *(_QWORD *)(v12 + 32) = *((_QWORD *)a4 + 2);
    WdLogEvent5_WdEvent(v12);
    VidMmiMoveAndFlipDisplayingAllocation(
      this[1],
      (struct _VIDMM_GLOBAL_ALLOC *)v4,
      *((_QWORD *)a4 + 1),
      *((_QWORD *)a4 + 2));
LABEL_13:
    **(_QWORD **)(v4 + 152) = *((_QWORD *)a4 + 2);
    *(_QWORD *)(v4 + 144) = *((_QWORD *)a4 + 2);
    *(_QWORD *)(*(_QWORD *)(v4 + 504) + 32LL) = (char *)this[3] + *((_QWORD *)a4 + 2);
    v8 = *((_QWORD *)a4 + 2) + *(_QWORD *)(v4 + 16);
    VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation((VIDMM_SEGMENT *)this, (struct _VIDMM_GLOBAL_ALLOC *)v4);
    goto LABEL_14;
  }
  v13 = *(_QWORD *)(v4 + 16);
  v27[0] = a2;
  v14 = 0;
  v27[3] = *(unsigned int *)(v4 + 32);
  v27[4] = VidMmiIsSaveableResource;
  v28 = *((_QWORD *)a4 + 2);
  v29 = v13 + v28;
  v27[2] = v13;
  v15 = this[19];
  v27[1] = a3;
  if ( (int)VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
              v15,
              (const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *)v27,
              1,
              &v25,
              &v24) >= 0 )
  {
    v20 = v24;
    v21 = v25;
LABEL_11:
    v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16);
    v22[3] = *((_QWORD *)a4 + 1);
    v22[4] = v21;
    v22[5] = *((_QWORD *)a4 + 2);
    WdLogEvent5_WdEvent(v22);
    VidMmiMoveAndFlipDisplayingAllocation(this[1], (struct _VIDMM_GLOBAL_ALLOC *)v4, *((_QWORD *)a4 + 1), v21);
    VidMmiMoveAndFlipDisplayingAllocation(this[1], (struct _VIDMM_GLOBAL_ALLOC *)v4, v21, *((_QWORD *)a4 + 2));
    if ( v14 )
      VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
        (unsigned int)this[19],
        v21,
        v20,
        0,
        (__int64)VIDMM_SEGMENT::RestoreResourceCB,
        (__int64)this,
        0LL,
        (__int64)v26,
        (__int64)&v31);
    goto LABEL_13;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v17);
  if ( (int)VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
              this[19],
              (const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *)v27,
              0,
              &v25,
              &v24) >= 0 )
  {
    v20 = v24;
    v21 = v25;
    VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
      (unsigned int)this[19],
      v25,
      v24,
      0,
      (__int64)VIDMM_SEGMENT::SaveResourceCB,
      (__int64)this,
      0LL,
      (__int64)v26,
      (__int64)&v31);
    v14 = 1;
    goto LABEL_11;
  }
  _InterlockedIncrement(&dword_1C004E6D8);
  v19 = WdLogNewEntry5_WdLowResource(v18);
  *(_QWORD *)(v19 + 24) = 2958LL;
  WdLogEvent5_WdLowResource(v19);
LABEL_14:
  ExReleasePushLockExclusiveEx(v4 + 480, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v4 + 320));
  return v8;
}
