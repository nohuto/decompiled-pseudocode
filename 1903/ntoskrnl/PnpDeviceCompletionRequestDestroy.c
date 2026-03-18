/*
 * XREFs of PnpDeviceCompletionRequestDestroy @ 0x140145580
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1401454C0 (PnpDeviceCompletionRoutine.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140702480 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     ExQueueWorkItemFromIo @ 0x140080200 (ExQueueWorkItemFromIo.c)
 *     IopQueueWorkItemProlog @ 0x140080604 (IopQueueWorkItemProlog.c)
 *     IoAllocateWorkItem @ 0x140123040 (IoAllocateWorkItem.c)
 */

__int64 __fastcall PnpDeviceCompletionRequestDestroy(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 56), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    result = (__int64)IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 16) + 32LL));
    if ( result )
    {
      v3 = (_QWORD *)IopQueueWorkItemProlog(result, (__int64)&PnpDeviceCompletionRequestDestroyWorkItem, a1);
      return ExQueueWorkItemFromIo(v3, 1);
    }
  }
  return result;
}
