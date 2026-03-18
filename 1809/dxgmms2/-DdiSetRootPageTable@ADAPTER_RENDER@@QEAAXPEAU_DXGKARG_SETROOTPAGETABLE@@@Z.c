/*
 * XREFs of ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C0015A6C
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0068800 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1C00C966C (VidSchSetPagingNodePageDirectory.c)
 *     VidSchiSetPagingHwContextPageDirectory @ 0x1C00CA0A8 (VidSchiSetPagingHwContextPageDirectory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::DdiSetRootPageTable(ADAPTER_RENDER *this, struct _DXGKARG_SETROOTPAGETABLE *a2)
{
  ((void (__fastcall **)(__int64, struct _DXGKARG_SETROOTPAGETABLE *))DxgCoreInterface)[49]((__int64)this, a2);
}
