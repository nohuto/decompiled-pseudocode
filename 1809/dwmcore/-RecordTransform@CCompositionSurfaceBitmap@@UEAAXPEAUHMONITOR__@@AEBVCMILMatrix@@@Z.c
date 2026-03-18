/*
 * XREFs of ?RecordTransform@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@AEBVCMILMatrix@@@Z @ 0x1800130D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordTransform@CCompositionSurfaceInfo@@QEAAXPEAUHMONITOR__@@AEBVCMILMatrix@@@Z @ 0x180013100 (-RecordTransform@CCompositionSurfaceInfo@@QEAAXPEAUHMONITOR__@@AEBVCMILMatrix@@@Z.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18001320C (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 */

void __fastcall CCompositionSurfaceBitmap::RecordTransform(
        CCompositionSurfaceBitmap *this,
        HMONITOR a2,
        const struct CMILMatrix *a3)
{
  const struct CMILMatrix *v3; // r8
  __int64 v4; // r9
  HMONITOR v5; // r10

  if ( CCompositionSurfaceBitmap::IsSwapChain((CCompositionSurfaceBitmap *)((char *)this - 56)) )
    CCompositionSurfaceInfo::RecordTransform(*(CCompositionSurfaceInfo **)(v4 + 32), v5, v3);
}
