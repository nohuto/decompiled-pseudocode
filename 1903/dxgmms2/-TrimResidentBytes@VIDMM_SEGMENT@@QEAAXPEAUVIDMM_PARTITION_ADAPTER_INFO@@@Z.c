/*
 * XREFs of ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C006C85C
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006C900 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C006C8B4 (-VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00AE038 (-NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 */

void __fastcall VIDMM_SEGMENT::TrimResidentBytes(VIDMM_SEGMENT *this, struct VIDMM_PARTITION_ADAPTER_INFO *a2)
{
  VIDMM_SEGMENT *v4; // rbx
  char *v5; // r14
  VIDMM_GLOBAL *v6; // rcx

  if ( (*((_DWORD *)this + 20) & 0x1001) != 0 && !VIDMM_GLOBAL::VerifyGlobalResidentLimit(this, a2) )
  {
    v4 = (VIDMM_SEGMENT *)*((_QWORD *)this + 22);
    while ( v4 != (VIDMM_SEGMENT *)((char *)this + 176) )
    {
      v5 = (char *)v4 - 384;
      v4 = *(VIDMM_SEGMENT **)v4;
      if ( *((struct VIDMM_PARTITION_ADAPTER_INFO **)v5 + 61) == a2 )
      {
        (*(void (__fastcall **)(VIDMM_SEGMENT *, char *, _QWORD, _QWORD))(*(_QWORD *)this + 24LL))(
          this,
          v5,
          *((_QWORD *)v5 + 19),
          *((_QWORD *)v5 + 2));
        VIDMM_GLOBAL::NotifyAllocationReclaimed(*((VIDMM_GLOBAL **)this + 1), (struct _VIDMM_GLOBAL_ALLOC *)v5, 0);
        if ( VIDMM_GLOBAL::VerifyGlobalResidentLimit(v6, a2) )
          break;
      }
    }
  }
}
