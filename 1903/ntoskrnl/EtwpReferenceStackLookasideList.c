/*
 * XREFs of EtwpReferenceStackLookasideList @ 0x1408F3A0C
 * Callers:
 *     EtwpEnableGuid @ 0x140664144 (EtwpEnableGuid.c)
 *     EtwpInitializeStackTracing @ 0x1408F38A8 (EtwpInitializeStackTracing.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

_SLIST_ENTRY *EtwpReferenceStackLookasideList()
{
  int v0; // ebx
  _SLIST_ENTRY *result; // rax

  v0 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_14046B820);
  do
  {
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x820uLL, 0x6C777445u);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, result);
    result = (_SLIST_ENTRY *)(unsigned int)_InterlockedIncrement(&dword_14046B824);
  }
  while ( (int)result < v0 );
  return result;
}
