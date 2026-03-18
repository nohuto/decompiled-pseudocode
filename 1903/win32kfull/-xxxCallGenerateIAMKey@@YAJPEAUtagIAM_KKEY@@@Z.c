/*
 * XREFs of ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01D6238
 * Callers:
 *     xxxGenerateIAMKey @ 0x1C000B46C (xxxGenerateIAMKey.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxCallGenerateIAMKey(struct tagIAM_KKEY *a1)
{
  NTSTATUS result; // eax
  __int64 v3; // r9
  IRP *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  NTSTATUS Status; // ebx
  __int64 v9; // rcx
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-19h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v14[3]; // [rsp+80h] [rbp+17h] BYREF
  struct _KEVENT Event; // [rsp+98h] [rbp+2Fh] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+B0h] [rbp+47h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v14, 0, sizeof(v14));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\KsecDD");
  result = IoGetDeviceObjectPointer(&DestinationString, 0x1F01FFu, &FileObject, &DeviceObject);
  if ( result >= 0 )
  {
    ObfReferenceObject(DeviceObject);
    ObfDereferenceObject(FileObject);
    PushW32ThreadLock((__int64)DeviceObject, v14, UserDereferenceObject, v3);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v4 = IoBuildDeviceIoControlRequest(
           0x390004u,
           DeviceObject,
           0LL,
           0,
           &BugCheckParameter4,
           8u,
           0,
           &Event,
           &IoStatusBlock);
    if ( v4 )
    {
      Status = IofCallDriver(DeviceObject, v4);
      if ( Status == 259 )
      {
        if ( gdwInAtomicOperation )
        {
          v9 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v9);
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
    PopAndFreeW32ThreadLock((__int64)v14, v5, v6, v7);
    return Status;
  }
  return result;
}
