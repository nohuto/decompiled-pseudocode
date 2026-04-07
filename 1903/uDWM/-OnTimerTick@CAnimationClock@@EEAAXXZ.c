/*
 * XREFs of ?OnTimerTick@CAnimationClock@@EEAAXXZ @ 0x180009DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x180009DF4 (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

void __fastcall CAnimationClock::OnTimerTick(CAnimationClock *this)
{
  char *v2; // [rsp+30h] [rbp+8h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)this - 2);
  v2 = (char *)this + 8;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  CAnimationClock::_OnTimerCallback((CAnimationClock *)((char *)this - 16));
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v2);
  CBaseObject::Release((CAnimationClock *)((char *)this - 16));
}
