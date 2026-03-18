/*
 * XREFs of PopGetMonitorReasonFromPowerEventId @ 0x1402FFFF4
 * Callers:
 *     PopPowerAggregatorExecuteActiveCallback @ 0x1408B2240 (PopPowerAggregatorExecuteActiveCallback.c)
 *     PopPowerAggregatorExecuteModernStandbyCallback @ 0x1408B22C0 (PopPowerAggregatorExecuteModernStandbyCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetMonitorReasonFromPowerEventId(int a1)
{
  unsigned int v1; // r8d
  _DWORD *v2; // rdx
  __int64 v3; // rax

  v1 = 0;
  v2 = &unk_140571854;
  v3 = 0LL;
  while ( *v2 != a1 )
  {
    v3 = (unsigned int)(v3 + 1);
    v2 += 2;
    if ( (unsigned int)v3 >= 0x2E )
      return v1;
  }
  return *((unsigned int *)&PopMonitorEventMapping + 2 * v3);
}
