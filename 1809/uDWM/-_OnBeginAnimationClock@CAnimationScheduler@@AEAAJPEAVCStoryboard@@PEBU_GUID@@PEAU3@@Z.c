/*
 * XREFs of ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x18002EE48
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800312D0 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18002DCA8 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18002E860 (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x18002EF80 (-GetAnimationDuration@@YAJHHPEAK@Z.c)
 *     ?_LookupAnimationClockIdFromStoryboard@CAnimationScheduler@@AEAAJHPEBU_GUID@@PEAU2@PEAH@Z @ 0x18002F120 (-_LookupAnimationClockIdFromStoryboard@CAnimationScheduler@@AEAAJHPEBU_GUID@@PEAU2@PEAH@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationScheduler::_OnBeginAnimationClock(
        CAnimationScheduler *this,
        struct _GUID *a2,
        const struct _GUID *a3,
        struct _GUID *a4)
{
  int v4; // esi
  int v7; // eax
  __int64 v8; // rdx
  CDesktopManager *v9; // rax
  struct _GUID v10; // xmm0
  CAnimationClockCoordinator *v11; // r14
  __int64 v12; // rax
  unsigned int v13; // eax
  int AnimationDuration; // eax
  unsigned int v15; // r8d
  struct _GUID *v16; // rax
  int v18; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v19[3]; // [rsp+34h] [rbp-4Ch] BYREF
  struct _GUID v20; // [rsp+40h] [rbp-40h] BYREF
  struct _GUID v21; // [rsp+50h] [rbp-30h] BYREF
  struct _GUID v22; // [rsp+60h] [rbp-20h] BYREF

  v4 = *(_DWORD *)a2[4].Data4;
  v22 = GUID_NULL;
  v18 = 0;
  v7 = CAnimationScheduler::_LookupAnimationClockIdFromStoryboard(this, v4, a3, &v22, &v18);
  v8 = (unsigned int)v7;
  if ( v7 >= 0 )
  {
    v9 = CDesktopManager::s_pDesktopManagerInstance;
    v10 = v22;
    a2[3] = v22;
    v11 = (CAnimationClockCoordinator *)*((_QWORD *)v9 + 24);
    v12 = *(_QWORD *)&a2->Data1;
    v20 = v10;
    v13 = (*(__int64 (__fastcall **)(struct _GUID *, __int64))(v12 + 32))(a2, v8);
    LODWORD(v8) = CAnimationClockCoordinator::OnCreateAnimationClock(v11, &v20, v13);
    if ( (int)(v8 + 0x80000000) < 0 || (_DWORD)v8 == -2147019886 )
    {
      v19[0] = 0;
      AnimationDuration = GetAnimationDuration(v4, v18, v19);
      v15 = v19[0];
      v21 = v22;
      if ( AnimationDuration < 0 )
        v15 = 0;
      LODWORD(v8) = CAnimationClockCoordinator::OnBeginAnimationClock(v11, &v21, v15);
      if ( (_DWORD)v8 == -2147019873 )
        LODWORD(v8) = 0;
    }
  }
  if ( a4 )
  {
    v16 = &v22;
    if ( (int)v8 < 0 )
      v16 = &GUID_NULL;
    *a4 = *v16;
  }
  return (unsigned int)v8;
}
