/*
 * XREFs of ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18000E704
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000F6F0 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x180009E84 (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18000CA3C (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z @ 0x18000ED5C (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z.c)
 *     ?IsWindowTabEligible@@YA_NPEBVCWindowData@@@Z @ 0x18000EF28 (-IsWindowTabEligible@@YA_NPEBVCWindowData@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x1800167EC (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x1800230E4 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z @ 0x18002EF74 (-OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z.c)
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180030944 (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18008E0EC (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow3D::BeginDestroySprite(CTopLevelWindow3D *this, bool *a2)
{
  __int64 v2; // r15
  unsigned int v3; // ebx
  char v5; // si
  int v7; // eax
  int v8; // r12d
  struct _LIST_ENTRY *WindowListForDesktop; // r13
  struct _LIST_ENTRY *Blink; // r14
  CAnimationScheduler *v11; // r14
  int v12; // eax
  int v13; // eax
  int started; // eax
  void *v15; // [rsp+28h] [rbp-48h]
  int v16; // [rsp+40h] [rbp-30h] BYREF
  int v17; // [rsp+44h] [rbp-2Ch] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-28h] BYREF
  bool *v19; // [rsp+50h] [rbp-20h]
  _QWORD v20[2]; // [rsp+58h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 41);
  v3 = 0;
  v19 = a2;
  v5 = 1;
  if ( *(char *)(v2 + 607) < 0 )
    goto LABEL_34;
  if ( !IsWindowTabEligible((const struct CWindowData *)v2) )
    goto LABEL_34;
  v8 = 1;
  if ( !(unsigned int)GetWindowGroupId(*(_QWORD *)(v2 + 40), &v16) )
    goto LABEL_34;
  if ( !v16 )
    goto LABEL_34;
  if ( !(unsigned int)GetDesktopID(1LL, &v18) )
    goto LABEL_34;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           v18);
  Blink = WindowListForDesktop->Blink;
  if ( Blink == WindowListForDesktop )
    goto LABEL_34;
  do
  {
    if ( Blink != (struct _LIST_ENTRY *)v2
      && Blink[25].Flink
      && (unsigned int)GetWindowGroupId(Blink[2].Blink, &v17)
      && v17 == v16 )
    {
      ++v8;
    }
    Blink = Blink->Blink;
  }
  while ( Blink != WindowListForDesktop );
  if ( v8 <= 1 )
  {
LABEL_34:
    if ( CTopLevelWindow3D::ShouldDelayTransition(this, 0) )
    {
      started = CTopLevelWindow3D::StartDelayHideAnimation(this);
      v3 = started;
      if ( started < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x15Fu, v15);
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(unsigned __int8)CTopLevelWindow3D::ShouldShowTransition(this, 6LL)
        || (*(_DWORD *)(*((_QWORD *)this + 41) + 100LL) & 0x20000000) != 0
        || CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(this) )
      {
        goto LABEL_5;
      }
      if ( !*((_QWORD *)this + 45) || *((_DWORD *)this + 92) != 3 )
      {
        v7 = CTopLevelWindow3D::StartAnimation((__int64)this, 6u);
        v3 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x16Au, v15);
          goto LABEL_5;
        }
      }
    }
    v5 = 0;
    goto LABEL_5;
  }
  v20[0] = 0LL;
  v20[1] = 0LL;
  v11 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  v12 = CAnimationScheduler::OnBeginTransitionRequest(v11, 93, &AnimationClock_TabSwitch, 0LL);
  v3 = v12;
  if ( v12 >= 0 )
  {
    v13 = CAnimationScheduler::OnWindowTransitionTargetChanged(v11, *((_QWORD *)this + 41), 537919573LL, v20, v20);
    v3 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x15Bu, v20);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x15Au, v15);
  }
LABEL_5:
  *v19 = v5;
  return v3;
}
