/*
 * XREFs of ACPIFilterIrpFilterResourceRequirements @ 0x1C00988D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0002890 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00028B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalInterruptPolarityCacheStorePolarity @ 0x1C0015F44 (ACPIInternalInterruptPolarityCacheStorePolarity.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001DC64 (WPP_RECORDER_SF_qLqss.c)
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C0098ABC (PnpBiosUpdateResourceListWithSidebandResources.c)
 */

__int64 __fastcall ACPIFilterIrpFilterResourceRequirements(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _IO_STACK_LOCATION *v6; // rax
  unsigned int Status; // r14d
  const char *v8; // rsi
  void *Information; // r15
  __int64 v10; // rcx
  int updated; // r13d
  char *v12; // rax
  const char *v13; // r8
  char *v15; // rax
  const char *v16; // r8
  const char *v17; // r10
  char *IrpText; // rax
  const char *v19; // r8
  const char *v20; // r10
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r12
  __int64 v24; // rax
  const char *v25; // rdx
  const char *v26; // rcx
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  PVOID P; // [rsp+B8h] [rbp+10h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v6 = a2->Tail.Overlay.CurrentStackLocation;
  v6[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v6[-1].Context = &Event;
  v6[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  v8 = byte_1C006E28A;
  if ( (int)(Status + 0x80000000) < 0 || Status == -1073741637 )
  {
    Information = (void *)a2->IoStatus.Information;
    if ( !Information )
      Information = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    updated = PnpBiosUpdateResourceListWithSidebandResources(a1, Information, &P, DeviceExtension + 112);
    if ( updated != -1073741772 )
    {
      if ( updated >= 0 )
      {
        v21 = *(_QWORD *)(DeviceExtension + 112);
        v22 = v21 + 8;
        v23 = v21 + 8 + 32LL * *(unsigned int *)(v21 + 4);
        while ( 1 )
        {
          if ( v22 >= v23 )
          {
            if ( Information )
              ExFreePoolWithTag(Information, 0);
            Status = updated;
            a2->IoStatus.Information = (unsigned __int64)P;
            goto LABEL_7;
          }
          if ( *(_BYTE *)(v22 + 1) == 2 )
          {
            updated = ACPIInternalInterruptPolarityCacheStorePolarity(
                        DeviceExtension,
                        *(_DWORD *)(v22 + 12),
                        *(_DWORD *)(v22 + 16));
            if ( updated < 0 )
              break;
          }
          v22 += 32LL;
        }
        v24 = *(_QWORD *)(DeviceExtension + 8);
        v25 = byte_1C006E28A;
        v26 = byte_1C006E28A;
        if ( (v24 & 0x200000000000LL) != 0 )
        {
          v25 = *(const char **)(DeviceExtension + 560);
          if ( (v24 & 0x400000000000LL) != 0 )
            v26 = *(const char **)(DeviceExtension + 568);
        }
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x12u,
          (__int64)&WPP_ed40076b1570389cf10b919aaf05b677_Traceguids,
          (char)a2,
          updated,
          DeviceExtension,
          v25,
          v26);
        ExFreePoolWithTag(P, 0);
      }
      else
      {
        IrpText = ACPIDebugGetIrpText(v10, 0xDu);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x11u,
          (__int64)&WPP_ed40076b1570389cf10b919aaf05b677_Traceguids,
          (char)a2,
          IrpText,
          updated,
          DeviceExtension,
          v20,
          v19);
      }
    }
  }
  else
  {
    v15 = ACPIDebugGetIrpText(0x80000000LL, 0xDu);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0x10u,
      (__int64)&WPP_ed40076b1570389cf10b919aaf05b677_Traceguids,
      (char)a2,
      v15,
      Status,
      DeviceExtension,
      v17,
      v16);
  }
LABEL_7:
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
    v8 = *(const char **)(DeviceExtension + 560);
  v12 = ACPIDebugGetIrpText(v10, 0xDu);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x13u,
    (__int64)&WPP_ed40076b1570389cf10b919aaf05b677_Traceguids,
    (char)a2,
    v12,
    Status,
    DeviceExtension,
    v8,
    v13);
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return Status;
}
