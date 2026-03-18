/*
 * XREFs of ?RecordTransform@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@AEBVCMILMatrix@@@Z @ 0x180012B20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x180012C44 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceBitmap::RecordTransform(
        CCompositionSurfaceBitmap *this,
        HMONITOR a2,
        const struct CMILMatrix *a3)
{
  if ( CCompositionSurfaceBitmap::IsSwapChain((CCompositionSurfaceBitmap *)((char *)this - 56)) )
    (*(void (__fastcall **)(_QWORD, HMONITOR, const struct CMILMatrix *))(**((_QWORD **)this + 4) + 152LL))(
      *((_QWORD *)this + 4),
      a2,
      a3);
}
