/*
 * XREFs of ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C0012D68
 * Callers:
 *     zzzReattachThreads @ 0x1C00128B4 (zzzReattachThreads.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C0012BE8 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C0012CA4 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _LIST_ENTRY *__fastcall GetRecalcPtiFromListEntry(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rbx

  if ( gListAffectedThreadsForQueueRecalc.Flink == &gListAffectedThreadsForQueueRecalc )
    Flink = a1 - 46;
  else
    Flink = a1[1].Flink;
  if ( Flink && !Flink[28].Flink )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  return Flink;
}
