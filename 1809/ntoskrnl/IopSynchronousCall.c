/*
 * XREFs of IopSynchronousCall @ 0x1405A3CE0
 * Callers:
 *     PnpSendIrp @ 0x14000E9CC (PnpSendIrp.c)
 *     PnpIrpDeviceEnumerated @ 0x1401606C8 (PnpIrpDeviceEnumerated.c)
 *     IopQueryDeviceState @ 0x1406EB078 (IopQueryDeviceState.c)
 *     PpIrpQueryCapabilities @ 0x1406EC944 (PpIrpQueryCapabilities.c)
 *     PnpIrpQueryID @ 0x1406ED6F0 (PnpIrpQueryID.c)
 *     IopRemoveDevice @ 0x1406EE0A4 (IopRemoveDevice.c)
 *     IopQueryDeviceResources @ 0x1406FC794 (IopQueryDeviceResources.c)
 *     PpIrpQueryResourceRequirements @ 0x1406FD07C (PpIrpQueryResourceRequirements.c)
 *     PnpQueryDeviceText @ 0x1406FEF04 (PnpQueryDeviceText.c)
 *     PnpQueryBusInformation @ 0x140701A58 (PnpQueryBusInformation.c)
 *     IopQueryLegacyBusInformation @ 0x1407027B8 (IopQueryLegacyBusInformation.c)
 *     IopQueryResourceHandlerInterface @ 0x140730BFC (IopQueryResourceHandlerInterface.c)
 *     IopQueryDockRemovalInterface @ 0x14083C2B8 (IopQueryDockRemovalInterface.c)
 *     IopQueryReconfiguration @ 0x14083C3BC (IopQueryReconfiguration.c)
 * Callees:
 *     IovUtilWatermarkIrp @ 0x14000EAC8 (IovUtilWatermarkIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14000EAE8 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IoAllocateIrp @ 0x14008E400 (IoAllocateIrp.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IopQueueThreadIrp @ 0x1400BC2C0 (IopQueueThreadIrp.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x1401367AC (IoGetLowerDeviceObjectWithTag.c)
 */

__int64 __fastcall IopSynchronousCall(struct _DEVICE_OBJECT *a1, __int64 a2, NTSTATUS a3, ULONG_PTR a4, ULONG_PTR *a5)
{
  PDEVICE_OBJECT AttachedDeviceReferenceWithTag; // rax
  struct _DEVICE_OBJECT *v9; // rbx
  PIRP Irp; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  unsigned int v17; // edi
  struct _DEVICE_OBJECT *LowerDeviceObjectWithTag; // rdi
  unsigned int v20; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR v21; // [rsp+38h] [rbp-30h]
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(a1, 0x69706E50u);
  v9 = AttachedDeviceReferenceWithTag;
  if ( (AttachedDeviceReferenceWithTag->Flags & 0x80u) != 0 )
  {
    LowerDeviceObjectWithTag = (struct _DEVICE_OBJECT *)IoGetLowerDeviceObjectWithTag(
                                                          (__int64)AttachedDeviceReferenceWithTag,
                                                          0x69706E50u);
    if ( !LowerDeviceObjectWithTag )
    {
      v17 = -1073741436;
      goto LABEL_7;
    }
    ObfDereferenceObjectWithTag(v9, 0x69706E50u);
    v9 = LowerDeviceObjectWithTag;
  }
  Irp = IoAllocateIrp(v9->StackSize, 0);
  if ( Irp )
  {
    IovUtilWatermarkIrp();
    v20 = a3;
    Irp->IoStatus.Status = a3;
    v21 = a4;
    Irp->IoStatus.Information = a4;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v20;
    Irp->UserEvent = &Event;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)Irp, v11, v12);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v14 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a2;
    v15 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v14;
    v16 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v15;
    *(_QWORD *)&v15 = *(_QWORD *)(a2 + 64);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v16;
    CurrentStackLocation[-1].Context = (PVOID)v15;
    v17 = IofCallDriver(v9, Irp);
    if ( v17 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v17 = v20;
    }
    if ( a5 )
      *a5 = v21;
  }
  else
  {
    v17 = -1073741670;
  }
LABEL_7:
  ObfDereferenceObjectWithTag(v9, 0x69706E50u);
  return v17;
}
