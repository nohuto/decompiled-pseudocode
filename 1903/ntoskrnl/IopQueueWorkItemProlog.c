/*
 * XREFs of IopQueueWorkItemProlog @ 0x140080604
 * Callers:
 *     IoQueueWorkItemEx @ 0x140080170 (IoQueueWorkItemEx.c)
 *     IoQueueWorkItem @ 0x140080720 (IoQueueWorkItem.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x140145580 (PnpDeviceCompletionRequestDestroy.c)
 *     IoTryQueueWorkItem @ 0x140180A10 (IoTryQueueWorkItem.c)
 *     IoQueueWorkItemToNode @ 0x1402999B0 (IoQueueWorkItemToNode.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x14000D38C (PsGetWorkOnBehalfThread.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall IopQueueWorkItemProlog(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *WorkOnBehalfThread; // rax
  _OWORD *SparePtr; // rcx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 && KeGetCurrentIrql() < 2u )
  {
    SparePtr = KeGetCurrentThread()[1].WaitBlock[0].SparePtr;
    if ( SparePtr )
    {
      *(_OWORD *)(a1 + 68) = *SparePtr;
    }
    else
    {
      *(_QWORD *)(a1 + 68) = 0LL;
      *(_QWORD *)(a1 + 76) = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 68) = 0LL;
    *(_QWORD *)(a1 + 76) = 0LL;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v10);
    *(_QWORD *)(a1 + 56) = WorkOnBehalfThread;
    if ( WorkOnBehalfThread )
    {
      if ( !v10 )
        ObfReferenceObjectWithTag(WorkOnBehalfThread, 0x746C6644u);
    }
    else if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[16] || PopEnergyEstimationEnabled )
    {
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *(_QWORD *)(a1 + 56) = CurrentThread;
    }
  }
  ObfReferenceObjectWithTag(*(PVOID *)(a1 + 40), 0x746C6644u);
  *(_QWORD *)(a1 + 32) = a2;
  result = a1;
  *(_QWORD *)(a1 + 48) = a3;
  return result;
}
