/*
 * XREFs of ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1C00AB5C4
 * Callers:
 *     VidMmQueryVideoMemoryInfo @ 0x1C00253D0 (VidMmQueryVideoMemoryInfo.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002A3C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1C00B2574 (-QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryVideoMemoryInfo(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        unsigned int a3,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  __int64 v9; // rbx
  __int64 v12; // rax
  unsigned int VideoMemoryInfo; // ebx
  _BYTE v15[32]; // [rsp+60h] [rbp-28h] BYREF

  v9 = a3;
  if ( a3 < *((_DWORD *)this + 1748) )
  {
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v15, (VIDMM_GLOBAL *)((char *)this + 40968));
    VideoMemoryInfo = VIDMM_PROCESS::QueryVideoMemoryInfo(
                        a2,
                        this,
                        *(_DWORD *)(*((_QWORD *)this + 3) + 208LL),
                        v9,
                        a4,
                        a5,
                        a6,
                        a7,
                        a8,
                        0LL,
                        0LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
    return VideoMemoryInfo;
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(this, a2);
    *(_QWORD *)(v12 + 24) = v9;
    WdLogEvent5_WdWarning(v12);
    return 3221225485LL;
  }
}
