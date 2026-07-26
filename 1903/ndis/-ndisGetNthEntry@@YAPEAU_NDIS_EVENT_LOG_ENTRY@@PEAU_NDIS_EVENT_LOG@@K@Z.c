/*
 * XREFs of ?ndisGetNthEntry@@YAPEAU_NDIS_EVENT_LOG_ENTRY@@PEAU_NDIS_EVENT_LOG@@K@Z @ 0x1C00C7C88
 * Callers:
 *     ndisFreeEventLog @ 0x1C01284FC (ndisFreeEventLog.c)
 * Callees:
 *     <none>
 */

struct _NDIS_EVENT_LOG_ENTRY *__fastcall ndisGetNthEntry(struct _NDIS_EVENT_LOG *a1, int a2)
{
  return (struct _NDIS_EVENT_LOG_ENTRY *)((char *)&a1[1] + a2 * (unsigned int)a1->EntrySize);
}
