/*
 * XREFs of ?End@CAnimationClock@@QEAAJXZ @ 0x18002E554
 * Callers:
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x18002E500 (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180027A34 (--1-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180027AB4 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180027E44 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18002814C (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?StartActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x18002E678 (-StartActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z.c)
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18002E778 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     McTemplateU0ji @ 0x1800AF1A0 (McTemplateU0ji.c)
 */

__int64 __fastcall CAnimationClock::End(CAnimationClock *this)
{
  struct _GUID v2; // xmm0
  int v3; // r8d
  __int64 v4; // rcx
  unsigned int v5; // edi
  int v6; // esi
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+20h] [rbp-188h] BYREF
  struct _GUID v9; // [rsp+30h] [rbp-178h] BYREF
  _QWORD v10[40]; // [rsp+40h] [rbp-168h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v10,
    (__int64)"EndAnimationClock");
  v2 = *(struct _GUID *)((char *)this + 120);
  v3 = *((_DWORD *)this + 36);
  v10[0] = &AnimationClockLoggingTelemetry::EndAnimationClock::`vftable';
  v9 = v2;
  AnimationClockLoggingTelemetry::EndAnimationClock::StartActivity(
    (AnimationClockLoggingTelemetry::EndAnimationClock *)v10,
    &v9,
    v3);
  v5 = -2147019873;
  if ( *((_DWORD *)this + 20) == 1 )
  {
    v6 = _InterlockedDecrement((volatile signed __int32 *)this + 36);
    if ( v6 < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 36);
    }
    else
    {
      v5 = 0;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0ji(v4, &UdwmAnimationClock_End, (char *)this + 120, v6, v8);
      if ( (*((_DWORD *)this + 34) != -1 || *((_DWORD *)this + 35)) && !v6 )
        v5 = CAnimationClock::_SetTime(this, 0LL, 0LL);
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v10, v5);
  v10[0] = &AnimationClockLoggingTelemetry::EndAnimationClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(v10);
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v10);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v5;
}
