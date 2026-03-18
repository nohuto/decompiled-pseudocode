/*
 * XREFs of IoFreeWorkItem @ 0x14012E310
 * Callers:
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x14015B500 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __stdcall IoFreeWorkItem(PIO_WORKITEM IoWorkItem)
{
  if ( IoWorkItem->WorkItem.List.Flink )
    KeBugCheckEx(0xE4u, 2uLL, (ULONG_PTR)IoWorkItem, (ULONG_PTR)&IoWorkItem->Routine, 0LL);
  ExFreePoolWithTag(IoWorkItem, 0);
}
