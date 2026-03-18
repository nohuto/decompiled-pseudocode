/*
 * XREFs of VidSchiCheckPendingDeviceCommand @ 0x1C0008190
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0006A10 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00074C0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000A000 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000C010 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000D7B0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C0011D1C (VidSchiProcessDpcSystemRequest.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N6@Z @ 0x1C00130E0 (-VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_H.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00159F8 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C002E13C (VidSchiCompleteSignalCommmand.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00355DC (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035CE0 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0035D8C (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1C0036FEC (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0002CD0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C001401C (VidSchiCheckConditionDeviceCommand.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0014368 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00250B8 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     McTemplateK0px @ 0x1C002D798 (McTemplateK0px.c)
 */

void __fastcall VidSchiCheckPendingDeviceCommand(_QWORD *a1)
{
  __int64 v1; // rbx
  VIDMM_GLOBAL *v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD **v6; // rbx
  _QWORD *v7; // r9
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  _QWORD *v10; // r14
  __int64 v11; // r11
  __int64 v12; // r8
  unsigned int v13; // r9d
  unsigned int v14; // edx
  __int64 v15; // r10
  __int64 v16; // rcx
  unsigned int v17; // r9d
  _QWORD *v18; // r15
  __int64 v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // r13
  _QWORD *v22; // rcx
  __int64 *v23; // r12
  _QWORD *v24; // rax
  void **v25; // rcx
  bool v26; // zf
  _QWORD *v27; // r9
  char *v28; // rcx
  char *v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // r9
  __int64 *v32; // r13
  __int64 **v33; // rcx
  struct VIDMM_ALLOC *v34; // r9
  _QWORD *v35; // rsi
  _QWORD *v36; // r9
  __int64 v37; // rax
  _QWORD *v38; // rcx
  __int64 v39; // r15
  __int64 v40; // r10
  _QWORD *v41; // r10
  _QWORD *v42; // rcx
  __int64 v43; // rax
  __int64 **v44; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v46; // [rsp+80h] [rbp+8h]

  v1 = a1[4];
  v3 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v1 + 8) + 552LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1680), &LockHandle);
  v6 = (_QWORD **)(v1 + 1712);
  v7 = *v6;
  if ( *v6 != v6 )
  {
    do
    {
      v35 = (_QWORD *)*v7;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v4, v7 - 25, v5, v7) )
      {
        v37 = *v36;
        if ( *(_QWORD **)(*v36 + 8LL) != v36 )
          goto LABEL_36;
        v38 = (_QWORD *)v36[1];
        if ( (_QWORD *)*v38 != v36 )
          goto LABEL_36;
        *v38 = v37;
        *(_QWORD *)(v37 + 8) = v38;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v36 - 24), (struct VIDMM_ALLOC *)(v36 - 25));
      }
      v7 = v35;
    }
    while ( v35 != v6 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v9 = (_QWORD *)a1[164];
  while ( v9 != a1 + 164 )
  {
    v10 = v9;
    v11 = 0LL;
    v9 = (_QWORD *)*v9;
    v12 = v10[2];
    if ( v12 > a1[163] )
    {
      v13 = *((_DWORD *)v10 + 16);
      v14 = 0;
      if ( v13 )
      {
        v15 = v10[3];
        do
        {
          v16 = *(_QWORD *)(v15 + 16LL * v14);
          if ( v16 )
          {
            if ( *(_QWORD *)(v16 + 160) < *(_QWORD *)(v15 + 16LL * v14 + 8) )
              return;
          }
        }
        while ( ++v14 < v13 );
      }
      v8 = *((unsigned int *)v10 + 32);
      v17 = 0;
      if ( (_DWORD)v8 )
      {
        v39 = v10[9];
        do
        {
          v40 = *(_QWORD *)(v39 + 24LL * v17);
          if ( v40 )
          {
            v41 = (_QWORD *)(v40 + 64);
            v42 = (_QWORD *)(v39 + 8 * (3LL * v17 + 1));
            do
            {
              if ( *v41 < *v42 )
                return;
              ++v11;
              v41 += 3;
              ++v42;
            }
            while ( v11 < 2 );
            v11 = 0LL;
          }
          ++v17;
        }
        while ( v17 < (unsigned int)v8 );
      }
      a1[163] = v12;
    }
    v18 = (_QWORD *)v10[19];
    if ( v18 != v10 + 19 )
    {
      while ( 1 )
      {
        v19 = *v18;
        v20 = v18 - 27;
        v21 = v18;
        v46 = v18 - 27;
        v18 = (_QWORD *)v19;
        if ( *(_QWORD **)(v19 + 8) != v21 )
          break;
        v22 = (_QWORD *)v21[1];
        if ( (_QWORD *)*v22 != v21 )
          break;
        *v22 = v19;
        *(_QWORD *)(v19 + 8) = v22;
        VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v20);
        *v21 = 0LL;
        v46[28] = 0LL;
        if ( v18 == v10 + 19 )
          goto LABEL_16;
      }
LABEL_36:
      __fastfail(3u);
    }
LABEL_16:
    v23 = (__int64 *)v10[17];
    while ( v23 != v10 + 17 )
    {
      v30 = *v23;
      v31 = v23 - 25;
      v32 = v23;
      v23 = (__int64 *)v30;
      if ( *(__int64 **)(v30 + 8) != v32 )
        goto LABEL_36;
      v33 = (__int64 **)v32[1];
      if ( *v33 != v32 )
        goto LABEL_36;
      *v33 = (__int64 *)v30;
      *(_QWORD *)(v30 + 8) = v33;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v33, v31, v12, v31) )
      {
        VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v3, v34);
      }
      else
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1[4] + 1680LL), &LockHandle);
        v43 = a1[4] + 1712LL;
        v44 = *(__int64 ***)(a1[4] + 1720LL);
        if ( *v44 != (__int64 *)v43 )
          goto LABEL_36;
        v32[1] = (__int64)v44;
        *v32 = v43;
        *v44 = v32;
        *(_QWORD *)(v43 + 8) = v32;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
    v24 = (_QWORD *)*v10;
    if ( *(_QWORD **)(*v10 + 8LL) != v10 )
      goto LABEL_36;
    v25 = (void **)v10[1];
    if ( *v25 != v10 )
      goto LABEL_36;
    v26 = bTracingEnabled == 0;
    *v25 = v24;
    v24[1] = v25;
    if ( !v26 )
    {
      v27 = (_QWORD *)a1[1];
      if ( !v27 )
        v27 = a1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0px(v25, v8, v12, v27, v10[2]);
    }
    v28 = (char *)v10[9];
    if ( v28 != (char *)(v10 + 10) && v28 )
      ExFreePoolWithTag(v28, 0);
    v10[9] = 0LL;
    *((_DWORD *)v10 + 32) = 0;
    v29 = (char *)v10[3];
    if ( v29 != (char *)(v10 + 4) )
    {
      if ( v29 )
        ExFreePoolWithTag(v29, 0);
    }
    v10[3] = 0LL;
    *((_DWORD *)v10 + 16) = 0;
    ExFreePoolWithTag(v10, 0);
  }
}
