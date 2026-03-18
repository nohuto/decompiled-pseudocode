/*
 * XREFs of ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01C2EF0
 * Callers:
 *     xxxGenerateIAMKey @ 0x1C0009530 (xxxGenerateIAMKey.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxCallGenerateIAMKey(struct tagIAM_KKEY *a1)
{
  NTSTATUS result; // eax
  IRP *v3; // rax
  __int64 v4; // rdx
  NTSTATUS Status; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-19h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+7h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp+17h] BYREF
  _QWORD v14[3]; // [rsp+98h] [rbp+2Fh] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+B0h] [rbp+47h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Device\\KsecDD");
  result = IoGetDeviceObjectPointer(&DestinationString, 0x1F01FFu, &FileObject, &DeviceObject);
  if ( result >= 0 )
  {
    ObfReferenceObject(DeviceObject);
    ObfDereferenceObject(FileObject);
    PushW32ThreadLock((__int64)DeviceObject, v14, UserDereferenceObject);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v3 = IoBuildDeviceIoControlRequest(
           0x390004u,
           DeviceObject,
           0LL,
           0,
           &BugCheckParameter4,
           8u,
           0,
           &Event,
           &IoStatusBlock);
    if ( v3 )
    {
      Status = IofCallDriver(DeviceObject, v3);
      if ( Status == 259 )
      {
        if ( gdwInAtomicOperation )
        {
          v6 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation, v7, v8);
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        EnterCrit(0LL, 1LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
        *((_QWORD *)a1 + 1) = BugCheckParameter4;
    }
    else
    {
      Status = -1073741823;
    }
    PopAndFreeW32ThreadLock((__int64)v14, v4);
    return Status;
  }
  return result;
}
