/*
 * XREFs of ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x1800082D4
 * Callers:
 *     ?OnTimerTick@CAnimationClock@@EEAAXXZ @ 0x180008290 (-OnTimerTick@CAnimationClock@@EEAAXXZ.c)
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x180008CA8 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 * Callees:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180008334 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     McTemplateU0j @ 0x1800B3034 (McTemplateU0j.c)
 */

void __fastcall CAnimationClock::_OnTimerCallback(CAnimationClock *this)
{
  int v1; // eax
  CAnimationClock *v2; // rbx
  __int64 v3; // rdx

  v1 = *((_DWORD *)this + 20);
  v2 = this;
  switch ( v1 )
  {
    case 2:
      v3 = 4LL;
      break;
    case 4:
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0j(this, &UdwmAnimationClock_Finish, (char *)this + 120);
      v3 = 6LL;
      this = v2;
      break;
    case 1:
      v3 = 3LL;
      break;
    default:
      if ( (unsigned int)(v1 - 5) > 1 )
        return;
      v3 = 7LL;
      break;
  }
  CAnimationClock::_SetState(this, v3);
}
