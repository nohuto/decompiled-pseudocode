/*
 * XREFs of ?Release@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAKXZ @ 0x1800A2AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ??1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ @ 0x1800A1FA4 (--1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ.c)
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::Release(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this)
{
  if ( (*((_DWORD *)this + 2))-- != 1 )
    return *((unsigned int *)this + 2);
  CThemeAnimationScheduleHelper::CCubicBezierChopper::~CCubicBezierChopper(this);
  (*(void (__fastcall **)(WPF::HeapBase *, CThemeAnimationScheduleHelper::CCubicBezierChopper *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return 0LL;
}
