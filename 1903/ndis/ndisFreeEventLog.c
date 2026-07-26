/*
 * XREFs of ndisFreeEventLog @ 0x1C01284FC
 * Callers:
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C009A1C0 (ndisMDeleteMiniportBlockOnRemove.c)
 * Callees:
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x1C000883C (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisGetNthEntry@@YAPEAU_NDIS_EVENT_LOG_ENTRY@@PEAU_NDIS_EVENT_LOG@@K@Z @ 0x1C00C7C88 (-ndisGetNthEntry@@YAPEAU_NDIS_EVENT_LOG_ENTRY@@PEAU_NDIS_EVENT_LOG@@K@Z.c)
 *     ndisReleaseStackTrace @ 0x1C00C7FC4 (ndisReleaseStackTrace.c)
 */

void __fastcall ndisFreeEventLog(struct NDISWATCHDOG__ *a1)
{
  struct NDISWATCHDOG__ *v1; // rax
  struct _NDIS_EVENT_LOG *v2; // rbx
  unsigned int v3; // edi
  ULONG_PTR StackTrace; // rcx

  if ( a1 )
  {
    v1 = WatchdogFromHandle(a1);
    v2 = (struct _NDIS_EVENT_LOG *)v1;
    if ( ((_BYTE)v1[6] & 2) != 0 )
    {
      v3 = 0;
      if ( *((_DWORD *)v1 + 3) )
      {
        do
        {
          StackTrace = ndisGetNthEntry(v2, v3)->StackTrace;
          if ( (_DWORD)StackTrace )
            ndisReleaseStackTrace(StackTrace);
          ++v3;
        }
        while ( v3 < v2->NumEntries );
      }
    }
    ExFreePoolWithTag(v2, 0);
  }
}
