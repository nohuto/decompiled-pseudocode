/*
 * XREFs of ?QueryProcessSegmentGroupStatistics@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION@@@Z @ 0x1C0027520
 * Callers:
 *     ?VidMmQueryProcessSegmentGroupStatistics@@YAJPEAVVIDMM_GLOBAL@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION@@@Z @ 0x1C0024EA0 (-VidMmQueryProcessSegmentGroupStatistics@@YAJPEAVVIDMM_GLOBAL@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@P.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002A3C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C0070948 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1C00B2574 (-QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryProcessSegmentGroupStatistics(
        VIDMM_GLOBAL *this,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a2,
        struct VIDMM_PROCESS *a3,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION *a4)
{
  unsigned int v8; // eax
  unsigned __int64 *v9; // r10
  unsigned __int64 *v10; // r11
  unsigned int v11; // ebx
  unsigned __int64 v13; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp-30h] BYREF
  _BYTE v15[32]; // [rsp+70h] [rbp-28h] BYREF

  if ( (unsigned int)a2 > D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL )
    return 3221225485LL;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v15, (VIDMM_GLOBAL *)((char *)this + 40968));
  v8 = VIDMM_GLOBAL::AdapterId(this);
  v11 = VIDMM_PROCESS::QueryVideoMemoryInfo(
          a3,
          this,
          v8,
          0,
          a2,
          (unsigned __int64 *)a4,
          (unsigned __int64 *)a4 + 1,
          &v14,
          &v13,
          v10,
          v9);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v11;
}
