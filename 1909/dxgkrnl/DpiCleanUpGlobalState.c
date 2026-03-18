/*
 * XREFs of DpiCleanUpGlobalState @ 0x1C029E0B0
 * Callers:
 *     DxgkUnload @ 0x1C023AB20 (DxgkUnload.c)
 * Callees:
 *     DpiPdoPollingWorkItem @ 0x1C02AFBF0 (DpiPdoPollingWorkItem.c)
 */

void DpiCleanUpGlobalState()
{
  KeCancelTimer(&stru_1C00A2930);
  DpiPdoPollingWorkItem((PDEVICE_OBJECT)g_pDriverObject, (PVOID)1);
  KeFlushQueuedDpcs();
  if ( qword_1C00A29B0 )
    IoFreeWorkItem(qword_1C00A29B0);
  ExDeleteNPagedLookasideList(&stru_1C00A2840);
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  ExDeleteNPagedLookasideList(&Lookaside);
  if ( Mutex )
  {
    ExFreePoolWithTag(Mutex, 0);
    Mutex = 0LL;
  }
  if ( qword_1C00A2B28 )
  {
    IoUnregisterPlugPlayNotificationEx(qword_1C00A2B28);
    qword_1C00A2B28 = 0LL;
  }
}
