/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@CCompositionSurfaceBitmap@@UEAA_NPEAVIRenderTarget@@@Z @ 0x1801C6E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::IsDirectFlipSupportedOnTarget(
        CCompositionSurfaceBitmap *this,
        struct IRenderTarget *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *((_QWORD *)this + 4);
  result = 0LL;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, struct IRenderTarget *))(*(_QWORD *)v2 + 80LL))(v2, a2);
  return result;
}
