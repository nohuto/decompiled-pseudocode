/*
 * XREFs of ?Release@CCubicBezierInterpolator@@UEAAKXZ @ 0x1800A4C90
 * Callers:
 *     ?CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEAPEAUIUIAnimationTransition2@@@Z @ 0x1800A46F8 (-CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Cleanup@CCubicBezierInterpolator@@IEAAXXZ @ 0x1800A467C (-Cleanup@CCubicBezierInterpolator@@IEAAXXZ.c)
 */

__int64 __fastcall CCubicBezierInterpolator::Release(CCubicBezierInterpolator *this)
{
  bool v1; // zf
  unsigned int v3; // edi

  v1 = (*((_DWORD *)this + 19))-- == 1;
  v3 = *((_DWORD *)this + 19);
  if ( v1 )
  {
    *(_QWORD *)this = &CCubicBezierInterpolator::`vftable';
    CCubicBezierInterpolator::Cleanup(this);
    (*(void (__fastcall **)(WPF::HeapBase *, CCubicBezierInterpolator *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  }
  return v3;
}
