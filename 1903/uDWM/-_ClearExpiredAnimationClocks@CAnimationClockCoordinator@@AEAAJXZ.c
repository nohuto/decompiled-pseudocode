/*
 * XREFs of ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x18003AB4C
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18000BBFC (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18003AAB0 (-OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0j @ 0x1800B3394 (McTemplateU0j.c)
 */

__int64 __fastcall CAnimationClockCoordinator::_ClearExpiredAnimationClocks(CAnimationClockCoordinator *this)
{
  int v1; // esi
  __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v5; // rbp
  __int64 v6; // rcx
  unsigned int i; // r9d
  __int64 v9; // rcx
  void *v10; // [rsp+28h] [rbp-30h]
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  v2 = 0LL;
  while ( (unsigned int)v2 < *((_DWORD *)this + 20) )
  {
    if ( v1 < 0 )
      break;
    v4 = *((_QWORD *)this + 7);
    v5 = *(_QWORD *)(v4 + 8 * v2);
    if ( *(_DWORD *)(v5 + 80) == 7 )
    {
      v6 = *((unsigned int *)this + 20);
      if ( (unsigned int)v2 >= (unsigned int)v6 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u, v10);
        v1 = -2147024809;
      }
      else
      {
        for ( i = v2; i < (int)v6 - 1; v6 = *((unsigned int *)this + 20) )
        {
          v9 = i++;
          *(_QWORD *)(v4 + 8 * v9) = *(_QWORD *)(v4 + 8LL * i);
        }
        v1 = 0;
        *((_DWORD *)this + 20) = v6 - 1;
        v11 = *(_OWORD *)(v5 + 120);
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0j(v6, &UdwmAnimationClock_Destroy, &v11);
        CBaseObject::Release((CBaseObject *)v5);
      }
    }
    else
    {
      v2 = (unsigned int)(v2 + 1);
    }
  }
  return (unsigned int)v1;
}
