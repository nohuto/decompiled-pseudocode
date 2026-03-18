/*
 * XREFs of ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C0014DFC
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C007A0A0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1C00CC110 (VidSchSetPagingNodePageDirectory.c)
 *     VidSchiSetPagingHwContextPageDirectory @ 0x1C00CCB50 (VidSchiSetPagingHwContextPageDirectory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::DdiSetRootPageTable(ADAPTER_RENDER *this, struct _DXGKARG_SETROOTPAGETABLE *a2)
{
  ((void (__fastcall **)(__int64, struct _DXGKARG_SETROOTPAGETABLE *))DxgCoreInterface)[49]((__int64)this, a2);
}
