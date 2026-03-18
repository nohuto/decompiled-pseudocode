/*
 * XREFs of ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C005FAA4
 * Callers:
 *     ?ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z @ 0x1C005F630 (-ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C007D0E8 (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0081410 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C00815C8 (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 * Callees:
 *     McTemplateK0xxpqhu @ 0x1C00279B0 (McTemplateK0xxpqhu.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(
        VIDMM_PROCESS_ADAPTER_INFO *this,
        __int64 a2,
        const GUID *a3)
{
  unsigned int i; // ebx
  unsigned int v5; // ebp
  _QWORD *v6; // rsi

  if ( bTracingEnabled )
  {
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 6992LL); ++i )
    {
      v5 = 0;
      v6 = (_QWORD *)(*((_QWORD *)this + 6) + 296LL * i + 136);
      do
      {
        if ( v6[3] != *v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          McTemplateK0xxpqhu(*(_QWORD *)this, &EventVidMmProcessUsageChange, a3);
        ++v5;
        ++v6;
      }
      while ( v5 < 3 );
    }
  }
}
