/*
 * XREFs of WINRT_CloseThreadpoolTimer @ 0x18008AB26
 * Callers:
 *     ?close@?$handle_type@Utimer_traits@resume_after@winrt@@@winrt@@QEAAXXZ @ 0x1800C49E4 (-close@-$handle_type@Utimer_traits@resume_after@winrt@@@winrt@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall WINRT_CloseThreadpoolTimer(PTP_TIMER pti)
{
  CloseThreadpoolTimer(pti);
}
