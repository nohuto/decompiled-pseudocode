/*
 * XREFs of ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00ACC8C
 * Callers:
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00AFBBC (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 *     ?VidMmProbeForDecommit@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@@Z @ 0x1C00B1B1C (-VidMmProbeForDecommit@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_T.c)
 * Callees:
 *     ?IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00ACD40 (-IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

char __fastcall VIDMM_GLOBAL::IsAllocationDecommitCandidate(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx

  v3 = *((_QWORD *)a2 + 63);
  if ( *(_WORD *)(v3 + 4) < 2u )
  {
    v4 = WdLogNewEntry5_WdWarning(this, a2);
    *(_QWORD *)(v4 + 24) = 1LL;
LABEL_12:
    WdLogEvent5_WdWarning(v4);
    return 0;
  }
  if ( (*((_DWORD *)a2 + 23) & 2) == 0 )
  {
    v4 = WdLogNewEntry5_WdWarning(this, a2);
    *(_QWORD *)(v4 + 24) = 2LL;
    goto LABEL_12;
  }
  if ( (*(_DWORD *)v3 & 0x30) != 0 )
  {
    v4 = WdLogNewEntry5_WdWarning(this, a2);
    *(_QWORD *)(v4 + 24) = 3LL;
    goto LABEL_12;
  }
  if ( !a3 || VIDMM_GLOBAL::IsAllocationRepurposed(this, a2) )
    return 1;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v5) + 24) = 5LL;
  return 0;
}
