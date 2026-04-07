/*
 * XREFs of ?SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800AECC0
 * Callers:
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800AF3D4 (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18002E778 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall CAnimationClock::SetTime(__int64 a1, int a2, const union _LARGE_INTEGER *a3)
{
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  LODWORD(a3) = CAnimationClock::_SetTime((union _LARGE_INTEGER *)a1, a2, a3);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return (unsigned int)a3;
}
