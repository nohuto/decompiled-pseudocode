/*
 * XREFs of KseSkipDriverUnloadHookDriverUntargeted @ 0x1402B8AA0
 * Callers:
 *     <none>
 * Callees:
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x1402B8BBC (KsepSkipDriverUnloadEventDriverUnload.c)
 */

__int64 __fastcall KseSkipDriverUnloadHookDriverUntargeted(__int64 a1)
{
  KsepSkipDriverUnloadEventDriverUnload(0LL, a1);
  return 0LL;
}
