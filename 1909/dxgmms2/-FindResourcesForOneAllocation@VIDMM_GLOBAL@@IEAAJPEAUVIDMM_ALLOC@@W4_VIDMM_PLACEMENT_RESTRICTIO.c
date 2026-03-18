/*
 * XREFs of ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NI_K@Z @ 0x1C006C4AC
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006C610 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C00261CC (McTemplateK0pq.c)
 *     ?AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@KK@Z @ 0x1C006C110 (-AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM.c)
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@EI_K@Z @ 0x1C0080F90 (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FindResourcesForOneAllocation(
        __int64 a1,
        __int64 **a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  const GUID *v13; // r8
  int v14; // esi
  int v15; // edx
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // [rsp+20h] [rbp-28h]

  v9 = **a2;
  if ( a6 != -1 || (v10 = *(_DWORD *)(v9 + 72)) == 0 )
  {
LABEL_9:
    v11 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(a1, v9, a3, 0LL, a5, a6);
    goto LABEL_6;
  }
  if ( !(_BYTE)a4 || (v10 & 0x1F) == 0 && (v10 & 0x7C0) == 0 )
  {
    v14 = VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(a1, **a2, a3, a4, 4u);
    if ( v14 >= 0 )
      goto LABEL_7;
    goto LABEL_9;
  }
  v11 = VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(a1, **a2, a3, a4, 1u);
LABEL_6:
  v14 = v11;
LABEL_7:
  v15 = *(_DWORD *)(v9 + 76);
  if ( (v15 & 0x2000000) != 0 && v14 >= 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 224) + 80LL) & 0x1001) == 0 || (v15 & 0x400) != 0 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v19) = 0;
        McTemplateK0pq(v12, &EventCompleteAllocationMigration, v13, v9, v19);
      }
      *(_QWORD *)(a1 + 7704) += *(_QWORD *)(v9 + 16);
      ++*(_DWORD *)(a1 + 7696);
      ++*(_DWORD *)(a1 + 41380);
    }
    else
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v19) = -1073741823;
        McTemplateK0pq(v12, &EventCompleteAllocationMigration, v13, v9, v19);
      }
      v17 = *(_QWORD *)(v9 + 16);
      ++*(_DWORD *)(a1 + 7712);
      *(_QWORD *)(a1 + 7720) += v17;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
      v18[3] = a2;
      v18[4] = *(_QWORD *)(v9 + 136);
      v18[5] = *(_QWORD *)(v9 + 224);
    }
    *(_DWORD *)(v9 + 76) &= 0xFCFFFFFF;
  }
  return (unsigned int)v14;
}
