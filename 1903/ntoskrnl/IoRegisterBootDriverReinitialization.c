/*
 * XREFs of IoRegisterBootDriverReinitialization @ 0x14077E0A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     IopInterlockedInsertTailList @ 0x1401997CC (IopInterlockedInsertTailList.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

void __stdcall IoRegisterBootDriverReinitialization(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_REINITIALIZE DriverReinitializationRoutine,
        PVOID Context)
{
  _QWORD *PoolWithTag; // rax

  if ( IopBootDriverReinitCompleted != 1 )
  {
    ObfReferenceObject(DriverObject);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x69526F49u);
    if ( PoolWithTag )
    {
      DriverObject->Flags |= 0x20u;
      PoolWithTag[2] = DriverObject;
      PoolWithTag[3] = DriverReinitializationRoutine;
      PoolWithTag[4] = Context;
      IopInterlockedInsertTailList((__int64)&IopBootDriverReinitializeQueueHead, PoolWithTag);
    }
    else
    {
      ObfDereferenceObject(DriverObject);
    }
  }
}
