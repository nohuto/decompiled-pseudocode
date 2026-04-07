/*
 * XREFs of ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x18002CF40
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001E9C0 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x18002CEB0 (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800379E8 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z @ 0x1800B06E4 (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrushProxy::Update(
        CSolidColorLegacyMilBrushProxy *this,
        double a2,
        const struct _D3DCOLORVALUE *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _D3DCOLORVALUE *, const struct _D3DCOLORVALUE *, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 1096LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a3,
           a3,
           0,
           0,
           0);
}
