/*
 * XREFs of IoRegisterDriverReinitialization @ 0x140780B40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     IopInterlockedInsertTailList @ 0x140199E2C (IopInterlockedInsertTailList.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

void __stdcall IoRegisterDriverReinitialization(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_REINITIALIZE DriverReinitializationRoutine,
        PVOID Context)
{
  _QWORD *PoolWithTag; // rax

  ObfReferenceObject(DriverObject);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x69526F49u);
  if ( PoolWithTag )
  {
    DriverObject->Flags |= 8u;
    PoolWithTag[2] = DriverObject;
    PoolWithTag[3] = DriverReinitializationRoutine;
    PoolWithTag[4] = Context;
    IopInterlockedInsertTailList((__int64)&IopDriverReinitializeQueueHead, PoolWithTag);
  }
  else
  {
    ObfDereferenceObject(DriverObject);
  }
}
