/*
 * XREFs of ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002B690
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00067D0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000BDD0 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiQueueDeferredVisibilityWorkItem(struct _VIDSCH_PRESENT_INFO *a1, struct _VIDSCH_GLOBAL *a2)
{
  if ( _InterlockedCompareExchange((volatile signed __int32 *)a1 + 16608, 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)a2 + 464, 1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a2 + 2) + 24LL));
    *((_QWORD *)a2 + 227) = -1LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a2 + 57, CriticalWorkQueue);
  }
}
