/*
 * XREFs of ?QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C0026ED4
 * Callers:
 *     ?VidMmQueryProcessAdapterStatistics@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C00245C0 (-VidMmQueryProcessAdapterStatistics@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYST.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003790 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00037EC (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C005C37C (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C006B1E8 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C006B210 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryProcessAdapterStatistics(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION *a3)
{
  unsigned int v6; // edi
  __int64 v7; // r8
  unsigned int v8; // eax
  unsigned int v9; // r8d
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  int v11; // r8d
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v13, (VIDMM_GLOBAL *)((char *)this + 40968));
  v6 = 0;
  v7 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * VIDMM_GLOBAL::AdapterId(this));
  if ( v7 )
  {
    *(_DWORD *)a3 = *(_DWORD *)(*((_QWORD *)this + 5023) + 24LL);
    *((_QWORD *)a3 + 3) = *(_QWORD *)(v7 + 448);
    *((_DWORD *)a3 + 4) = *(_DWORD *)(v7 + 440);
    *((_DWORD *)a3 + 8) = *(_DWORD *)(v7 + 456);
    *((_DWORD *)a3 + 9) = *(_DWORD *)(v7 + 460);
    *((_QWORD *)a3 + 23) = 1LL;
    *((_QWORD *)a3 + 22) = *(int *)(v7 + 476);
    *((_QWORD *)a3 + 21) = (int)VIDMM_POLICY::IsActive((VIDMM_POLICY *)(v7 + 464));
    memset((char *)a3 + 40, 0, 0x30uLL);
    if ( *(_DWORD *)a3 )
    {
      do
      {
        v8 = VIDMM_GLOBAL::AdapterId(this);
        CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(a2, v8, v9);
        *((_QWORD *)a3 + 5) += *((_QWORD *)CommitmentInformation + 20);
        *((_QWORD *)a3 + 6) += *((_QWORD *)CommitmentInformation + 9);
        *((_QWORD *)a3 + 7) += *((_QWORD *)CommitmentInformation + 11);
        *((_QWORD *)a3 + 8) += *((_QWORD *)CommitmentInformation + 13);
        *((_QWORD *)a3 + 9) += *((_QWORD *)CommitmentInformation + 15);
        *((_QWORD *)a3 + 10) += *((_QWORD *)CommitmentInformation + 17);
      }
      while ( (unsigned int)(v11 + 1) < *(_DWORD *)a3 );
    }
  }
  else
  {
    v6 = -1073741811;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v6;
}
