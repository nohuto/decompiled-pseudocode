/*
 * XREFs of ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x1800493A8
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000A6D4 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002F1D4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800A5240 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800A5730 (-_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimatio.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A6DF0 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_ccaea7de34ba34ea3a568d9728ee50f3___ @ 0x180049628 (CTransitionVisualController--ForEachOwnedWindow__lambda_ccaea7de34ba34ea3a568d9728ee50f3___.c)
 */

__int64 __fastcall CTransitionVisualController::GetClonableOwnedWindowCount(
        struct CWindowData *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF
  unsigned int *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  LOBYTE(a3) = 1;
  v5 = &v4;
  CTransitionVisualController::ForEachOwnedWindow__lambda_ccaea7de34ba34ea3a568d9728ee50f3___(a1, &v5, a3);
  return v4;
}
