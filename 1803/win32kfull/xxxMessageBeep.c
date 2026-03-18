/*
 * XREFs of xxxMessageBeep @ 0x1C01339F0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxFlashEnabledPopup @ 0x1C0133950 (xxxFlashEnabledPopup.c)
 *     ?EditionMessageBeep@@YAHK@Z @ 0x1C0198310 (-EditionMessageBeep@@YAHK@Z.c)
 *     xxxMNChar @ 0x1C01E5D78 (xxxMNChar.c)
 *     xxxMNKeyFilter @ 0x1C0206EB8 (xxxMNKeyFilter.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00E4AF4 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxSoundSentry @ 0x1C010FD10 (xxxSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1C0198324 (xxxOldMessageBeep.c)
 */

__int64 __fastcall xxxMessageBeep(__int64 a1)
{
  __int64 v1; // rdx

  v1 = 4LL;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) != 0 )
  {
    xxxOldMessageBeep(a1, 4LL, (unsigned int)a1);
  }
  else
  {
    if ( (gdwPUDFlags & 0x80000) != 0 )
      CUserPlaySound::PlaySync(CUserPlaySound::s_pUserPlaySound);
    xxxSoundSentry(a1, v1);
  }
  return 1LL;
}
