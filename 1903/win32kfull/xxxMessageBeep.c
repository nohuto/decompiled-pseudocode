/*
 * XREFs of xxxMessageBeep @ 0x1C015AAA0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     ?EditionMessageBeep@@YAHK@Z @ 0x1C01CD2E0 (-EditionMessageBeep@@YAHK@Z.c)
 *     xxxMNChar @ 0x1C0223788 (xxxMNChar.c)
 *     xxxFlashEnabledPopup @ 0x1C02406B0 (xxxFlashEnabledPopup.c)
 *     xxxMNKeyFilter @ 0x1C0248C4C (xxxMNKeyFilter.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C0109130 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxSoundSentry @ 0x1C015AB30 (xxxSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1C01CD2F4 (xxxOldMessageBeep.c)
 */

__int64 __fastcall xxxMessageBeep(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx

  v1 = (unsigned int)a1;
  v2 = 4LL;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) != 0 )
  {
    xxxOldMessageBeep(a1, 4LL, (unsigned int)a1);
  }
  else
  {
    if ( (gdwPUDFlags & 0x80000) != 0 )
      CUserPlaySound::PlaySync(CUserPlaySound::s_pUserPlaySound);
    xxxSoundSentry(a1, v2, v1);
  }
  return 1LL;
}
