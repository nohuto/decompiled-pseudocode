/*
 * XREFs of TtmpAcquireSessionFromTerminalHandle @ 0x1408BF718
 * Callers:
 *     TtmpDispatchAssignDevice @ 0x1408BF870 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1408BF90C (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1408BFA10 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1408BFAF4 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1408BFCF0 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x1408BFDA0 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1408BFE40 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1408BFEE8 (TtmpDispatchSetDisplayTimeouts.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
 */

__int64 __fastcall TtmpAcquireSessionFromTerminalHandle(void *a1, char a2, char a3, _QWORD *a4, __int64 *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v7; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  struct _OBJECT_TYPE *v11; // r8
  NTSTATUS v12; // ebx
  __int64 v14; // rdi
  unsigned int v15; // edi
  struct _KTHREAD *v16; // rax
  __int64 v17; // rdx

  CurrentThread = KeGetCurrentThread();
  v7 = a5;
  *a4 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  v11 = TtmpTerminalObjectType;
  *v7 = 0LL;
  v12 = ObReferenceObjectByHandle(a1, 2u, v11, PreviousMode, (PVOID *)&a5, 0LL);
  if ( v12 >= 0 )
  {
    v12 = 0;
    *v7 = (__int64)a5;
  }
  else
  {
    *v7 = 0LL;
    TtmiLogError("TtmiReferenceTerminalByHandle");
  }
  if ( v12 < 0 )
  {
    TtmiLogError("TtmpAcquireSessionFromTerminalHandle");
    return (unsigned int)v12;
  }
  v14 = *v7;
  if ( *(_DWORD *)(v14 + 28) )
  {
    if ( !a3 )
      goto LABEL_8;
  }
  else if ( !a2 )
  {
LABEL_8:
    v15 = -1073741788;
LABEL_9:
    TtmiLogError("TtmpAcquireSessionFromTerminalHandle");
    return v15;
  }
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  v17 = *(_QWORD *)(v14 + 16);
  if ( (*(_DWORD *)(v17 + 4) & 4) != 0 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
    v15 = -1073740715;
    goto LABEL_9;
  }
  *a4 = v17;
  return 0LL;
}
