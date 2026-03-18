/*
 * XREFs of IopSynchronousCall @ 0x140690E2C
 * Callers:
 *     PnpSendIrp @ 0x1400ED8EC (PnpSendIrp.c)
 *     PnpIrpDeviceEnumerated @ 0x14015C168 (PnpIrpDeviceEnumerated.c)
 *     PpIrpQueryCapabilities @ 0x1407021CC (PpIrpQueryCapabilities.c)
 *     IopQueryDeviceState @ 0x1407033D4 (IopQueryDeviceState.c)
 *     PnpQueryDeviceText @ 0x140703B2C (PnpQueryDeviceText.c)
 *     PnpIrpQueryID @ 0x140703F84 (PnpIrpQueryID.c)
 *     PnpQueryBusInformation @ 0x14071CE04 (PnpQueryBusInformation.c)
 *     IopQueryLegacyBusInformation @ 0x14071EBA0 (IopQueryLegacyBusInformation.c)
 *     IopQueryDeviceResources @ 0x140724000 (IopQueryDeviceResources.c)
 *     PpIrpQueryResourceRequirements @ 0x1407248E4 (PpIrpQueryResourceRequirements.c)
 *     IopRemoveDevice @ 0x140732B24 (IopRemoveDevice.c)
 *     IopQueryResourceHandlerInterface @ 0x140754280 (IopQueryResourceHandlerInterface.c)
 *     IopQueryDockRemovalInterface @ 0x14087551C (IopQueryDockRemovalInterface.c)
 *     IopQueryReconfiguration @ 0x140875620 (IopQueryReconfiguration.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x14003B7C0 (IopQueueThreadIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IovUtilWatermarkIrp @ 0x1400ED744 (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x1400ED860 (IoAllocateIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1400ED890 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x140139CDC (IoGetLowerDeviceObjectWithTag.c)
 */

__int64 __fastcall IopSynchronousCall(struct _DEVICE_OBJECT *a1, __int64 a2, NTSTATUS a3, ULONG_PTR a4, ULONG_PTR *a5)
{
  PDEVICE_OBJECT AttachedDeviceReferenceWithTag; // rax
  struct _DEVICE_OBJECT *v9; // rbx
  PIRP Irp; // rdi
  __int64 v11; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  unsigned int v16; // edi
  struct _DEVICE_OBJECT *LowerDeviceObjectWithTag; // rdi
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR v20; // [rsp+38h] [rbp-28h]
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF

  memset(&Event, 0, sizeof(Event));
  v19 = 0LL;
  v20 = 0LL;
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(a1, 0x69706E50u);
  v9 = AttachedDeviceReferenceWithTag;
  if ( (AttachedDeviceReferenceWithTag->Flags & 0x80u) != 0 )
  {
    LowerDeviceObjectWithTag = (struct _DEVICE_OBJECT *)IoGetLowerDeviceObjectWithTag(
                                                          (__int64)AttachedDeviceReferenceWithTag,
                                                          0x69706E50u);
    if ( !LowerDeviceObjectWithTag )
    {
      v16 = -1073741436;
      goto LABEL_7;
    }
    ObfDereferenceObjectWithTag(v9, 0x69706E50u);
    v9 = LowerDeviceObjectWithTag;
  }
  Irp = IoAllocateIrp(v9->StackSize, 0);
  if ( Irp )
  {
    IovUtilWatermarkIrp();
    LODWORD(v19) = a3;
    Irp->IoStatus.Status = a3;
    v20 = a4;
    Irp->IoStatus.Information = a4;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v19;
    Irp->UserEvent = &Event;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)Irp, v11);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v13 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a2;
    v14 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v13;
    v15 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v14;
    *(_QWORD *)&v14 = *(_QWORD *)(a2 + 64);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v15;
    CurrentStackLocation[-1].Context = (PVOID)v14;
    v16 = IofCallDriver(v9, Irp);
    if ( v16 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v16 = v19;
    }
    if ( a5 )
      *a5 = v20;
  }
  else
  {
    v16 = -1073741670;
  }
LABEL_7:
  ObfDereferenceObjectWithTag(v9, 0x69706E50u);
  return v16;
}
