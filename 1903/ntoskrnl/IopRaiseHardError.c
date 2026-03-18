/*
 * XREFs of IopRaiseHardError @ 0x140854400
 * Callers:
 *     IopApcHardError @ 0x140853670 (IopApcHardError.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     IofCompleteRequest @ 0x1400668C0 (IofCompleteRequest.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400884F4 (IopVerifierExAllocatePool_0.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x14062A720 (ObQueryNameStringMode.c)
 *     ExRaiseHardError @ 0x140913EE0 (ExRaiseHardError.c)
 */

void __fastcall IopRaiseHardError(PIRP Irp, __int64 a2, char *a3)
{
  char v6; // r15
  UNICODE_STRING *Pool_0; // rax
  UNICODE_STRING *v8; // r14
  NTSTATUS v9; // esi
  _KPROCESS *Process; // rcx
  NTSTATUS Status; // r10d
  int v12; // r11d
  int v13; // r8d
  struct _LIST_ENTRY *Flink; // rax
  int v15; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v17; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-35h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v20[48]; // [rsp+48h] [rbp-21h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+78h] [rbp+Fh] BYREF
  struct _LIST_ENTRY *v22; // [rsp+80h] [rbp+17h]
  struct _LIST_ENTRY *v23; // [rsp+88h] [rbp+1Fh]

  memset(v20, 0, sizeof(v20));
  v18 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v6 = 0;
  ObQueryNameStringMode(a3, 0LL, 0, &v18, 0);
  Pool_0 = (UNICODE_STRING *)IopVerifierExAllocatePool_0(PagedPool, v18);
  v8 = Pool_0;
  if ( !Pool_0 )
  {
    v9 = -1073741670;
LABEL_35:
    Irp->IoStatus.Status = v9;
LABEL_36:
    Irp->IoStatus.Information = 0LL;
    goto LABEL_37;
  }
  v9 = ObQueryNameStringMode(a3, (__int64)Pool_0, v18, &v17, 0);
  if ( v9 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    goto LABEL_35;
  }
  if ( a2 && (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    DestinationString.MaximumLength = 64;
    DestinationString.Buffer = (wchar_t *)(a2 + 32);
    DestinationString.Length = *(_WORD *)(a2 + 6);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  Process = Irp->Tail.Overlay.Thread->Process;
  if ( Process != KeGetCurrentThread()->ApcState.Process )
  {
    KiStackAttachProcess(Process, 0, (__int64)v20);
    v6 = 1;
  }
  Status = Irp->IoStatus.Status;
  if ( Status != -1073741806 )
  {
    if ( Status <= -1073741806 )
    {
LABEL_17:
      v12 = 0;
      v13 = 0;
      goto LABEL_19;
    }
    if ( Status <= -1073741804 )
    {
LABEL_16:
      p_DestinationString = v8;
      v12 = 2;
      v13 = 1;
      Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      v23 = 0LL;
      v22 = Flink;
      goto LABEL_19;
    }
    if ( Status != -1073741662 )
    {
      if ( Status == -1073741661 || Status == -1073741643 )
        goto LABEL_16;
      goto LABEL_17;
    }
  }
  v22 = (struct _LIST_ENTRY *)v8;
  p_DestinationString = &DestinationString;
  v12 = 3;
  v13 = 3;
  v23 = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
LABEL_19:
  if ( ExReadyForErrors )
  {
    v15 = ExRaiseHardError(Status, v12, v13, (unsigned int)&p_DestinationString, 8, (__int64)&v17);
  }
  else
  {
    v17 = 0;
    v15 = -1073741823;
  }
  if ( v6 )
    KiUnstackDetachProcess((struct _KTHREAD *)v20, 0);
  ExFreePoolWithTag(v8, 0);
  if ( v15 >= 0 && v17 == 9 )
  {
    ((void (__fastcall *)(PDEVICE_OBJECT, PIRP))Irp->Tail.Overlay.CurrentStackLocation->DeviceObject->DriverObject->MajorFunction[Irp->Tail.Overlay.CurrentStackLocation->MajorFunction])(
      Irp->Tail.Overlay.CurrentStackLocation->DeviceObject,
      Irp);
    return;
  }
  if ( v17 == 3 )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction == 13 && CurrentStackLocation->MinorFunction == 1 )
      Irp->IoStatus.Information = 1LL;
    else
      Irp->IoStatus.Status = -1073741248;
  }
  if ( (Irp->Flags & 0x40) != 0 )
    goto LABEL_36;
LABEL_37:
  IofCompleteRequest(Irp, 1);
}
