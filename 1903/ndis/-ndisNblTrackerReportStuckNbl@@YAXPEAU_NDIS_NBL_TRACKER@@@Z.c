/*
 * XREFs of ?ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00AA9D0
 * Callers:
 *     ?ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0011AC0 (-ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 */

void __fastcall ndisNblTrackerReportStuckNbl(struct _NDIS_NBL_TRACKER *a1)
{
  __int16 v1; // ax
  char *PoolWithTag; // rax
  char *v4; // rbx
  void *Context; // rcx

  v1 = *((_WORD *)a1 + 8);
  if ( !v1 || v1 > 2 && v1 <= 5 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x5754444Eu);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      Context = a1->Context;
      *(_QWORD *)PoolWithTag = Context;
      *((_DWORD *)PoolWithTag + 2) = *((__int16 *)a1 + 8);
      *((_QWORD *)PoolWithTag + 4) = ndisNblTrackerWatchdogWorkerRoutine;
      *((_QWORD *)PoolWithTag + 5) = PoolWithTag;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      if ( (unsigned __int8)ndisReferenceMiniport((__int64)Context) )
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 16), NormalWorkQueue);
      else
        ExFreePoolWithTag(v4, 0);
    }
  }
}
