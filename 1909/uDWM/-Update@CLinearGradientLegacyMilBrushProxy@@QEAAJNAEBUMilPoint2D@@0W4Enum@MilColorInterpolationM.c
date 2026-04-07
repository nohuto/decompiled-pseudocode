/*
 * XREFs of ?Update@CLinearGradientLegacyMilBrushProxy@@QEAAJNAEBUMilPoint2D@@0W4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x18003F5D4
 * Callers:
 *     ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x18003F4D4 (-SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrushProxy::Update(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, __int64, int))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 16LL) + 1104LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
           *(unsigned int *)(*(_QWORD *)(a1 + 16) + 24LL),
           a3,
           a3,
           a4,
           0,
           0,
           0,
           0,
           1,
           0,
           a8,
           2);
}
