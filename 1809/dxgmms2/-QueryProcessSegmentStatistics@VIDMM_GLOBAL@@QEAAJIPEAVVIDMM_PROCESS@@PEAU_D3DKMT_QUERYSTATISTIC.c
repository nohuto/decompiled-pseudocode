/*
 * XREFs of ?QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION@@@Z @ 0x1C00275E8
 * Callers:
 *     ?VidMmQueryProcessSegmentStatistics@@YAJPEAVVIDMM_GLOBAL@@IPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION@@@Z @ 0x1C0024EC0 (-VidMmQueryProcessSegmentStatistics@@YAJPEAVVIDMM_GLOBAL@@IPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYS.c)
 * Callees:
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C006FD50 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C0070920 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C0070948 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?GetProcessWorkingSetInformation@VIDMM_PROCESS@@QEAAXPEAVVIDMM_SEGMENT@@PEA_K1@Z @ 0x1C00B2258 (-GetProcessWorkingSetInformation@VIDMM_PROCESS@@QEAAXPEAVVIDMM_SEGMENT@@PEA_K1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryProcessSegmentStatistics(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_PROCESS *a3,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION *a4)
{
  unsigned int v5; // eax
  unsigned int v6; // r8d
  VIDMM_PROCESS *v7; // r10
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  VIDMM_PROCESS *v11; // r10
  struct _VIDMM_PROCESS_COMMITMENT_INFO *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r9
  struct VIDMM_SEGMENT *v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rcx
  unsigned __int64 v18; // r9
  unsigned __int64 v20[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 >= *(_DWORD *)(*((_QWORD *)this + 5023) + 24LL) )
    return 3221225485LL;
  v5 = VIDMM_GLOBAL::AdapterId(this);
  CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(v7, v5, v6);
  v12 = CommitmentInformation;
  if ( !CommitmentInformation )
    return 3221225485LL;
  v13 = *(_QWORD *)(v10 + 3712);
  v14 = 5LL;
  v15 = *(struct VIDMM_SEGMENT **)(v13 + 8 * v9);
  v16 = CommitmentInformation - a4;
  *((_DWORD *)a4 + 8) = *((_DWORD *)CommitmentInformation + 14);
  *((_QWORD *)a4 + 16) = *((_QWORD *)CommitmentInformation + 19);
  *((_DWORD *)a4 + 30) = *((_DWORD *)CommitmentInformation + 36);
  *((_QWORD *)a4 + 17) = *((_QWORD *)CommitmentInformation + 20);
  v17 = (_QWORD *)((char *)a4 + 48);
  do
  {
    *v17 = *(_QWORD *)((char *)v17 + v16 + 24);
    *((_DWORD *)v17 - 2) = *(_DWORD *)((char *)v17 + v16 + 16);
    v17 += 2;
    --v14;
  }
  while ( v14 );
  VIDMM_PROCESS::GetProcessWorkingSetInformation(v11, v15, &v21, v20);
  v18 = v21;
  *((_QWORD *)a4 + 2) = v20[0];
  *((_QWORD *)a4 + 1) = v18;
  *((_QWORD *)a4 + 18) = (int)VIDMM_POLICY::IsActive((struct _VIDMM_PROCESS_COMMITMENT_INFO *)((char *)v12 + 168));
  *(_QWORD *)a4 = *((_QWORD *)v12 + 2);
  *((_DWORD *)a4 + 6) = *((_DWORD *)v12 + 45);
  return 0LL;
}
