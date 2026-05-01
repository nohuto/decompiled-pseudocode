/*
 * XREFs of ?Mirror_IsThreadRTL@@YAHXZ @ 0x180195250
 * Callers:
 *     ?SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z @ 0x18009A3DC (-SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 Mirror_IsThreadRTL(void)
{
  LANGID ThreadUILanguage; // ax

  ThreadUILanguage = GetThreadUILanguage();
  return IsBiDiLocale(ThreadUILanguage);
}
