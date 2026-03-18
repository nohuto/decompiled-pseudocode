/*
 * XREFs of ApiSetEtwTraceBeginPointerFrameCommit @ 0x1C019EBE8
 * Callers:
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C014FDE4 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C010D550 (EtwTraceBeginPointerFrameCommit.c)
 */

ULONG __fastcall ApiSetEtwTraceBeginPointerFrameCommit(__int64 a1, unsigned int a2, const GUID *a3)
{
  unsigned int v3; // ebx
  ULONG result; // eax
  int v5; // edx

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      32,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  result = EtwTraceBeginPointerFrameCommit(0LL, v3, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v5) = 5;
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               v5,
               10,
               33,
               (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
    }
  }
  return result;
}
