/*
 * XREFs of ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800B0670
 * Callers:
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x18000DCC8 (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 * Callees:
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180005258 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180005D48 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180005E70 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180006610 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800B0820 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 */

__int64 __fastcall CThumbnailTransition::StartAnimation(
        CThumbnailTransition *this,
        struct CThumbnailAnimatedVisual *a2)
{
  CAnimationEngine *v4; // rax
  CAnimationEngine *v5; // rdi
  int v6; // ebx
  int v7; // eax
  struct IAnimatedVisual *v8; // rax
  int started; // eax
  struct IAnimatedVisual *v11; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)a2 + 35) + 264LL))((char *)a2 + 280);
  v4 = CDesktopManager::AcquireAnimationEngine();
  v5 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1Du);
LABEL_14:
    CThumbnailTransition::_CleanupAnimation(this);
    goto LABEL_15;
  }
  v7 = CAnimationEngine::RegisterForAnimationCompleteNotification(v4, (CThumbnailTransition *)((char *)this + 16));
  v6 = v7;
  if ( v7 >= 0 )
  {
    v8 = (struct IAnimatedVisual *)*((_QWORD *)this + 3);
    if ( v8 )
      v8 = (struct IAnimatedVisual *)((char *)v8 + 280);
    v11 = v8;
    started = CAnimationEngine::ScheduleStartAnimation(v5, 62, &v11, 1u, (unsigned int *)this + 8);
    v6 = started;
    if ( started >= 0 )
      *((_BYTE *)this + 36) = 1;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x24u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1Eu);
  }
  if ( v6 < 0 )
    goto LABEL_14;
LABEL_15:
  if ( v5 )
    CAnimationEngine::Release(v5);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return (unsigned int)v6;
}
