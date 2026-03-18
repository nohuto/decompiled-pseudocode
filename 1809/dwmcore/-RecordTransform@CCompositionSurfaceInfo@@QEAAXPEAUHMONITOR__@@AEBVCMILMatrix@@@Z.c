/*
 * XREFs of ?RecordTransform@CCompositionSurfaceInfo@@QEAAXPEAUHMONITOR__@@AEBVCMILMatrix@@@Z @ 0x180013100
 * Callers:
 *     ?RecordTransform@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@AEBVCMILMatrix@@@Z @ 0x1800130D0 (-RecordTransform@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceInfo::RecordTransform(
        CCompositionSurfaceInfo *this,
        HMONITOR a2,
        const struct CMILMatrix *a3)
{
  CComposition *v4; // rax

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, HMONITOR, const struct CMILMatrix *))(**((_QWORD **)this + 24) + 40LL))(
         *((_QWORD *)this + 24),
         a2,
         a3) )
  {
    v4 = (CComposition *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3));
    CComposition::AddCompSurfInfoUpdate(v4, this);
  }
}
