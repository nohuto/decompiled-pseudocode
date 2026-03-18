/*
 * XREFs of CmpInitializeRegistryProcess @ 0x1407584C4
 * Callers:
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExInitializeLookasideListEx @ 0x1400EA270 (ExInitializeLookasideListEx.c)
 *     CmSiProcessTupleInitialize @ 0x14013DCEC (CmSiProcessTupleInitialize.c)
 *     CmSiProcessTupleStartFromHandle @ 0x14018A148 (CmSiProcessTupleStartFromHandle.c)
 *     MmAdjustWorkingSetSize @ 0x14018A1B0 (MmAdjustWorkingSetSize.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x1401C0FD0 (ZwSetInformationProcess.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObOpenObjectByPointer @ 0x1405D0890 (ObOpenObjectByPointer.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FE58C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpCreateRegistryProcessToken @ 0x140757E54 (CmpCreateRegistryProcessToken.c)
 *     PsCreateMinimalProcess @ 0x1407580C4 (PsCreateMinimalProcess.c)
 *     CmpCreateRegistryThread @ 0x1407593C0 (CmpCreateRegistryThread.c)
 */

__int64 CmpInitializeRegistryProcess()
{
  HANDLE v0; // rdi
  void *v1; // rsi
  int v2; // ebx
  void *v3; // rcx
  __int64 v4; // rdx
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  void *v7; // [rsp+60h] [rbp-1h] BYREF
  HANDLE ProcessHandle; // [rsp+68h] [rbp+7h] BYREF
  HANDLE ProcessInformation[2]; // [rsp+70h] [rbp+Fh] BYREF
  _BYTE v10[48]; // [rsp+80h] [rbp+1Fh] BYREF

  memset(v10, 0, sizeof(v10));
  ProcessInformation[0] = 0LL;
  v0 = 0LL;
  ProcessInformation[1] = 0LL;
  v1 = 0LL;
  Object = 0LL;
  ProcessHandle = 0LL;
  v7 = 0LL;
  CmSiProcessTupleInitialize();
  v2 = CmpCreateRegistryProcessToken(&Object);
  if ( v2 >= 0 )
  {
    v2 = PsCreateMinimalProcess(
           PsInitialSystemProcess,
           (__int64)&CmRegistryProcessName,
           0LL,
           BYTE2(PsInitialSystemProcess[2].ActiveProcessors.Bitmap[4]),
           0LL,
           0,
           0,
           0LL,
           0LL,
           &ProcessHandle);
    if ( v2 < 0
      || (v2 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 1u, (POBJECT_TYPE)SeTokenObjectType, 0, ProcessInformation),
          v2 < 0) )
    {
      v0 = ProcessHandle;
    }
    else
    {
      v0 = ProcessHandle;
      v2 = ZwSetInformationProcess(ProcessHandle, ProcessAccessToken, ProcessInformation, 0x10u);
      if ( v2 >= 0 )
      {
        v2 = CmSiProcessTupleStartFromHandle(v3, v0);
        if ( v2 >= 0 )
        {
          v0 = 0LL;
          CmpAttachToRegistryProcess((__int64)v10);
          MmAdjustWorkingSetSize(0x4000000uLL, 0x4000000uLL, 0, 1);
          CmpDetachFromRegistryProcess((struct _KTHREAD *)v10);
          KeInitializeEvent(&CmpDummyThreadEvent, SynchronizationEvent, 0);
          v2 = CmpCreateRegistryThread(&v7, v4, CmpDummyThreadRoutine, 0LL);
          if ( v2 >= 0 )
          {
            v2 = ExInitializeLookasideListEx(
                   (PLOOKASIDE_LIST_EX)&CmpBounceBufferLookaside,
                   (PALLOCATE_FUNCTION_EX)CmpAllocateTransientPoolWithTag,
                   (PFREE_FUNCTION_EX)CmSiFreeMemory,
                   PagedPool,
                   0,
                   0x1000uLL,
                   0x42424D43u,
                   0);
            if ( v2 >= 0 )
              v2 = 0;
          }
          v1 = v7;
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( ProcessInformation[0] )
    ZwClose(ProcessInformation[0]);
  if ( v1 )
    ZwClose(v1);
  if ( v0 )
    ZwClose(v0);
  return (unsigned int)v2;
}
