/*
 * XREFs of ?RecordTransform@CGlobalCompositionSurfaceInfo@@UEAAXPEAUHMONITOR__@@AEBVCMILMatrix@@@Z @ 0x180018F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::RecordTransform(
        CGlobalCompositionSurfaceInfo *this,
        HMONITOR a2,
        const struct CMILMatrix *a3)
{
  CComposition *v4; // rax

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, HMONITOR, const struct CMILMatrix *))(**((_QWORD **)this + 29) + 40LL))(
         *((_QWORD *)this + 29),
         a2,
         a3) )
  {
    v4 = (CComposition *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3));
    CComposition::AddCompSurfInfoUpdate(v4, this);
  }
}
