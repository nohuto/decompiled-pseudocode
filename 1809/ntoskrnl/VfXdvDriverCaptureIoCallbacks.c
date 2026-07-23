/*
 * XREFs of VfXdvDriverCaptureIoCallbacks @ 0x140922338
 * Callers:
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     IovAttachDeviceToDeviceStack @ 0x140924ABC (IovAttachDeviceToDeviceStack.c)
 *     IopInitializeBuiltinDriver @ 0x1409CCA80 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14013A320 (MmIsDriverVerifying.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     VfUtilEqualUnicodeString @ 0x1409270F0 (VfUtilEqualUnicodeString.c)
 */

__int64 __fastcall VfXdvDriverCaptureIoCallbacks(struct _DRIVER_OBJECT *a1)
{
  PDRIVER_EXTENSION DriverExtension; // rsi
  PDRIVER_INITIALIZE *PoolWithTag; // rax
  PDRIVER_INITIALIZE *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 (__fastcall **v8)(__int64, IRP *); // rax
  __int64 (__fastcall *v9)(__int64, IRP *); // rcx
  __int64 (__fastcall *DriverStartIo)(__int64, IRP *); // rax
  PDRIVER_DISPATCH *MajorFunction; // rcx

  DriverExtension = a1->DriverExtension;
  if ( KernelVerifier
    || !MmIsDriverVerifying(a1)
    || (MmVerifierData & 0x80000) == 0
    || (unsigned int)VfUtilEqualUnicodeString(&VfRdbssServiceName, &DriverExtension->ServiceKeyName)
    || (unsigned int)VfUtilEqualUnicodeString(&VfMupServiceName, &DriverExtension->ServiceKeyName)
    || (unsigned int)VfUtilEqualUnicodeString(&VfCscServiceName, &DriverExtension->ServiceKeyName)
    || (unsigned int)VfUtilEqualUnicodeString(&VfAmdkmpagServiceName, &DriverExtension->ServiceKeyName) )
  {
    return 0LL;
  }
  if ( !*(_QWORD *)&DriverExtension[1].ServiceKeyName.Length )
  {
    PoolWithTag = (PDRIVER_INITIALIZE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x494F6656u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x100uLL);
      *v5 = a1->DriverInit;
      v6 = 28LL;
      v5[1] = (PDRIVER_INITIALIZE)a1->DriverStartIo;
      v7 = 28LL;
      v5[2] = (PDRIVER_INITIALIZE)a1->DriverUnload;
      v5[3] = (PDRIVER_INITIALIZE)DriverExtension->AddDevice;
      v8 = (__int64 (__fastcall **)(__int64, IRP *))(v5 + 4);
      do
      {
        v9 = *(__int64 (__fastcall **)(__int64, IRP *))((char *)v8 + (char *)a1 - (char *)v5 + 80);
        if ( v9 && v9 != IopInvalidDeviceRequest )
          *v8 = v9;
        ++v8;
        --v7;
      }
      while ( v7 );
      if ( a1->DriverInit )
        a1->DriverInit = (PDRIVER_INITIALIZE)ViGenericDriverEntry;
      DriverStartIo = (__int64 (__fastcall *)(__int64, IRP *))a1->DriverStartIo;
      if ( DriverStartIo && DriverStartIo != IopInvalidDeviceRequest )
        a1->DriverStartIo = (PDRIVER_STARTIO)ViGenericDriverStartIo;
      if ( a1->DriverUnload )
        a1->DriverUnload = (PDRIVER_UNLOAD)ViGenericDriverUnload;
      if ( DriverExtension->AddDevice )
        DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)ViGenericAddDevice;
      MajorFunction = a1->MajorFunction;
      do
      {
        if ( *MajorFunction )
        {
          if ( (char *)*MajorFunction != (char *)IopInvalidDeviceRequest )
            *MajorFunction = *(PDRIVER_DISPATCH *)((char *)MajorFunction
                                                 + (char *)ViGenericMajorFunctionList
                                                 - (char *)a1
                                                 - 112);
        }
        ++MajorFunction;
        --v6;
      }
      while ( v6 );
      *(_QWORD *)&DriverExtension[1].ServiceKeyName.Length = v5;
      return 1LL;
    }
    return 0LL;
  }
  return 1LL;
}
