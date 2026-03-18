/*
 * XREFs of ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C006E8AC
 * Callers:
 *     ?VidMmMapPagingProcessGpuVA@@YAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@IPEA_K@Z @ 0x1C00104B0 (-VidMmMapPagingProcessGpuVA@@YAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@IPEA_K@Z.c)
 *     ?VidMmMapGpuVA@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI@Z @ 0x1C00104F0 (-VidMmMapGpuVA@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C008CB40 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ @ 0x1C00B0244 (-MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001E20 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C006E96C (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 */

int __fastcall VIDMM_GLOBAL::MapGpuVA(
        struct VIDMM_DEVICE **this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_PROCESS *a3,
        VIDMM_FENCE_STORAGE_PAGE **a4,
        unsigned __int64 *a5,
        unsigned int a6,
        bool a7)
{
  struct VIDMM_DEVICE *v8; // rdi
  __int64 v10; // r8

  v8 = a2;
  if ( !a7 )
  {
    if ( !a3 )
    {
      if ( DXGPROCESS::GetCurrent() && (v10 = *((_QWORD *)DXGPROCESS::GetCurrent() + 9)) != 0 )
        a3 = *(struct VIDMM_PROCESS **)(v10 + 8);
      else
        a3 = 0LL;
    }
    return VIDMM_FENCE_STORAGE_PAGE::MapGpuVA(
             *a4,
             (struct VIDMM_GLOBAL *)this,
             v8,
             a3,
             (struct VIDMM_MONITORED_FENCE_STORAGE *)a4,
             a5,
             a6,
             a7);
  }
  if ( *(_BYTE *)(*((_QWORD *)this[2] + 66) + 55LL) )
  {
    a3 = this[5040];
    if ( !a2 )
      v8 = this[5041];
    return VIDMM_FENCE_STORAGE_PAGE::MapGpuVA(
             *a4,
             (struct VIDMM_GLOBAL *)this,
             v8,
             a3,
             (struct VIDMM_MONITORED_FENCE_STORAGE *)a4,
             a5,
             a6,
             a7);
  }
  *a5 = 0LL;
  return 0;
}
