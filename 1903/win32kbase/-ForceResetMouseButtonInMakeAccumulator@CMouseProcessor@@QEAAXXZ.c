/*
 * XREFs of ?ForceResetMouseButtonInMakeAccumulator@CMouseProcessor@@QEAAXXZ @ 0x1C00A4CE4
 * Callers:
 *     ForceResetMouseButtonsDownState @ 0x1C00A4CC0 (ForceResetMouseButtonsDownState.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

void __fastcall CMouseProcessor::ForceResetMouseButtonInMakeAccumulator(CMouseProcessor *this)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 6, 17, (__int64)&WPP_a819e7d240c13332848bedce030fc704_Traceguids);
  *((_DWORD *)this + 827) = 0;
}
