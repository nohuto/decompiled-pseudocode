/*
 * XREFs of KseSkipDriverUnloadHookDriverTargeted @ 0x1402A1830
 * Callers:
 *     <none>
 * Callees:
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x1402A186C (KsepSkipDriverUnloadEventDriverLoad.c)
 */

__int64 __fastcall KseSkipDriverUnloadHookDriverTargeted(int a1, int a2, int a3, int a4, char a5)
{
  KsepSkipDriverUnloadEventDriverLoad(a1, a2, a3, a4, a5);
  return 0LL;
}
