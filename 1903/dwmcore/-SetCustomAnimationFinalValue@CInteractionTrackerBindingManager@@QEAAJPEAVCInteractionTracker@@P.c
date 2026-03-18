/*
 * XREFs of ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1800EB560
 * Callers:
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1800EAFE0 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800EB0EC (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1801C1A38 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801DD044 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x1801DD590 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x1801E1438 (-GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1802098E4 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerBindingManager::SetCustomAnimationFinalValue(
        int a1,
        __int64 a2,
        CKeyframeAnimation *a3,
        int a4)
{
  const struct KeyframeValue *LastKeyframeValue; // rdi
  int Value; // eax
  __int64 v9; // rdx
  unsigned int v10; // edi
  char v12; // r9
  int v13; // [rsp+20h] [rbp-39h] BYREF
  __int64 v14; // [rsp+24h] [rbp-35h]
  __int64 v15; // [rsp+60h] [rbp+7h]
  int v16; // [rsp+68h] [rbp+Fh]
  char v17; // [rsp+6Ch] [rbp+13h]
  int v18; // [rsp+70h] [rbp+17h] BYREF
  __int64 v19; // [rsp+74h] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(a3);
  if ( *((_DWORD *)LastKeyframeValue + 5) != 1 )
    return 0LL;
  memset_0(&v13, 0, 0x40uLL);
  v15 = 0LL;
  v16 = 18;
  v17 = 0;
  Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (struct CExpressionValue *)&v13);
  v10 = Value;
  if ( Value < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41B,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
      (const char *)(unsigned int)Value,
      v13);
    CExpressionValue::~CExpressionValue((CExpressionValue *)&v13);
    return v10;
  }
  if ( !a4 )
  {
    v18 = v13;
    v19 = v14;
    CInteractionTracker::SetPosition(a2, &v18, 1LL);
    v12 = 3;
LABEL_8:
    CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync(a1, a2, a2, v12);
    goto LABEL_9;
  }
  if ( a4 == 1 )
  {
    CInteractionTracker::SetScale(a2, v9, 1LL);
    v12 = 4;
    goto LABEL_8;
  }
LABEL_9:
  CExpressionValue::~CExpressionValue((CExpressionValue *)&v13);
  return 0LL;
}
