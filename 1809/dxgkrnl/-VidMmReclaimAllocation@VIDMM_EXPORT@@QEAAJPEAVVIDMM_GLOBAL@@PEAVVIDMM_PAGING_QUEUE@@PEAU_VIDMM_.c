/*
 * XREFs of ?VidMmReclaimAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00216A4
 * Callers:
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C0105F90 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FF18 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmReclaimAllocation(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct _VIDMM_MULTI_ALLOC *a4,
        unsigned __int64 *a5,
        enum _D3DDDI_RECLAIM_RESULT *a6)
{
  struct _KTHREAD **Current; // rax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v14, Current);
  v11 = (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct VIDMM_PAGING_QUEUE *, struct _VIDMM_MULTI_ALLOC *, unsigned __int64 *, enum _D3DDDI_RECLAIM_RESULT *))(*((_QWORD *)this + 1) + 672LL))(
          a2,
          a3,
          a4,
          a5,
          a6);
  if ( v14 )
  {
    v12 = v14 + 144;
    *(_QWORD *)(v14 + 152) = 0LL;
    ExReleasePushLockExclusiveEx(v12, 0LL);
    KeLeaveCriticalRegion();
  }
  return v11;
}
