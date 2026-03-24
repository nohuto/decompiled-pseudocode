/*
 * XREFs of EtwpReferenceStackLookasideList @ 0x1408B7068
 * Callers:
 *     EtwpEnableGuid @ 0x140655F38 (EtwpEnableGuid.c)
 *     EtwpInitializeStackTracing @ 0x1408B6F04 (EtwpInitializeStackTracing.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401C5410 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

struct _SLIST_ENTRY *EtwpReferenceStackLookasideList()
{
  int v0; // ebx
  struct _SLIST_ENTRY *result; // rax

  v0 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_14043F9E0);
  do
  {
    result = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x820uLL, 0x6C777445u);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, result);
    result = (struct _SLIST_ENTRY *)(unsigned int)_InterlockedIncrement(&dword_14043F9E4);
  }
  while ( (int)result < v0 );
  return result;
}
