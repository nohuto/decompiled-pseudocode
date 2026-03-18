/*
 * XREFs of ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C006CD34
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006C610 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     McTemplateK0p @ 0x1C0025AA4 (McTemplateK0p.c)
 *     McTemplateK0pqt @ 0x1C0026358 (McTemplateK0pqt.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0080098 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00ABA18 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceAllocationForPreparation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        GUID *a3)
{
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-18h]
  __int64 v11; // [rsp+28h] [rbp-10h]

  v6 = **(_QWORD **)a2;
  if ( *(_WORD *)(*(_QWORD *)(v6 + 504) + 4LL) )
    *(_DWORD *)(v6 + 76) &= ~0x1000000u;
  v7 = *(_DWORD *)(v6 + 128);
  if ( !v7 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqt((__int64)this, (__int64)a2, a3, a2, 0, 1);
    *((_QWORD *)this + 921) += *(_QWORD *)(v6 + 16);
    ++*((_DWORD *)this + 1840);
    v8 = *(_DWORD *)(v6 + 76);
    if ( (v8 & 0x1000000) != 0 )
      *(_DWORD *)(v6 + 76) = v8 | 0x2000000;
    return 3221225473LL;
  }
  if ( v7 == 1 )
  {
    if ( (*(_DWORD *)(v6 + 76) & 0x1000000) != 0 )
      goto LABEL_22;
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqt((__int64)this, (__int64)a2, a3, a2, 1, 1);
    *((_QWORD *)this + 913) += *(_QWORD *)(v6 + 16);
    ++*((_DWORD *)this + 1824);
    VIDMM_SEGMENT::ReclaimResource(*(VIDMM_SEGMENT **)(v6 + 136), (struct _VIDMM_GLOBAL_ALLOC *)v6);
    LOBYTE(a3->Data1) = 1;
  }
  if ( (*(_DWORD *)(v6 + 76) & 0x1000000) != 0 )
  {
LABEL_22:
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v11) = 1;
      LODWORD(v10) = 4;
      McTemplateK0pqt((__int64)this, (__int64)a2, a3, a2, v10, v11);
    }
    *((_QWORD *)this + 915) += *(_QWORD *)(v6 + 16);
    ++*((_DWORD *)this + 1828);
    *(_DWORD *)(v6 + 76) |= 0x2000000u;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0p((__int64)this, &EventMigrateAllocation, a3, v6);
    VIDMM_GLOBAL::EvictAllocation(this, a2);
    return 3221225473LL;
  }
  return 0LL;
}
