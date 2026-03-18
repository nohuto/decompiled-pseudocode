/*
 * XREFs of ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0077180
 * Callers:
 *     ?VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x1C0024810 (-VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C005C978 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C0064498 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00645B0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00749D0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0075850 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C00770E0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00AC2E4 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C00B1A04 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x1C0003470 (VidSchIsMonitoredFenceSignaled.c)
 *     VidSchSubmitWaitFromCpu @ 0x1C00034F0 (VidSchSubmitWaitFromCpu.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 */

void __fastcall VIDMM_GLOBAL::WaitForFences(
        VIDMM_GLOBAL *this,
        unsigned __int64 a2,
        const unsigned __int64 *a3,
        unsigned int a4,
        char *a5)
{
  const unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rdi
  unsigned int v8; // r12d
  struct _VIDSCH_SYNC_OBJECT **v9; // r9
  unsigned __int64 v10; // rbx
  struct _VIDSCH_SYNC_OBJECT **v11; // rcx
  unsigned __int64 v12; // rsi
  _BYTE *PoolWithTag; // rax
  char *v14; // r14
  size_t v15; // rbx
  struct _VIDSCH_SYNC_OBJECT **v16; // r11
  signed __int64 v17; // r9
  const unsigned __int64 *v18; // rdx
  unsigned __int64 v19; // r8
  unsigned int v20; // ebx
  unsigned __int64 *v21; // rsi
  signed __int64 v22; // r14
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  int v28; // eax
  char v29; // si
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  char v33; // [rsp+50h] [rbp-91h]
  PRKEVENT Event; // [rsp+58h] [rbp-89h] BYREF
  const unsigned __int64 *v35; // [rsp+60h] [rbp-81h]
  struct _VIDSCH_SYNC_OBJECT **v36; // [rsp+68h] [rbp-79h]
  struct _VIDSCH_SYNC_OBJECT **v37; // [rsp+70h] [rbp-71h]
  _BYTE v38[16]; // [rsp+78h] [rbp-69h] BYREF
  int v39; // [rsp+88h] [rbp-59h]
  unsigned __int64 v40; // [rsp+90h] [rbp-51h]
  const unsigned __int64 *v41; // [rsp+98h] [rbp-49h]
  union _LARGE_INTEGER Interval; // [rsp+A0h] [rbp-41h] BYREF
  _QWORD v43[4]; // [rsp+A8h] [rbp-39h] BYREF
  __int128 v44; // [rsp+C8h] [rbp-19h]
  PVOID P; // [rsp+D8h] [rbp-9h]
  _BYTE v46[16]; // [rsp+E0h] [rbp-1h] BYREF
  int v47; // [rsp+F0h] [rbp+Fh]

  v5 = a3;
  v6 = a4;
  Event = 0LL;
  v8 = a4;
  P = 0LL;
  v47 = 0;
  v9 = 0LL;
  v37 = 0LL;
  v10 = a2;
  v39 = 0;
  v11 = (struct _VIDSCH_SYNC_OBJECT **)a2;
  v41 = a3;
  v40 = a2;
  v35 = a3;
  v36 = (struct _VIDSCH_SYNC_OBJECT **)a2;
  v33 = 1;
  while ( 1 )
  {
    if ( !a5 || *((_BYTE *)this + 4616) )
      goto LABEL_25;
    v12 = v6;
    if ( (unsigned int)v6 > 2 )
    {
      a2 = 0xFFFFFFFFFFFFFFFFuLL % v6;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      {
        v14 = 0LL;
        goto LABEL_10;
      }
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v6, 0x38616956u);
      v9 = v37;
    }
    else
    {
      PoolWithTag = v46;
    }
    P = PoolWithTag;
    v11 = (struct _VIDSCH_SYNC_OBJECT **)PoolWithTag;
    v47 = v6;
    if ( PoolWithTag && (_DWORD)v6 )
    {
      memset(PoolWithTag, 0, 8 * v6);
      v9 = v37;
    }
    v14 = (char *)P;
LABEL_10:
    if ( (unsigned int)v6 <= 2 )
    {
      v9 = (struct _VIDSCH_SYNC_OBJECT **)v38;
      v37 = (struct _VIDSCH_SYNC_OBJECT **)v38;
      v15 = 8 * v6;
      goto LABEL_12;
    }
    a2 = 0xFFFFFFFFFFFFFFFFuLL % v6;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 >= 8 )
    {
      v15 = 8 * v6;
      v9 = (struct _VIDSCH_SYNC_OBJECT **)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v6, 0x38616956u);
      v37 = v9;
