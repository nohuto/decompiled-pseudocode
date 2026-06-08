/*
 * XREFs of SnapEnergyCountersAndTimestamp @ 0x1C0001320
 * Callers:
 *     <none>
 * Callees:
 *     SnapEnergyCounters @ 0x1C00012E0 (SnapEnergyCounters.c)
 */

_LIST_ENTRY *__fastcall SnapEnergyCountersAndTimestamp(unsigned int a1, char a2, char a3)
{
  __int64 v4; // rbx
  _LIST_ENTRY *result; // rax
  __int64 v7; // rbx

  v4 = a1;
  SnapEnergyCounters(a1, a2, a3);
  result = WPP_MAIN_CB.Queue.ListEntry.Blink;
  v7 = *(_QWORD *)(*((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + v4) + 360LL);
  if ( !a2 )
  {
    result = (_LIST_ENTRY *)KeQueryPerformanceCounter(0LL).QuadPart;
    *(_QWORD *)(v7 + 112) = result;
  }
  if ( a3 )
  {
    result = *(_LIST_ENTRY **)(v7 + 112);
    *(_QWORD *)(v7 + 128) = result;
  }
  return result;
}
