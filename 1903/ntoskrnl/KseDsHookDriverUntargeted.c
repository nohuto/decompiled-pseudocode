/*
 * XREFs of KseDsHookDriverUntargeted @ 0x1402B78E0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDriverUnload @ 0x1402B8160 (KsepDsEventDriverUnload.c)
 */

__int64 __fastcall KseDsHookDriverUntargeted(__int64 a1)
{
  KsepDsEventDriverUnload(0LL, a1);
  return 0LL;
}
