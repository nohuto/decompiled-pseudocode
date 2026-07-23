/*
 * XREFs of PopDirectedDripsMarkCandidateDevice @ 0x1408691E4
 * Callers:
 *     PopDripsWatchdogDfxCallback @ 0x14086F520 (PopDripsWatchdogDfxCallback.c)
 *     PopDripsWatchdogPs4Callback @ 0x14086F890 (PopDripsWatchdogPs4Callback.c)
 * Callees:
 *     <none>
 */

void __fastcall PopDirectedDripsMarkCandidateDevice(__int64 a1)
{
  if ( PopDirectedDripsEnableV2 )
  {
    _m_prefetchw((const void *)(a1 + 808));
    if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 808), 0x40u) & 0x40) == 0 )
      ++dword_14041A248;
  }
}
