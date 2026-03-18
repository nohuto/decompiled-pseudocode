/*
 * XREFs of ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00645B0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005FF14 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0062BBC (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C0063570 (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C00639B4 (-CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C006419C (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00749D0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0075850 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0076D70 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@K_K@Z @ 0x1C0084618 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@K_K@Z.c)
 *     ?DelayExecution@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@IPEAVVIDMM_PAGING_QUEUE@@KPEA_K@Z @ 0x1C00AB438 (-DelayExecution@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@IPEAVVIDMM_PAGING_QUEUE@@KPEA_K@Z.c)
 *     ?EvictionTest@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00ABF3C (-EvictionTest@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOB.c)
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00AC234 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00AC2E4 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z @ 0x1C00AF7DC (-SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00B0530 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 *     ?VidMmiUpdateGpuVirtualAddress@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00B2E90 (-VidMmiUpdateGpuVirtualAddress@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C00647F0 (-AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z.c)
 *     ?GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ @ 0x1C0064A14 (-GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0077180 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueueDeferredCommand(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_DEFERRED_COMMAND *a3,
        char a4,
        unsigned __int64 *a5)
{
  struct _VIDSCH_SYNC_OBJECT *v5; // r13
  __int64 v7; // rbx
  struct VIDMM_PAGING_QUEUE **v11; // rbx
  struct VIDMM_PAGING_QUEUE *v12; // r15
  struct VIDMM_PAGING_QUEUE **NewPacket; // rdi
  struct VIDMM_PAGING_QUEUE *v14; // rax
  __int64 v15; // rcx
  __int64 v17; // rbx
  unsigned __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-50h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v20; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-40h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v22; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+98h] [rbp+10h] BYREF

  v5 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)a2 + 11);
  v7 = *((_QWORD *)a2 + 10);
  v23 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7 + 128, 0LL);
  *(_QWORD *)(v7 + 136) = KeGetCurrentThread();
  v11 = (struct VIDMM_PAGING_QUEUE **)((char *)a2 + 16);
  v12 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a2 + 13);
  *((_QWORD *)a2 + 13) = (char *)v12 + 1;
  NewPacket = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 2);
  if ( NewPacket[1] != (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 16)
    || (v14 = *NewPacket, *((struct VIDMM_PAGING_QUEUE ***)*NewPacket + 1) != NewPacket) )
  {
    __fastfail(3u);
  }
  *v11 = v14;
  *((_QWORD *)v14 + 1) = v11;
  v15 = *((_QWORD *)a2 + 10) + 128LL;
  *(_QWORD *)(v15 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v15, 0LL);
  KeLeaveCriticalRegion();
  if ( NewPacket != v11
    || (NewPacket = (struct VIDMM_PAGING_QUEUE **)operator new[](0xA0uLL, 0x38346956u, PagedPool)) != 0LL )
  {
    memset(NewPacket, 0, 0xA0uLL);
    NewPacket[5] = v12;
  }
  if ( !*((_QWORD *)a3 + 1) )
    *((_QWORD *)a3 + 1) = *(_QWORD *)(*((_QWORD *)a3 + 2) + 8LL);
  for ( ; !NewPacket; NewPacket = (struct VIDMM_PAGING_QUEUE **)VIDMM_PAGING_QUEUE::GetNewPacket(a2) )
  {
    v19 = *((_QWORD *)a2 + 12);
    v20 = v5;
    VIDMM_GLOBAL::WaitForFences(this, &v20, &v19, 1u, 0LL);
  }
  *((_WORD *)NewPacket + 12) = 257;
  *((_OWORD *)NewPacket + 3) = *(_OWORD *)a3;
  *((_OWORD *)NewPacket + 4) = *((_OWORD *)a3 + 1);
  *((_OWORD *)NewPacket + 5) = *((_OWORD *)a3 + 2);
  *((_OWORD *)NewPacket + 6) = *((_OWORD *)a3 + 3);
  *((_OWORD *)NewPacket + 7) = *((_OWORD *)a3 + 4);
  if ( a4 )
    NewPacket[9] = (struct VIDMM_PAGING_QUEUE *)&v23;
  if ( *(_DWORD *)a3 == 206 )
  {
    v17 = MEMORY[0xFFFFF78000000320];
    NewPacket[17] = (struct VIDMM_PAGING_QUEUE *)(v17 * KeQueryTimeIncrement());
  }
  VIDMM_PAGING_QUEUE::AppendReadyPacket(a2, (struct VIDMM_PAGING_QUEUE_PACKET *)NewPacket, &v18);
  if ( a4 )
  {
    v21 = v18;
    v22 = v5;
    VIDMM_GLOBAL::WaitForFences(this, &v22, &v21, 1u, 0LL);
  }
  else if ( a5 )
  {
    *a5 = v18;
    return 259LL;
  }
  return v23;
}
