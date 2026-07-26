/*
 * XREFs of ndisInitializePerProcessorSlotAllocator @ 0x1C0146F4C
 * Callers:
 *     NdisDllInitialize @ 0x1C0039550 (NdisDllInitialize.c)
 * Callees:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C00395C4 (ndisAllocatePerProcessorPageDescriptor.c)
 */

_LIST_ENTRY *ndisInitializePerProcessorSlotAllocator()
{
  _LIST_ENTRY *result; // rax
  _LIST_ENTRY *Flink; // rcx

  KeInitializeSpinLock(&ndisPerProcessorDescriptorLock);
  qword_1C00E7DA0 = (__int64)&ndisPerProcessorDescriptorList;
  ndisPerProcessorDescriptorList.Flink = &ndisPerProcessorDescriptorList;
  result = (_LIST_ENTRY *)ndisAllocatePerProcessorPageDescriptor();
  if ( result )
  {
    Flink = ndisPerProcessorDescriptorList.Flink;
    if ( ndisPerProcessorDescriptorList.Flink->Blink != &ndisPerProcessorDescriptorList )
      __fastfail(3u);
    result->Flink = ndisPerProcessorDescriptorList.Flink;
    result->Blink = &ndisPerProcessorDescriptorList;
    Flink->Blink = result;
    ndisPerProcessorDescriptorList.Flink = result;
  }
  return result;
}
