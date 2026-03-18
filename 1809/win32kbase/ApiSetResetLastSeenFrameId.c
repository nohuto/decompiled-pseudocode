/*
 * XREFs of ApiSetResetLastSeenFrameId @ 0x1C01649B4
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0135D6C (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01363BC (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     GetNextFrameId @ 0x1C0151150 (GetNextFrameId.c)
 *     ?SendWheelInputToMT@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBVCWheelEvent@1@I@Z @ 0x1C01596B4 (-SendWheelInputToMT@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBVCWheelEvent@1@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
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
      0x58u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  result = IsResetLastSeenFrameIdSupported();
  if ( (int)result >= 0 )
    result = ResetLastSeenFrameId(v0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0x59u,
             (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return result;
}
