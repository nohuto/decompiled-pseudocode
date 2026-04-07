/*
 * XREFs of ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x18000A7C8
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180009E54 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800B2E20 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z @ 0x180009180 (-SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z.c)
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x180009DF4 (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 *     ?IsSet@CTimer@@QEAA_NXZ @ 0x18000A8B0 (-IsSet@CTimer@@QEAA_NXZ.c)
 *     ?Start@CTimer@@QEAAJK@Z @ 0x18000A8FC (-Start@CTimer@@QEAAJK@Z.c)
 *     ?Cancel@CTimer@@QEAAJXZ @ 0x18000A9B4 (-Cancel@CTimer@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationClock::_SetTimer(CAnimationClock *this, unsigned int a2)
{
  int v2; // ebx
  __int64 v6; // rax
  __int64 v7; // rbx

  v2 = 0;
  if ( !*((_QWORD *)this + 8) )
  {
    v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           80LL);
    v7 = v6;
    if ( v6 )
    {
      *(_DWORD *)(v6 + 8) = 1;
      *(_QWORD *)v6 = &CTimer::`vftable';
      InitializeCriticalSection((LPCRITICAL_SECTION)(v6 + 16));
      *(_QWORD *)(v7 + 56) = 0LL;
      *(_QWORD *)(v7 + 64) = 0LL;
      *(_DWORD *)(v7 + 72) = 0;
    }
    else
    {
      v7 = 0LL;
    }
    *((_QWORD *)this + 8) = v7;
    if ( !v7 )
      return (unsigned int)-2147024882;
    v2 = CTimer::SetTimerCallback((CTimer *)v7, (CAnimationClock *)((char *)this + 16));
    if ( v2 < 0 )
      return (unsigned int)v2;
  }
  if ( CTimer::IsSet(*((CTimer **)this + 8)) )
    v2 = CTimer::Cancel(*((CTimer **)this + 8));
  if ( v2 >= 0 )
  {
    if ( a2 )
      return (unsigned int)CTimer::Start(*((CTimer **)this + 8), a2);
    else
      CAnimationClock::_OnTimerCallback(this);
  }
  return (unsigned int)v2;
}
