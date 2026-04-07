/*
 * XREFs of ?OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180025920
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x18002ED94 (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimationClockCoordinator::OnAnimationClockChanged(__int64 a1, __int128 *a2, unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  void (__fastcall ***v7)(_QWORD, __int128 *, _QWORD); // rbx
  void (__fastcall *v8)(_QWORD, __int128 *, _QWORD); // rax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8);
  v10 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8));
  v7 = *(void (__fastcall ****)(_QWORD, __int128 *, _QWORD))(a1 + 48);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  v8 = **v7;
  v9 = *a2;
  v8(v7, &v9, a3);
  if ( a3 == 7 )
  {
    v10 = v3;
    EnterCriticalSection(v3);
    CAnimationClockCoordinator::_ClearExpiredAnimationClocks((CAnimationClockCoordinator *)a1);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  }
}
