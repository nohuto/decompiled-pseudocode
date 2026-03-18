/*
 * XREFs of ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C00663F0
 * Callers:
 *     ?VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x1C00250D0 (-VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C00608C0 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00609D8 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00626E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0066340 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C006ACA0 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007643C (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A8B5C (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C00AE620 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@.c)
 * Callees:
 *     VidSchSubmitWaitFromCpu @ 0x1C00021B0 (VidSchSubmitWaitFromCpu.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x1C00024CC (VidSchIsMonitoredFenceSignaled.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 */

void __fastcall VIDMM_GLOBAL::WaitForFences(
        VIDMM_GLOBAL *this,
        struct _VIDSCH_SYNC_OBJECT **a2,
        char *a3,
        unsigned int a4,
        char *a5)
{
  char *v5; // rdi
  __int64 v6; // rbx
  VIDMM_GLOBAL *v9; // r12
  __int64 v10; // r14
  __int64 v11; // rsi
  _BYTE *PoolWithTag; // rax
  char *v13; // r12
  _BYTE *v14; // rax
  size_t v15; // r14
  char *v16; // r8
  signed __int64 v17; // r15
  signed __int64 v18; // r13
  unsigned __int64 v19; // rdx
  unsigned int v20; // ebx
  unsigned __int64 *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rcx
  PRKEVENT Event; // [rsp+50h] [rbp-71h] BYREF
  PVOID P; // [rsp+58h] [rbp-69h]
  _BYTE v26[16]; // [rsp+60h] [rbp-61h] BYREF
  int v27; // [rsp+70h] [rbp-51h]
  VIDMM_GLOBAL *v28; // [rsp+78h] [rbp-49h]
  int v29; // [rsp+80h] [rbp-41h] BYREF
  __int64 v30; // [rsp+88h] [rbp-39h]
  __int64 v31; // [rsp+90h] [rbp-31h]
  int v32; // [rsp+98h] [rbp-29h]
  __int128 v33; // [rsp+A0h] [rbp-21h]
  PVOID v34; // [rsp+B0h] [rbp-11h]
  _BYTE v35[16]; // [rsp+B8h] [rbp-9h] BYREF
  int v36; // [rsp+C8h] [rbp+7h]

  v5 = a5;
  v6 = a4;
  v28 = this;
  Event = 0LL;
  v9 = this;
  v34 = 0LL;
  LODWORD(v10) = a4;
  v36 = 0;
  P = 0LL;
  v27 = 0;
  if ( !a5 || *((_BYTE *)this + 4616) )
    goto LABEL_23;
  v11 = a4;
  if ( a4 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a4 < 8 )
    {
      v13 = 0LL;
      goto LABEL_9;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * a4, 0x38616956u);
  }
  else
  {
    PoolWithTag = v35;
  }
  v34 = PoolWithTag;
  v36 = v6;
  if ( PoolWithTag && (_DWORD)v6 )
    memset(PoolWithTag, 0, 8 * v6);
  v13 = (char *)v34;
LABEL_9:
  if ( (unsigned int)v6 <= 2 )
  {
    v14 = v26;
    v15 = 8 * v6;
    goto LABEL_11;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v6 >= 8 )
  {
    v15 = 8 * v6;
    v14 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v6, 0x38616956u);
LABEL_11:
    P = v14;
    v27 = v6;
    if ( v14 && (_DWORD)v6 )
      memset(v14, 0, v15);
    v16 = (char *)P;
    goto LABEL_15;
  }
  v16 = 0LL;
LABEL_15:
  if ( !v13 || !v16 )
    goto LABEL_33;
  v10 = 0LL;
  if ( (_DWORD)v6 )
  {
    v17 = a3 - a5;
    v18 = (char *)a2 - a5;
    do
    {
      v19 = *(_QWORD *)&v5[v17];
      if ( *(_QWORD *)v5 <= v19 || *(_QWORD *)v5 - v19 < 0x7FFFFFFF )
      {
        v23 = 8 * v10;
        v10 = (unsigned int)(v10 + 1);
        *(_QWORD *)&v13[v23] = v19;
        *(_QWORD *)&v16[v23] = *(_QWORD *)&v5[v18];
      }
      v5 += 8;
      --v11;
    }
    while ( v11 );
  }
  a3 = (char *)v34;
  a2 = (struct _VIDSCH_SYNC_OBJECT **)P;
  v9 = v28;
LABEL_23:
  v20 = 0;
  if ( !(_DWORD)v10 )
    goto LABEL_24;
  v21 = (unsigned __int64 *)a3;
  while ( 1 )
  {
    v22 = *(unsigned __int64 *)((char *)v21 + (char *)a2 - a3);
    if ( v22 )
    {
      if ( !VidSchIsMonitoredFenceSignaled(v22, *v21) )
        break;
    }
    ++v20;
    ++v21;
    if ( v20 >= (unsigned int)v10 )
      goto LABEL_24;
  }
  v29 = 48;
  v30 = 0LL;
  v32 = 512;
  v31 = 0LL;
  v33 = 0LL;
  if ( (int)ObCreateObject(0LL, ExEventObjectType, &v29, 0LL, 0LL, 24, 0, 0, &Event) >= 0 )
  {
    KeInitializeEvent(Event, SynchronizationEvent, 0);
    ObfReferenceObject(Event);
    if ( (int)VidSchSubmitWaitFromCpu(
                v10,
                (__int64)a2,
                (__int64)a3,
                (__int64)Event,
                0,
                1,
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 528LL) + 240LL),
                0LL) < 0 )
      ObfDereferenceObject(Event);
    else
      KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
  }
LABEL_33:
  if ( Event )
    ObfDereferenceObject(Event);
LABEL_24:
  if ( P != v26 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v27 = 0;
  if ( v34 != v35 )
  {
    if ( v34 )
      ExFreePoolWithTag(v34, 0);
  }
}
