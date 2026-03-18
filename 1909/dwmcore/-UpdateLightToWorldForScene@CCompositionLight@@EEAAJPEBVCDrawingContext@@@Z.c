/*
 * XREFs of ?UpdateLightToWorldForScene@CCompositionLight@@EEAAJPEBVCDrawingContext@@@Z @ 0x1801C6300
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18007E420 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCompositionLight::UpdateLightToWorldForScene(
        CCompositionLight *this,
        const struct CDrawingContext *a2)
{
  struct _LIST_ENTRY *v4; // rax
  int WorldTransform; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct _LIST_ENTRY *)(*(__int64 (__fastcall **)(CCompositionLight *))(*(_QWORD *)this + 208LL))(this);
  WorldTransform = CVisual::GetWorldTransform(v4, *((_QWORD *)a2 + 757), 3, (__int64)this + 176, 0LL, 0LL);
  v6 = WorldTransform;
  if ( WorldTransform >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x25C,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionlight.cpp",
    (const char *)(unsigned int)WorldTransform);
  return v6;
}
