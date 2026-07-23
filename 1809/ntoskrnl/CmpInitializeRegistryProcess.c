/*
 * XREFs of CmpInitializeRegistryProcess @ 0x1407584BC
 * Callers:
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     ExInitializeLookasideListEx @ 0x1400F2FB0 (ExInitializeLookasideListEx.c)
 *     CmSiProcessTupleInitialize @ 0x14013BCB8 (CmSiProcessTupleInitialize.c)
 *     MmAdjustWorkingSetSize @ 0x14018EE70 (MmAdjustWorkingSetSize.c)
 *     CmSiProcessTupleStartFromHandle @ 0x14018EE94 (CmSiProcessTupleStartFromHandle.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x1401B8670 (ZwSetInformationProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 *     PsCreateSystemThreadEx @ 0x14066BC80 (PsCreateSystemThreadEx.c)
 *     PsCreateMinimalProcess @ 0x14075871C (PsCreateMinimalProcess.c)
 *     CmpCreateRegistryProcessToken @ 0x140758B04 (CmpCreateRegistryProcessToken.c)
 */

__int64 CmpInitializeRegistryProcess()
{
  HANDLE v0; // rdi
  void *v1; // rsi
  int MinimalProcess; // ebx
  int v3; // r9d
  void *v4; // rcx
  PVOID Object; // [rsp+58h] [rbp-39h] BYREF
  void *v7; // [rsp+60h] [rbp-31h] BYREF
  HANDLE ProcessHandle; // [rsp+68h] [rbp-29h] BYREF
  HANDLE ProcessInformation[2]; // [rsp+70h] [rbp-21h] BYREF
  __int128 v10; // [rsp+80h] [rbp-11h] BYREF
  __int64 v11; // [rsp+90h] [rbp-1h]
  int v12; // [rsp+98h] [rbp+7h]
  __int128 v13; // [rsp+A0h] [rbp+Fh]
  _BYTE v14[48]; // [rsp+B0h] [rbp+1Fh] BYREF

  Object = 0LL;
  v0 = 0LL;
  ProcessHandle = 0LL;
  v1 = 0LL;
  v7 = 0LL;
  ProcessInformation[0] = 0LL;
  ProcessInformation[1] = 0LL;
  CmSiProcessTupleInitialize();
  MinimalProcess = CmpCreateRegistryProcessToken(&Object);
  if ( MinimalProcess >= 0 )
  {
    LOBYTE(v3) = BYTE2(PsInitialSystemProcess[2].ActiveProcessors.Bitmap[0]);
    MinimalProcess = PsCreateMinimalProcess(
                       (int)PsInitialSystemProcess,
                       (int)&CmRegistryProcessName,
                       0,
                       v3,
                       0LL,
                       0,
                       0,
                       0LL,
                       0LL,
                       (__int64)&ProcessHandle);
    if ( MinimalProcess < 0
      || (MinimalProcess = ObOpenObjectByPointer(
                             Object,
                             0x200u,
                             0LL,
                             1u,
                             (POBJECT_TYPE)SeTokenObjectType,
                             0,
                             ProcessInformation),
          MinimalProcess < 0) )
    {
      v0 = ProcessHandle;
    }
    else
    {
      v0 = ProcessHandle;
      MinimalProcess = ZwSetInformationProcess(ProcessHandle, ProcessAccessToken, ProcessInformation, 0x10u);
      if ( MinimalProcess >= 0 )
      {
        MinimalProcess = CmSiProcessTupleStartFromHandle(v4, v0);
        if ( MinimalProcess >= 0 )
        {
          v0 = 0LL;
          CmpAttachToRegistryProcess((__int64)v14);
          MmAdjustWorkingSetSize(0x4000000uLL, 0x4000000uLL, 0, 1);
          KiUnstackDetachProcess((__int64)v14, 0LL);
          KeInitializeEvent(&CmpDummyThreadEvent, SynchronizationEvent, 0);
          LODWORD(v10) = 48;
          *((_QWORD *)&v10 + 1) = 0LL;
          v12 = 512;
          v11 = 0LL;
          v13 = 0LL;
          MinimalProcess = PsCreateSystemThreadEx(
                             (__int64)&v7,
                             0x1FFFFF,
                             &v10,
                             CmpRegistryProcess,
                             0LL,
                             (__int64)CmpDummyThreadRoutine,
                             0LL,
                             0LL,
                             0LL);
          if ( MinimalProcess >= 0 )
          {
            MinimalProcess = ExInitializeLookasideListEx(
                               (PLOOKASIDE_LIST_EX)&CmpBounceBufferLookaside,
                               0LL,
                               0LL,
                               PagedPool,
                               0,
                               0x1000uLL,
                               0x42424D43u,
                               0);
            if ( MinimalProcess >= 0 )
            {
              CmpUseSectionBackedHives = 1;
              MinimalProcess = 0;
            }
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
  return (unsigned int)MinimalProcess;
}
