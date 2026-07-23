/*
 * XREFs of RtlFindFirstRunClear @ 0x1402EE940
 * Callers:
 *     PnprMirrorMarkedPages @ 0x14057AFFC (PnprMirrorMarkedPages.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x14002B750 (RtlFindNextForwardRunClearCapped.c)
 */

ULONG __stdcall RtlFindFirstRunClear(PRTL_BITMAP BitMapHeader, PULONG StartingIndex)
{
  return RtlFindNextForwardRunClearCapped((__int64)BitMapHeader, 0, 0xFFFFFFFF, StartingIndex);
}
