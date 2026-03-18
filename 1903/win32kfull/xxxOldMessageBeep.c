/*
 * XREFs of xxxOldMessageBeep @ 0x1C01CD2F4
 * Callers:
 *     xxxMessageBeep @ 0x1C015AAA0 (xxxMessageBeep.c)
 * Callees:
 *     xxxSoundSentry @ 0x1C015AB30 (xxxSoundSentry.c)
 *     UserBeep @ 0x1C01CD3A4 (UserBeep.c)
 */

__int64 __fastcall xxxOldMessageBeep(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  if ( (gdwPUDFlags & 0x80000) != 0 )
  {
    if ( gdwInAtomicOperation )
    {
      a1 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(a1);
    v4 = UserBeep(440LL, 125LL);
    EnterCrit(0LL, 1LL);
    return v4;
  }
  else
  {
    xxxSoundSentry(a1, a2, a3, a4);
    return 1LL;
  }
}
