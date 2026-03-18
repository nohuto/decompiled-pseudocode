/*
 * XREFs of ApiSetResetLastSeenFrameId @ 0x1C01A0538
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0163C70 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C0164418 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     GetNextFrameId @ 0x1C01842A0 (GetNextFrameId.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCMouseEvent@1@AEBUtagPOINT@@II_K@Z @ 0x1C0191344 (-ForwardInputToISM@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCMouseEvent@1@AEBUtagPOINT@@II_K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetResetLastSeenFrameId()
{
  struct tagDESKTOP *v0; // rbx
  __int64 result; // rax

  v0 = grpdeskRitInput;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      212,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  result = IsResetLastSeenFrameIdSupported();
  if ( (int)result >= 0 )
    result = ResetLastSeenFrameId(v0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               10,
               213,
               (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return result;
}
