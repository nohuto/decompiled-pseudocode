/*
 * XREFs of KseDsHookDriverUntargeted @ 0x1402A03A0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDriverUnload @ 0x1402A0C20 (KsepDsEventDriverUnload.c)
 */

__int64 __fastcall KseDsHookDriverUntargeted(__int64 a1)
{
  KsepDsEventDriverUnload(0LL, a1);
  return 0LL;
}
