/*
 * XREFs of ?IsAssigned@CDirectFlipInfo@@QEBA_NPEBVCVisual@@PEBVISwapChainContent@@@Z @ 0x180193440
 * Callers:
 *     ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEBVISwapChainContent@@@Z @ 0x180015E3C (-IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEBVISwapChainContent@@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDirectFlipInfo::IsAssigned(
        CDirectFlipInfo *this,
        const struct CVisual *a2,
        const struct ISwapChainContent *a3)
{
  char v3; // bl

  v3 = 0;
  if ( *((_DWORD *)this + 17) != 1 && *((const struct CVisual **)this + 3) == a2 )
    return *((_QWORD *)this + 4) == (*(__int64 (__fastcall **)(const struct ISwapChainContent *))(*(_QWORD *)a3 + 208LL))(a3);
  return v3;
}
