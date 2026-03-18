/*
 * XREFs of KeExitRetpoline @ 0x1400FF0D8
 * Callers:
 *     KiDispatchCallout @ 0x1400FED80 (KiDispatchCallout.c)
 *     KiLockServiceTable @ 0x14017A9A0 (KiLockServiceTable.c)
 *     KeOptimizeSpecCtrlSettings @ 0x140198F80 (KeOptimizeSpecCtrlSettings.c)
 *     CcBcbProfiler @ 0x1401A9C40 (CcBcbProfiler.c)
 *     sub_1401AAE40 @ 0x1401AAE40 (sub_1401AAE40.c)
 *     KiSwInterruptDispatch @ 0x1401AAEA0 (KiSwInterruptDispatch.c)
 *     sub_1401ABE60 @ 0x1401ABE60 (sub_1401ABE60.c)
 *     sub_1401B84B0 @ 0x1401B84B0 (sub_1401B84B0.c)
 *     RtlpComputeEpilogueOffset @ 0x1401B9E54 (RtlpComputeEpilogueOffset.c)
 *     sub_140344050 @ 0x140344050 (sub_140344050.c)
 *     FsRtlTruncateSmallMcb @ 0x140344500 (FsRtlTruncateSmallMcb.c)
 *     sub_1405B0010 @ 0x1405B0010 (sub_1405B0010.c)
 *     KeUserModeCallback @ 0x140686D70 (KeUserModeCallback.c)
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
