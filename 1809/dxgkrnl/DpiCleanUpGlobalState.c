/*
 * XREFs of DpiCleanUpGlobalState @ 0x1C026E288
 * Callers:
 *     DxgkUnload @ 0x1C0208940 (DxgkUnload.c)
 * Callees:
 *     DpiPdoPollingWorkItem @ 0x1C0277000 (DpiPdoPollingWorkItem.c)
 */

void DpiCleanUpGlobalState()
{
  KeCancelTimer(&stru_1C008E930);
  DpiPdoPollingWorkItem((PDEVICE_OBJECT)g_pDriverObject, (PVOID)1);
  KeFlushQueuedDpcs();
  if ( qword_1C008E9B0 )
    IoFreeWorkItem(qword_1C008E9B0);
  ExDeleteNPagedLookasideList(&stru_1C008E840);
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
  if ( qword_1C008EB28 )
  {
    IoUnregisterPlugPlayNotificationEx(qword_1C008EB28);
    qword_1C008EB28 = 0LL;
  }
}
