/*
 * XREFs of VidSchiCheckPendingDeviceCommand @ 0x1C00070E0
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0005960 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0006430 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C0008E90 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000AEB0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000BB50 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N5@Z @ 0x1C000F820 (-VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C001306C (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C0015EB0 (VidSchiCompleteSignalCommmand.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00166A8 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C002DFD0 (VidSchiExecutePostPresentAtPassiveLevel.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034BD8 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00352D0 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0035378 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1C00365B0 (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00018C0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0015098 (VidSchiCheckConditionDeviceCommand.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0015824 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0025834 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     McTemplateK0px @ 0x1C002D084 (McTemplateK0px.c)
 */

void __fastcall VidSchiCheckPendingDeviceCommand(_QWORD *a1)
{
  __int64 v1; // rbx
  VIDMM_GLOBAL *v3; // rbp
  __int64 v4; // rcx
  _QWORD **v5; // rbx
  _QWORD *v6; // r9
  __int64 v7; // rdx
  _QWORD *v8; // rsi
  _QWORD *v9; // r14
  __int64 v10; // r11
  __int64 v11; // r8
  unsigned int v12; // r9d
  unsigned int v13; // edx
  __int64 v14; // r10
  __int64 v15; // rcx
  unsigned int v16; // r9d
  _QWORD *v17; // r15
  __int64 v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // r13
  _QWORD *v21; // rcx
  __int64 *v22; // r12
  _QWORD *v23; // rax
  void **v24; // rcx
  bool v25; // zf
  _QWORD *v26; // r9
  char *v27; // rcx
  char *v28; // rcx
  __int64 v29; // rax
  __int64 *v30; // r9
  __int64 *v31; // r13
  __int64 **v32; // rcx
  struct VIDMM_ALLOC *v33; // r9
  _QWORD *v34; // rsi
  _QWORD *v35; // r9
  __int64 v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // r15
  __int64 v39; // r10
  _QWORD *v40; // r10
  _QWORD *v41; // rcx
  __int64 v42; // rax
  __int64 **v43; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v45; // [rsp+80h] [rbp+8h]

  v1 = a1[4];
  v3 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v1 + 8) + 552LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1680), &LockHandle);
  v5 = (_QWORD **)(v1 + 1712);
  v6 = *v5;
  if ( *v5 != v5 )
  {
    do
    {
      v34 = (_QWORD *)*v6;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v4, v6 - 25) )
      {
        v36 = *v35;
        if ( *(_QWORD **)(*v35 + 8LL) != v35 )
          goto LABEL_34;
        v37 = (_QWORD *)v35[1];
        if ( (_QWORD *)*v37 != v35 )
          goto LABEL_34;
        *v37 = v36;
        *(_QWORD *)(v36 + 8) = v37;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v35 - 24), (struct VIDMM_ALLOC *)(v35 - 25));
      }
      v6 = v34;
    }
    while ( v34 != v5 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v8 = (_QWORD *)a1[163];
  while ( v8 != a1 + 163 )
  {
    v9 = v8;
    v10 = 0LL;
    v8 = (_QWORD *)*v8;
    v11 = v9[2];
    if ( v11 > a1[162] )
    {
      v12 = *((_DWORD *)v9 + 16);
      v13 = 0;
      if ( v12 )
      {
        v14 = v9[3];
        do
        {
          v15 = *(_QWORD *)(v14 + 16LL * v13);
          if ( v15 )
          {
            if ( *(_QWORD *)(v15 + 160) < *(_QWORD *)(v14 + 16LL * v13 + 8) )
              return;
          }
        }
        while ( ++v13 < v12 );
      }
      v7 = *((unsigned int *)v9 + 32);
      v16 = 0;
      if ( (_DWORD)v7 )
      {
        v38 = v9[9];
        do
        {
          v39 = *(_QWORD *)(v38 + 24LL * v16);
          if ( v39 )
          {
            v40 = (_QWORD *)(v39 + 64);
            v41 = (_QWORD *)(v38 + 8 * (3LL * v16 + 1));
            do
            {
              if ( *v40 < *v41 )
                return;
              ++v10;
              v40 += 3;
              ++v41;
            }
            while ( v10 < 2 );
            v10 = 0LL;
          }
          ++v16;
        }
        while ( v16 < (unsigned int)v7 );
      }
      a1[162] = v11;
    }
    v17 = (_QWORD *)v9[19];
    if ( v17 != v9 + 19 )
    {
      while ( 1 )
      {
        v18 = *v17;
        v19 = v17 - 27;
        v20 = v17;
        v45 = v17 - 27;
        v17 = (_QWORD *)v18;
        if ( *(_QWORD **)(v18 + 8) != v20 )
          break;
        v21 = (_QWORD *)v20[1];
        if ( (_QWORD *)*v21 != v20 )
          break;
        *v21 = v18;
        *(_QWORD *)(v18 + 8) = v21;
        VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v19);
        *v20 = 0LL;
        v45[28] = 0LL;
        if ( v17 == v9 + 19 )
          goto LABEL_16;
      }
LABEL_34:
      __fastfail(3u);
    }
LABEL_16:
    v22 = (__int64 *)v9[17];
    while ( v22 != v9 + 17 )
    {
      v29 = *v22;
      v30 = v22 - 25;
      v31 = v22;
      v22 = (__int64 *)v29;
      if ( *(__int64 **)(v29 + 8) != v31 )
        goto LABEL_34;
      v32 = (__int64 **)v31[1];
      if ( *v32 != v31 )
        goto LABEL_34;
      *v32 = (__int64 *)v29;
      *(_QWORD *)(v29 + 8) = v32;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v32, v30) )
      {
        VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v3, v33);
      }
      else
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1[4] + 1680LL), &LockHandle);
        v42 = a1[4] + 1712LL;
        v43 = *(__int64 ***)(a1[4] + 1720LL);
        if ( *v43 != (__int64 *)v42 )
          goto LABEL_34;
        v31[1] = (__int64)v43;
        *v31 = v42;
        *v43 = v31;
        *(_QWORD *)(v42 + 8) = v31;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
    v23 = (_QWORD *)*v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_34;
    v24 = (void **)v9[1];
    if ( *v24 != v9 )
      goto LABEL_34;
    v25 = bTracingEnabled == 0;
    *v24 = v23;
    v23[1] = v24;
    if ( !v25 )
    {
      v26 = (_QWORD *)a1[1];
      if ( !v26 )
        v26 = a1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0px(v24, v7, v11, v26, v9[2]);
    }
    v27 = (char *)v9[9];
    if ( v27 != (char *)(v9 + 10) && v27 )
      ExFreePoolWithTag(v27, 0);
    v9[9] = 0LL;
    *((_DWORD *)v9 + 32) = 0;
    v28 = (char *)v9[3];
    if ( v28 != (char *)(v9 + 4) )
    {
      if ( v28 )
        ExFreePoolWithTag(v28, 0);
    }
    v9[3] = 0LL;
    *((_DWORD *)v9 + 16) = 0;
    ExFreePoolWithTag(v9, 0);
  }
}
