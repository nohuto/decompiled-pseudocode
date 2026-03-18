/*
 * XREFs of KeExitRetpoline @ 0x140101AD8
 * Callers:
 *     KiDispatchCallout @ 0x140101780 (KiDispatchCallout.c)
 *     KiLockServiceTable @ 0x14017B090 (KiLockServiceTable.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1401995E0 (KeOptimizeSpecCtrlSettings.c)
 *     CcBcbProfiler @ 0x1401AA360 (CcBcbProfiler.c)
 *     sub_1401AB560 @ 0x1401AB560 (sub_1401AB560.c)
 *     KiSwInterruptDispatch @ 0x1401AB5C0 (KiSwInterruptDispatch.c)
 *     sub_1401AC580 @ 0x1401AC580 (sub_1401AC580.c)
 *     sub_1401B8BD0 @ 0x1401B8BD0 (sub_1401B8BD0.c)
 *     RtlpComputeEpilogueOffset @ 0x1401BA574 (RtlpComputeEpilogueOffset.c)
 *     sub_140343AB0 @ 0x140343AB0 (sub_140343AB0.c)
 *     FsRtlTruncateSmallMcb @ 0x140343F60 (FsRtlTruncateSmallMcb.c)
 *     sub_1405B0010 @ 0x1405B0010 (sub_1405B0010.c)
 *     KeUserModeCallback @ 0x14064CF40 (KeUserModeCallback.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140353560 (__guard_retpoline_exit.c)
 */

char KeExitRetpoline()
{
  char result; // al
  __int16 v1; // bx
  struct _KPRCB *CurrentPrcb; // rax
  bool v3; // bl
  __int16 v4; // [rsp+20h] [rbp-8h]

  result = (KiSpeculationFeatures & 0x2000000) != 0;
  if ( (KiSpeculationFeatures & 0x2000000) != 0 )
  {
    v1 = v4;
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    v3 = (v1 & 0x200) != 0;
    CurrentPrcb->BpbRetpolineState |= 1u;
    result = CurrentPrcb->BpbRetpolineState;
    if ( (result & 2) == 0 )
      result = _guard_retpoline_exit();
    if ( v3 )
      _enable();
  }
  _mm_lfence();
  return result;
}
