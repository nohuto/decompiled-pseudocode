/*
 * XREFs of ?ForceResetMouseButtonInMakeAccumulator@CMouseProcessor@@QEAAXXZ @ 0x1C00A3BD4
 * Callers:
 *     ForceResetMouseButtonsDownState @ 0x1C00A3BB0 (ForceResetMouseButtonsDownState.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

void __fastcall CMouseProcessor::ForceResetMouseButtonInMakeAccumulator(CMouseProcessor *this)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 6, 17, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
  *((_DWORD *)this + 817) = 0;
}
