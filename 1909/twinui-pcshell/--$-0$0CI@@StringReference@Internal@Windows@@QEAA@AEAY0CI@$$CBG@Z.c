/*
 * XREFs of ??$?0$0CI@@StringReference@Internal@Windows@@QEAA@AEAY0CI@$$CBG@Z @ 0x1801D8F08
 * Callers:
 *     ?SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DE2E8 (-SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?InvokeAppToAppServiceEnticement@RealtimeEnticementManager@Cortana@TwinUI@@AEAAJXZ @ 0x1801F2A70 (-InvokeAppToAppServiceEnticement@RealtimeEnticementManager@Cortana@TwinUI@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(HSTRING *string, PCWSTR sourceString)
{
  if ( WindowsCreateStringReference(sourceString, 0x27u, (HSTRING_HEADER *)(string + 1), string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
