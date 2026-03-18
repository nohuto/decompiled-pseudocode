/*
 * XREFs of ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C006CCF4
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006C610 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0083C78 (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB9D0 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p @ 0x1C0025AA4 (McTemplateK0p.c)
 */

void __fastcall VIDMM_GLOBAL::EvictAllAllocationInList(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2, const GUID *a3)
{
  struct _LIST_ENTRY *i; // rdi
  char *p_Blink; // rbp
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v7; // rbx
  __int64 v8; // rcx
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *Blink; // rcx
  int v11; // [rsp+20h] [rbp-28h]

  for ( i = a2->Flink; i != a2; *((_QWORD *)p_Blink + 42) = 0LL )
  {
    p_Blink = (char *)&i[-21].Blink;
    Flink = i[-12].Flink;
    v7 = i;
    i = i->Flink;
    LOBYTE(a3) = 1;
    LOBYTE(v11) = 0;
    ((void (__fastcall *)(struct _LIST_ENTRY *, char *, const GUID *, _QWORD, int, _QWORD))Flink->Flink[3].Flink)(
      Flink,
      p_Blink,
      a3,
      0LL,
      v11,
      0LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0p(v8, &EventEvictAllocation, a3, p_Blink);
    v9 = v7->Flink;
    if ( v7->Flink->Blink != v7 || (Blink = v7->Blink, Blink->Flink != v7) )
      __fastfail(3u);
    Blink->Flink = v9;
    v9->Blink = Blink;
    v7->Flink = 0LL;
  }
}
