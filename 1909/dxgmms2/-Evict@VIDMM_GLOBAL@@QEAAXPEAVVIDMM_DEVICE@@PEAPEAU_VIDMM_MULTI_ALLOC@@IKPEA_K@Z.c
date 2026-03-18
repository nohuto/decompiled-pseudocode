/*
 * XREFs of ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C0063180
 * Callers:
 *     ?VidMmEvict@@YAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C0001D90 (-VidMmEvict@@YAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C00B16A4 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B50 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002BD0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pq @ 0x1C00261CC (McTemplateK0pq.c)
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C00632D4 (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00641C0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

void __fastcall VIDMM_GLOBAL::Evict(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_ALLOC **a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  struct _VIDMM_MULTI_ALLOC **v6; // rdi
  __int64 v7; // rbx
  const GUID *v9; // r8
  struct _VIDMM_MULTI_ALLOC **i; // r15
  struct _VIDMM_MULTI_ALLOC *v11; // rbx
  __int64 v12; // rbp
  struct _KTHREAD **v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // r8
  bool v16; // r9
  __int64 v17; // [rsp+20h] [rbp-78h]
  _QWORD v18[10]; // [rsp+30h] [rbp-68h] BYREF

  v6 = a3;
  v7 = a4;
  VIDMM_DEVICE::UnreferenceAllocationList(a2, a3, a4, a6);
  for ( i = &v6[v7]; v6 != i; ++v6 )
  {
    v11 = *v6;
    v12 = **(_QWORD **)*v6;
    if ( (a5 & 2) != 0 )
    {
      DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v12 + 320));
      v13 = *(struct _KTHREAD ***)(v12 + 320);
      *(_BYTE *)(v12 + 98) = 1;
      DXGFASTMUTEX::Release(v13);
    }
    v14 = *((_BYTE *)v11 + 25) & 1;
    if ( !((unsigned int)v14 | *((_DWORD *)v11 + 38)) && !*((_DWORD *)v11 + 39) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 41);
      memset(v18, 0, sizeof(v18));
      v15 = (_QWORD *)*((_QWORD *)v11 + 1);
      LODWORD(v18[0]) = 207;
      v18[2] = v11;
      LODWORD(v18[4]) = a5;
      v16 = dword_1C004E3F8 || (*(_DWORD *)(v15[1] + 104LL) & 1) != 0;
      VIDMM_GLOBAL::QueueDeferredCommand(
        this,
        (struct VIDMM_PAGING_QUEUE *)(v15[10] + 176LL * (*(_DWORD *)(v12 + 76) & 0x3F)),
        (struct _VIDMM_DEFERRED_COMMAND *)v18,
        v16,
        0LL);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    {
      LODWORD(v17) = *((_DWORD *)v11 + 38);
      McTemplateK0pq(v14, &EventVidMmEvict, v9, v11, v17);
    }
  }
}
