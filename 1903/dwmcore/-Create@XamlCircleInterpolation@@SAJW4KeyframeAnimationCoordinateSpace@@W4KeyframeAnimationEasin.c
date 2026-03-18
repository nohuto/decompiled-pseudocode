/*
 * XREFs of ?Create@XamlCircleInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z @ 0x180209F1C
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180080F74 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x18007E1E8 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlCircleInterpolation::Create(int a1, unsigned int a2, _QWORD *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  __int64 result; // rax

  v6 = KeyframeInterpolation::operator new(0x20uLL);
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x20uLL);
    v7[2] = 0;
    *(_QWORD *)v7 = &XamlCircleInterpolation::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
    (**(void (__fastcall ***)(void *))v7)(v7);
  v7[4] = a1;
  if ( a2 > 2 )
    a2 = 0;
  result = 0LL;
  v7[6] = a2;
  *a3 = v7;
  return result;
}
