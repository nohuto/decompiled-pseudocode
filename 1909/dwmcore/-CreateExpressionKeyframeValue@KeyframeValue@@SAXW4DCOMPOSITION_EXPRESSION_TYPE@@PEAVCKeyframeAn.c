/*
 * XREFs of ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x180208160
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800A5C94 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2CSolidColorLegacyMilBrush@@KAPEAX_K@Z @ 0x1800A74DC (--2CSolidColorLegacyMilBrush@@KAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C52D0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyframeValue::CreateExpressionKeyframeValue(int a1, __int64 a2, int a3, _QWORD *a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v8 = CSolidColorLegacyMilBrush::operator new();
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 0;
    *(_QWORD *)v8 = &KeyframeValue::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
    (**(void (__fastcall ***)(_DWORD *))v9)(v9);
  v11 = 0LL;
  v9[5] = 2;
  *((_QWORD *)v9 + 3) = a2;
  v9[8] = a3;
  v9[4] = a1;
  *a4 = v9;
  return Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v11);
}
