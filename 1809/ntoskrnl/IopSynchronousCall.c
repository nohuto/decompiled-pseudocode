/*
 * XREFs of IopSynchronousCall @ 0x1405A2CE0
 * Callers:
 *     PnpSendIrp @ 0x14000E9CC (PnpSendIrp.c)
 *     PnpIrpDeviceEnumerated @ 0x1401605A8 (PnpIrpDeviceEnumerated.c)
 *     IopQueryDeviceState @ 0x1406E9DF8 (IopQueryDeviceState.c)
 *     PpIrpQueryCapabilities @ 0x1406EB6C4 (PpIrpQueryCapabilities.c)
 *     PnpIrpQueryID @ 0x1406EC470 (PnpIrpQueryID.c)
 *     IopRemoveDevice @ 0x1406ECE24 (IopRemoveDevice.c)
 *     IopQueryDeviceResources @ 0x1406FB514 (IopQueryDeviceResources.c)
 *     PpIrpQueryResourceRequirements @ 0x1406FBDFC (PpIrpQueryResourceRequirements.c)
 *     PnpQueryDeviceText @ 0x1406FDC84 (PnpQueryDeviceText.c)
 *     PnpQueryBusInformation @ 0x1407007D8 (PnpQueryBusInformation.c)
 *     IopQueryLegacyBusInformation @ 0x140701538 (IopQueryLegacyBusInformation.c)
 *     IopQueryResourceHandlerInterface @ 0x14072FA2C (IopQueryResourceHandlerInterface.c)
 *     IopQueryDockRemovalInterface @ 0x14083B078 (IopQueryDockRemovalInterface.c)
 *     IopQueryReconfiguration @ 0x14083B17C (IopQueryReconfiguration.c)
 * Callees:
 *     IovUtilWatermarkIrp @ 0x14000EAC8 (IovUtilWatermarkIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14000EAE8 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IoAllocateIrp @ 0x14008E4E0 (IoAllocateIrp.c)
 *     IofCallDriver @ 0x1400B8DD0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8E50 (KeInitializeEvent.c)
 *     IopQueueThreadIrp @ 0x1400BC360 (IopQueueThreadIrp.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14013668C (IoGetLowerDeviceObjectWithTag.c)
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
