/*
 * XREFs of ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1801E02F0
 * Callers:
 *     ?CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801E0220 (-CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z @ 0x18019DE80 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18019F7A0 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1801E03B4 (-EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ.c)
 */

__int64 __fastcall CScrollKeyframeAnimation::EnsureInertiaStateChangeAdded(CScrollKeyframeAnimation *this)
{
  char v1; // al
  float CurrentValue; // xmm0_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_BYTE *)this + 696);
  if ( (v1 & 1) != 0 )
    return 0LL;
  *((_BYTE *)this + 696) = v1 | 1;
  CurrentValue = CInteractionTracker::GetCurrentValue(*((_QWORD *)this + 66), 0);
  CInteractionTracker::AddOrUpdatePendingInertiaStateChange(*((_QWORD *)this + 66), 0, CurrentValue);
  v4 = CInteractionTracker::GetCurrentValue(*((_QWORD *)this + 66), 1);
  CInteractionTracker::AddOrUpdatePendingInertiaStateChange(*((_QWORD *)this + 66), 1, v4);
  v5 = CInteractionTracker::GetCurrentValue(*((_QWORD *)this + 66), 2);
  CInteractionTracker::AddOrUpdatePendingInertiaStateChange(*((_QWORD *)this + 66), 2, v5);
  v6 = CScrollKeyframeAnimation::EnsureInertiaStateChangeInfo(this);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDC,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