LABEL_12:
      v39 = v6;
      if ( v9 && (_DWORD)v6 )
      {
        memset(v9, 0, v15);
        v9 = v37;
      }
      v10 = v40;
      v16 = v9;
      goto LABEL_16;
    }
    v16 = 0LL;
LABEL_16:
    if ( !v14 || !v16 )
    {
      LODWORD(v27) = -1073741801;
      v32 = WdLogNewEntry5_WdAssertion(v11, a2);
      *(_QWORD *)(v32 + 24) = -1073741801LL;
      goto LABEL_55;
    }
    v8 = 0;
    if ( (_DWORD)v6 )
    {
      v17 = (char *)v41 - a5;
      v18 = (const unsigned __int64 *)a5;
      do
      {
        v19 = *(const unsigned __int64 *)((char *)v18 + v17);
        if ( *v18 <= v19 || *v18 - v19 < 0x7FFFFFFF )
        {
          v30 = v8++;
          v31 = v30;
          *(_QWORD *)&v14[v31 * 8] = v19;
          v16[v31] = *(struct _VIDSCH_SYNC_OBJECT **)((char *)v18 + v10 - (_QWORD)a5);
        }
        ++v18;
        --v12;
      }
      while ( v12 );
      v9 = v37;
    }
    v5 = (const unsigned __int64 *)P;
    v11 = v9;
    v35 = (const unsigned __int64 *)P;
    v36 = v9;
LABEL_25:
    v20 = 0;
    if ( !v8 )
      goto LABEL_26;
    v21 = (unsigned __int64 *)v5;
    v22 = (char *)v11 - (char *)v5;
    while ( 1 )
    {
      v23 = *(unsigned __int64 *)((char *)v21 + v22);
      if ( v23 )
      {
        if ( !VidSchIsMonitoredFenceSignaled(v23, *v21) )
          break;
      }
      ++v20;
      ++v21;
      if ( v20 >= v8 )
        goto LABEL_33;
    }
    v43[0] = 48LL;
    v43[3] = 512LL;
    v43[1] = 0LL;
    v43[2] = 0LL;
    v44 = 0LL;
    v24 = ObCreateObject(0LL, ExEventObjectType, v43, 0LL, 0LL, 24, 0, 0, &Event);
    v27 = v24;
    if ( v24 >= 0 )
    {
      KeInitializeEvent(Event, SynchronizationEvent, 0);
      ObfReferenceObject(Event);
      v28 = VidSchSubmitWaitFromCpu(
              v8,
              (__int64)v36,
              (__int64)v35,
              (__int64)Event,
              0,
              1,
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL) + 240LL),
              0LL);
      v27 = v28;
      if ( v28 >= 0 )
      {
        v29 = 0;
        v33 = 0;
        LODWORD(v27) = KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
        goto LABEL_41;
      }
      ObfDereferenceObject(Event);
    }
    v32 = WdLogNewEntry5_WdAssertion(v26, v25);
    *(_QWORD *)(v32 + 24) = v27;
LABEL_55:
    WdLogEvent5_WdAssertion(v32);
    v29 = v33;
LABEL_41:
    if ( Event )
      ObfDereferenceObject(Event);
    if ( (int)v27 >= 0 || !v29 )
      break;
    Interval.QuadPart = 50000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    v9 = v37;
    v5 = v35;
    v11 = v36;
    v10 = v40;
  }
LABEL_33:
  v9 = v37;
LABEL_26:
  if ( v9 != (struct _VIDSCH_SYNC_OBJECT **)v38 && v9 )
    ExFreePoolWithTag(v9, 0);
  v37 = 0LL;
  v39 = 0;
  if ( P != v46 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}
