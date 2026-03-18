/*
 * XREFs of ?NotifyTreeDirtyRegion@COverlayRenderTargetEngine@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x1801A4C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COverlayRenderTargetEngine::NotifyTreeDirtyRegion(
        COverlayRenderTargetEngine *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  __int64 v3; // rbx

  v3 = *((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = a3;
  if ( a3 )
    (**(void (__fastcall ***)(const struct CDirtyRegion *, const struct CVisualTree *))a3)(a3, a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64, const struct CVisualTree *))(*(_QWORD *)v3 + 8LL))(v3, a2);
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 9) + 64LL))((char *)this - 72, 0LL, 0LL);
}
