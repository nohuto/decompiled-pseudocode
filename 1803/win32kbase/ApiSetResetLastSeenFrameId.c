/*
 * XREFs of ApiSetResetLastSeenFrameId @ 0x1C0141310
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C010EE34 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C010F43C (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     GetNextFrameId @ 0x1C012E450 (GetNextFrameId.c)
 *     ?SendWheelInputToMT@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBVCWheelEvent@1@PEAUHMONITOR__@@I@Z @ 0x1C0135DAC (-SendWheelInputToMT@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBVCWheelEvent@1@PEAUHMONITOR__@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetResetLastSeenFrameId()
{
  struct tagDESKTOP *v0; // rbx
  __int64 result; // rax

  v0 = grpdeskRitInput;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x56u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  result = IsResetLastSeenFrameIdSupported();
  if ( (int)result >= 0 )
    result = ResetLastSeenFrameId(v0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0x57u,
             (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return result;
}
