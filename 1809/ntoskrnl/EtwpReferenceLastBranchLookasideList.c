/*
 * XREFs of EtwpReferenceLastBranchLookasideList @ 0x1408CACD8
 * Callers:
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1408CAD58 (EtwpUpdateLastBranchTracingConfiguration.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

_SLIST_ENTRY *EtwpReferenceLastBranchLookasideList()
{
  SIZE_T v0; // rdi
  int v1; // ebx
  _SLIST_ENTRY *result; // rax

  v0 = (unsigned int)(24 * EtwpLastBranchStackSize + 16);
  v1 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_140440AC0);
  do
  {
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v0, 0x78777445u);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpLastBranchLookAsideList, result);
    result = (_SLIST_ENTRY *)(unsigned int)_InterlockedIncrement(&dword_140440AC4);
  }
  while ( (int)result < v1 );
  return result;
}
