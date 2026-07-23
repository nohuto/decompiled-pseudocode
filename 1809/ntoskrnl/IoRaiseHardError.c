/*
 * XREFs of IoRaiseHardError @ 0x140283440
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeInitializeApc @ 0x14008A350 (KeInitializeApc.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     KeInsertQueueApc @ 0x1400F1500 (KeInsertQueueApc.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     IopGetThreadActiveConsoleId @ 0x14081E164 (IopGetThreadActiveConsoleId.c)
 */

void __stdcall IoRaiseHardError(PIRP Irp, PVPB Vpb, PDEVICE_OBJECT RealDeviceObject)
{
  bool v6; // r14
  PETHREAD Thread; // rsi
  int SessionId; // ebx
  int ThreadActiveConsoleId; // eax
  int v10; // ecx
  LONG SpareLong; // ecx
  PVOID PoolWithTag; // rbx
  bool v13; // bl
  struct _EX_RUNDOWN_REF *p_WaitStatus; // r14
  _DWORD *Teb; // r15
  _KPROCESS *Process; // rbx
  char v17; // si
  int v18; // eax
  unsigned __int64 v19; // rcx
  __int16 v20; // dx
  struct _WORK_QUEUE_ITEM *v21; // rax
  _BYTE v22[48]; // [rsp+58h] [rbp-70h] BYREF

  v6 = 0;
  Thread = Irp->Tail.Overlay.Thread;
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x10) != 0 )
    goto LABEL_26;
  SessionId = MmGetSessionIdEx((__int64)Thread->Process);
  ThreadActiveConsoleId = IopGetThreadActiveConsoleId(Thread);
  v10 = 0;
  if ( SessionId != -1 )
    v10 = SessionId;
  if ( v10 != ThreadActiveConsoleId )
  {
LABEL_26:
    if ( (Irp->Flags & 0x40) == 0 )
      goto LABEL_28;
LABEL_27:
    Irp->IoStatus.Information = 0LL;
    goto LABEL_28;
  }
  if ( (Irp->Flags & 0x3FF1FFFF) != 0x43 && Irp->Tail.Overlay.CurrentStackLocation->MajorFunction != 18 )
  {
    SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
    v6 = SpareLong != 0;
    if ( !SpareLong )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x4350414Bu);
      if ( PoolWithTag )
      {
        KeInitializeApc(
          (__int64)PoolWithTag,
          (__int64)Thread,
          Irp->ApcEnvironment,
          (__int64)SC_ENV::Free,
          (__int64)IopAbortRequest,
          (__int64)IopRaiseHardError,
          0,
          (__int64)Irp);
        KeInsertQueueApc((__int64)PoolWithTag, (__int64)Vpb, (__int64)RealDeviceObject, 0);
        return;
      }
      goto LABEL_28;
    }
  }
  if ( v6 && (Thread->MiscFlags & 0x400) == 0 )
  {
    v13 = 1;
    p_WaitStatus = (struct _EX_RUNDOWN_REF *)&Thread[1].WaitStatus;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
    {
      Teb = Thread->Teb;
      Process = Thread->Process;
      if ( Process == KeGetCurrentThread()->ApcState.Process )
      {
        v17 = 0;
      }
      else
      {
        v17 = 1;
        KiStackAttachProcess(Process, 0LL, (__int64)v22);
      }
      v18 = Teb[1452];
      v19 = Process[1].ActiveProcessors.Bitmap[7];
      if ( v19 )
      {
        v20 = *(_WORD *)(v19 + 8);
        if ( v20 == 332 || v20 == 452 )
          v18 |= Teb[3018];
      }
      v13 = (v18 & 0x10) != 0;
      if ( v17 )
        KiUnstackDetachProcess((__int64)v22, 0LL);
      ExReleaseRundownProtection_0(p_WaitStatus);
    }
    if ( v13 )
      goto LABEL_27;
  }
  v21 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72456F49u);
  if ( v21 )
  {
    v21->WorkerRoutine = (void (__fastcall *)(void *))IopStartApcHardError;
    v21->Parameter = v21;
    v21->List.Flink = 0LL;
    v21[1].List.Flink = (struct _LIST_ENTRY *)Irp;
    v21[1].List.Blink = (struct _LIST_ENTRY *)Vpb;
    v21[1].WorkerRoutine = (void (__fastcall *)(void *))RealDeviceObject;
    ExQueueWorkItem(v21, CriticalWorkQueue);
    return;
  }
LABEL_28:
  IofCompleteRequest(Irp, 1);
}
