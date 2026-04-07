/*
 * XREFs of ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18000AD30
 * Callers:
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180005AB8 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180005BF0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180006F78 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18000AB50 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimationScheduler::_RecycleAbandonedStoryboards(CAnimationScheduler *this, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  _DWORD *v5; // rsi
  unsigned int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // rcx
  void *v9; // [rsp+28h] [rbp-10h]

  v2 = 0LL;
  while ( (unsigned int)v2 < *((_DWORD *)this + 10) )
  {
    v4 = *((_QWORD *)this + 2);
    v5 = *(_DWORD **)(v4 + 8 * v2);
    if ( v5[6] == 4 )
    {
      v6 = *((_DWORD *)this + 10);
      if ( (unsigned int)v2 >= v6 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u, v9);
      }
      else
      {
        v7 = (unsigned int)v2;
        if ( (unsigned int)v2 < v6 - 1 )
        {
          do
          {
            v8 = (unsigned int)v7;
            a2 = (unsigned int)(v7 + 1);
            v7 = a2;
            *(_QWORD *)(v4 + 8 * v8) = *(_QWORD *)(v4 + 8 * a2);
            v6 = *((_DWORD *)this + 10);
          }
          while ( (unsigned int)a2 < v6 - 1 );
        }
        *((_DWORD *)this + 10) = v6 - 1;
      }
      (*(void (__fastcall **)(_DWORD *, __int64, __int64, __int64))(*(_QWORD *)v5 + 80LL))(v5, a2, v4, v7);
    }
    else
    {
      v2 = (unsigned int)(v2 + 1);
    }
  }
}
