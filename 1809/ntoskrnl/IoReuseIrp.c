/*
 * XREFs of IoReuseIrp @ 0x1400DF810
 * Callers:
 *     PopAllocateIrp @ 0x14017283C (PopAllocateIrp.c)
 *     PopPrepareIoctl @ 0x140752670 (PopPrepareIoctl.c)
 *     SmKmFileInfoCleanup @ 0x1408ADBA4 (SmKmFileInfoCleanup.c)
 * Callees:
 *     EtwActivityIdControl @ 0x1400A3A90 (EtwActivityIdControl.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     IoSetActivityIdIrp @ 0x1400DF9E0 (IoSetActivityIdIrp.c)
 *     IopIrpHasExtensionType @ 0x140107CCC (IopIrpHasExtensionType.c)
 *     IopIsActivityTracingEventEnabled @ 0x14015FC38 (IopIsActivityTracingEventEnabled.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IovpLogStackTrace @ 0x140925998 (IovpLogStackTrace.c)
 *     VfIoInitializeIrp @ 0x140931428 (VfIoInitializeIrp.c)
 */

void __stdcall IoReuseIrp(PIRP Irp, NTSTATUS Iostatus)
{
  char v2; // r12
  CHAR StackCount; // r14
  UCHAR v6; // si
  USHORT Size; // r13
  __int64 v8; // rax
  signed __int8 AllocationFlags; // dl
  __int64 v10; // rcx
  __int64 v11; // rbp
  USHORT v12; // di
  __int128 v13; // [rsp+40h] [rbp-58h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v2 = 0;
  v13 = 0uLL;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    VfIoInitializeIrp(Irp, retaddr, 1);
    IovpLogStackTrace(Irp);
  }
  StackCount = Irp->StackCount;
  v6 = Irp->AllocationFlags & 0x6D;
  Size = Irp->Size;
  v8 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  AllocationFlags = Irp->AllocationFlags;
  if ( AllocationFlags >= 0 && v8 && (*(_BYTE *)(v8 + 2) & 1) != 0 )
  {
    v10 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
    v2 = 1;
    v11 = v10;
    v13 = *(_OWORD *)(v10 + 24);
  }
  else
  {
    v10 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
    v11 = v10;
    if ( AllocationFlags < 0 )
    {
      *((_QWORD *)&Irp->Tail.CompletionKey + 10) = 0LL;
      Irp->AllocationFlags = AllocationFlags & 0x7F;
      v11 = 0LL;
      goto LABEL_7;
    }
  }
  if ( v10 )
  {
    if ( (Irp->AllocationFlags & 0x80u) == 0 && (*(_BYTE *)(v10 + 2) & 0x20) != 0 )
      *(_QWORD *)(v10 + 40) = 0LL;
    *(_WORD *)(v10 + 2) = 0;
    v11 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  }
LABEL_7:
  v12 = *(&Irp->Size + 1);
  memset(Irp, 0, Size);
  Irp->Size = Size;
  Irp->Type = 6;
  Irp->CurrentLocation = StackCount + 1;
  Irp->StackCount = StackCount;
  Irp->ApcEnvironment = KeGetCurrentThread()->ApcStateIndex;
  Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
  Irp->ThreadListEntry.Flink = &Irp->ThreadListEntry;
  *(&Irp->Size + 1) = v12;
  Irp->AllocationFlags = v6;
  Irp->IoStatus.Status = Iostatus;
  Irp->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)((char *)&Irp[1] + 72 * StackCount);
  if ( v11 )
  {
    *((_QWORD *)&Irp->Tail.CompletionKey + 10) = v11;
    if ( v2 == 1 )
      IoSetActivityIdIrp(Irp, &v13);
    if ( (IopFunctionPointerMask & 4) != 0
      && (IopIrpExtensionStatus & 1) != 0
      && (!(unsigned __int8)IopIrpHasExtensionType(Irp, 0LL)
       || (unsigned __int8)IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_ReuseIrp)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned __int8)IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_ReuseIrp) )
        EtwWriteEx(IoTraceHandle, &IoTrace_KernelIo_ReuseIrp, 0LL, 0, (LPCGUID)(v11 + 24), &ActivityId, 0, 0LL);
      IoSetActivityIdIrp(Irp, &ActivityId);
    }
  }
}
