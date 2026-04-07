/*
 * XREFs of ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18002E778
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180027844 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x18002E554 (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800AECC0 (-SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180027844 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z @ 0x18002E828 (-_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180043E08 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18008C55C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z @ 0x1800AF074 (-s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z.c)
 *     McTemplateU0ji @ 0x1800AF1A0 (McTemplateU0ji.c)
 */

__int64 __fastcall CAnimationClock::_SetTime(union _LARGE_INTEGER *a1, int a2, const union _LARGE_INTEGER *a3)
{
  union _LARGE_INTEGER *v6; // r8
  int Frame; // ebx
  __int64 v8; // rcx
  CAnimationClock *QuadPart; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  union _LARGE_INTEGER v15; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 && (__int64)abs64(CAnimationClock::s_GetElapsedMillsecondsFromTime(a3)) > 5000 )
    return (unsigned int)-2147024809;
  if ( !a2 )
  {
    if ( ((a1[10].LowPart - 1) & 0xFFFFFFFD) == 0 )
    {
      v6 = &v15;
      v15.QuadPart = 0LL;
      if ( a3 )
        v6 = a1 + 11;
      Frame = CAnimationClock::_SetTimeToNextFrame((CAnimationClock *)a1, a3, v6);
      if ( Frame >= 0 )
      {
        Frame = CAnimationClock::_SetState((__int64)a1, 2u);
        if ( !a3 )
          a1[11] = v15;
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0ji(v8, &UdwmAnimationClock_Start, &a1[15], (union _LARGE_INTEGER)a1[11].QuadPart);
      }
      return (unsigned int)Frame;
    }
    return (unsigned int)-2147019873;
  }
  if ( a2 != 1 )
    return (unsigned int)-2147024809;
  if ( a1[10].LowPart - 1 > 3 )
    return (unsigned int)-2147019873;
  QuadPart = (CAnimationClock *)a1[14].QuadPart;
  if ( (unsigned __int64)QuadPart - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
LABEL_21:
    Frame = CAnimationClock::_SetTimeToNextFrame(QuadPart, a3, a1 + 12);
    if ( Frame >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0ji(v12, &UdwmAnimationClock_Cancel, &a1[15], (union _LARGE_INTEGER)a1[12].QuadPart);
      return (unsigned int)CAnimationClock::_SetState((__int64)a1, 5u);
    }
    return (unsigned int)Frame;
  }
  v11 = NtDCompositionCommitSynchronizationObject();
  if ( v11 >= 0 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &a1[14],
      0LL);
    goto LABEL_21;
  }
  return wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x1EE,
           (unsigned int)"windows\\dwm\\udwm\\animationclock.cpp",
           (const char *)(unsigned int)v11,
           v13);
}
