/*
 * XREFs of ?Create@XamlElasticInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x180209FBC
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180080F74 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x18007E1E8 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlElasticInterpolation::Create(int a1, unsigned int a2, int a3, float a4, _QWORD *a5)
{
  float v5; // xmm6_4
  int v6; // esi
  _DWORD *v9; // rax
  _DWORD *v10; // rbx

  v5 = a4;
  v6 = 0;
  if ( a3 >= 0 )
    v6 = a3;
  if ( !_finite(a4) )
    v5 = 0.0;
  v9 = KeyframeInterpolation::operator new(0x28uLL);
  v10 = v9;
  if ( v9 )
  {
    memset_0(v9, 0, 0x28uLL);
    v10[2] = 0;
    *(_QWORD *)v10 = &XamlElasticInterpolation::`vftable';
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
    (**(void (__fastcall ***)(void *))v10)(v10);
  v10[4] = a1;
  if ( a2 > 2 )
    a2 = 0;
  v10[6] = a2;
  *((float *)v10 + 9) = v5;
  v10[8] = v6;
  *a5 = v10;
  return 0LL;
}
