/*
 * XREFs of ?OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_itf_UIAnimation_0000_0002_0001@@1@Z @ 0x18000AF30
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x18000B02C (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z @ 0x18000C4BC (-GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::OnStoryboardStatusChanged(
        CAnimationEngine *this,
        struct IUIAnimationStoryboard2 *a2,
        enum __MIDL___MIDL_itf_UIAnimation_0000_0002_0001 a3,
        enum __MIDL___MIDL_itf_UIAnimation_0000_0002_0001 a4)
{
  int v4; // ebx
  int v7; // eax
  unsigned int v8; // ebx
  int TransitionVisualSetIndex; // eax
  int v10; // eax
  void *v11; // [rsp+28h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  if ( a3 == UI_ANIMATION_STORYBOARD_FINISHED && ((a4 - 1) & 0xFFFFFFFD) == 0 )
  {
    v7 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, unsigned int *))a2->lpVtbl->GetTag)(
           a2,
           0LL,
           &v13);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x5CCu, v11);
    }
    else
    {
      v8 = v13;
      v12 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      TransitionVisualSetIndex = CAnimationEngine::GetTransitionVisualSetIndex(this, v8);
      if ( TransitionVisualSetIndex < 0 )
      {
        v4 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x56Au, v11);
      }
      else
      {
        v10 = CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(this, TransitionVisualSetIndex);
        v4 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x566u, v11);
      }
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x5D0u, v11);
    }
  }
  return (unsigned int)v4;
}
