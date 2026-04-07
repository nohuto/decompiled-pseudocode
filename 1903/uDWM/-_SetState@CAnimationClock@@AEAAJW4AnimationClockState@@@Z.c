/*
 * XREFs of ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180009E54
 * Callers:
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180008ED4 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x180009DF4 (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180009E54 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x18000BDB0 (-Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800B2E20 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180008ED4 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x18000920C (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180009E54 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ??1?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18000A044 (--1-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000A0C4 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z @ 0x18000A10C (-StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18000A464 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18000A724 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x18000A7C8 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z @ 0x1800B3344 (-s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z.c)
 *     McTemplateU0jdd @ 0x1800B33F0 (McTemplateU0jdd.c)
 */

__int64 __fastcall CAnimationClock::_SetState(__int64 a1, unsigned int a2)
{
  int v3; // r14d
  unsigned int v4; // edi
  int v6; // ebx
  struct _GUID v7; // xmm0
  int v8; // edx
  int v9; // ecx
  bool v10; // zf
  unsigned int v11; // eax
  void (__fastcall ***v12)(_QWORD, struct _GUID *, _QWORD); // rcx
  void (__fastcall **v13)(_QWORD, struct _GUID *, _QWORD); // rax
  unsigned int v14; // ebp
  __int64 v16; // rax
  signed __int64 v17; // rdi
  __int64 ElapsedMillsecondsFromTime; // rax
  struct _GUID v19; // [rsp+30h] [rbp-188h] BYREF
  _QWORD v20[40]; // [rsp+40h] [rbp-178h] BYREF

  v3 = 0;
  v4 = -1;
  if ( a2 == 1 )
  {
    v4 = *(_DWORD *)(a1 + 136);
    goto LABEL_9;
  }
  if ( a2 == 2 )
  {
    if ( *(_QWORD *)(a1 + 88) )
    {
      ElapsedMillsecondsFromTime = CAnimationClock::s_GetElapsedMillsecondsFromTime((const union _LARGE_INTEGER *)(a1 + 88));
      if ( ElapsedMillsecondsFromTime > 0 )
        v4 = ElapsedMillsecondsFromTime;
    }
    else
    {
      v4 = 0;
    }
  }
  else if ( a2 != 3 )
  {
    if ( a2 != 4 )
    {
      if ( a2 == 5 || a2 == 6 )
      {
        v4 = 1000;
      }
      else if ( a2 != 7 )
      {
        return (unsigned int)-2147418113;
      }
      goto LABEL_10;
    }
    v4 = *(_DWORD *)(a1 + 140);
    v3 = CAnimationClock::_TriggerAnimation((CAnimationClock *)a1);
    if ( *(_QWORD *)(a1 + 88) )
    {
      v16 = CAnimationClock::s_GetElapsedMillsecondsFromTime((const union _LARGE_INTEGER *)(a1 + 88));
      v17 = *(unsigned int *)(a1 + 140);
      if ( (__int64)abs64(v16) >= v17 )
        v4 = 0;
      else
        v4 = v17 - v16;
    }
LABEL_9:
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
LABEL_10:
  v6 = *(_DWORD *)(a1 + 80);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    v20,
    "AnimationClockStateChange");
  v7 = *(struct _GUID *)(a1 + 120);
  v20[0] = &AnimationClockLoggingTelemetry::AnimationClockStateChange::`vftable';
  v19 = v7;
  AnimationClockLoggingTelemetry::AnimationClockStateChange::StartActivity(
    (AnimationClockLoggingTelemetry::AnimationClockStateChange *)v20,
    &v19,
    v6,
    a2);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0jdd(v9, v8, a1 + 120, *(_DWORD *)(a1 + 80), a2);
  v10 = *(_QWORD *)(a1 + 72) == 0LL;
  v11 = a2;
  *(_DWORD *)(a1 + 80) = a2;
  if ( !v10 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
    v12 = *(void (__fastcall ****)(_QWORD, struct _GUID *, _QWORD))(a1 + 72);
    v13 = *v12;
    v19 = *(struct _GUID *)(a1 + 120);
    (*v13)(v12, &v19, a2);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
    v11 = *(_DWORD *)(a1 + 80);
  }
  if ( a2 == v11 )
  {
    if ( v4 != -1 )
      v3 = CAnimationClock::_SetTimer((CAnimationClock *)a1, v4);
    if ( v3 >= 0 )
    {
      v14 = a2 - 2;
      if ( v14 )
      {
        if ( v14 == 1 )
          v3 = CAnimationClock::_SetTime((union _LARGE_INTEGER *)a1, 0, 0LL);
      }
      else if ( v4 == -1 )
      {
        CAnimationClock::_SetState(a1, 4LL);
      }
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v20, (unsigned int)v3);
  v20[0] = &AnimationClockLoggingTelemetry::AnimationClockStateChange::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v20);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(v20);
  return (unsigned int)v3;
}
