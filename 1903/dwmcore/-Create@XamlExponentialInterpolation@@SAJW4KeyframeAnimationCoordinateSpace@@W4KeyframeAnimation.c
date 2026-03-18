/*
 * XREFs of ?Create@XamlExponentialInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x180020C90
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180080F74 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x18007E1E8 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlExponentialInterpolation::Create(int a1, unsigned int a2, float a3, _QWORD *a4)
{
  float v4; // xmm6_4
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  __int64 result; // rax

  v4 = a3;
  if ( !_finite(a3) )
    v4 = 0.0;
  v8 = KeyframeInterpolation::operator new(0x28uLL);
  v9 = v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0x28uLL);
    v9[2] = 0;
    *(_QWORD *)v9 = &XamlExponentialInterpolation::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
    (**(void (__fastcall ***)(void *))v9)(v9);
  v9[4] = a1;
  if ( a2 > 2 )
    a2 = 0;
  result = 0LL;
  v9[6] = a2;
  *((float *)v9 + 8) = v4;
  *a4 = v9;
  return result;
}
