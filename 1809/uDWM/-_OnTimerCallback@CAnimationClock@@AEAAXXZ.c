/*
 * XREFs of ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x180028594
 * Callers:
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x1800281F0 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?OnTimerTick@CAnimationClock@@EEAAXXZ @ 0x18002A3D0 (-OnTimerTick@CAnimationClock@@EEAAXXZ.c)
 * Callees:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180027844 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     McTemplateU0j @ 0x1800AF0C4 (McTemplateU0j.c)
 */

void __fastcall CAnimationClock::_OnTimerCallback(CAnimationClock *this)
{
  int v1; // eax
  CAnimationClock *v2; // rbx
  unsigned int v3; // edx

  v1 = *((_DWORD *)this + 20);
  v2 = this;
  switch ( v1 )
  {
    case 2:
      v3 = 4;
      break;
    case 4:
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0j(this, &UdwmAnimationClock_Finish, (char *)this + 120);
      v3 = 6;
      this = v2;
      break;
    case 1:
      v3 = 3;
      break;
    default:
      if ( (unsigned int)(v1 - 5) > 1 )
        return;
      v3 = 7;
      break;
  }
  CAnimationClock::_SetState((__int64)this, v3);
}
