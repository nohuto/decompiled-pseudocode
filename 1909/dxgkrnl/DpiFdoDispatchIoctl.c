/*
 * XREFs of DpiFdoDispatchIoctl @ 0x1C029F6C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C004A3D8 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C004A4FC (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C004B998 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C020EDA8 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 *     DxgkDdiCreateVirtualGpu @ 0x1C0210168 (DxgkDdiCreateVirtualGpu.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x1C02101DC (DxgkDdiDestroyVirtualGpu.c)
 *     DxgkDdiGetGpuPartitionInfo @ 0x1C0210388 (DxgkDdiGetGpuPartitionInfo.c)
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C0210604 (DxgkDdiGetVirtualGpuInfo.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x1C02106F4 (DxgkDdiGetVirtualGpuProfile.c)
 *     DxgkDdiQueryMitigatedRangeCount @ 0x1C0210760 (DxgkDdiQueryMitigatedRangeCount.c)
 *     DxgkDdiQueryMitigatedRanges @ 0x1C02107C8 (DxgkDdiQueryMitigatedRanges.c)
 *     DxgkDdiQueryPhysicalFunctionLuid @ 0x1C021083C (DxgkDdiQueryPhysicalFunctionLuid.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x1C0210D04 (DxgkDdiSetGpuPartitionCount.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C0211038 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C02A0904 (DpiFdoGetVirtualGpuType.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C02A3AF0 (DpiFlexIovMitigationUpdate.c)
 *     DpiGetVirtualizationFlags @ 0x1C02A3CC8 (DpiGetVirtualizationFlags.c)
 *     DpiSriovAttach @ 0x1C02A3F3C (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C02A40B0 (DpiSriovDetach.c)
 *     DpiSriovEventComplete @ 0x1C02A4294 (DpiSriovEventComplete.c)
 *     DpiSriovNotification @ 0x1C02A4380 (DpiSriovNotification.c)
 *     DpiIndirectDdiIoControl @ 0x1C02AC224 (DpiIndirectDdiIoControl.c)
 */

NTSTATUS __fastcall DpiFdoDispatchIoctl(struct _DEVICE_OBJECT *a1, struct _IRP *a2, __int64 a3)
{
  ULONG_PTR v3; // rsi
  PDEVICE_OBJECT *DeviceExtension; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  NTSTATUS v8; // ebx
  unsigned int LowPart; // eax
  ULONG_PTR Length; // r13
  unsigned int Options; // r12d
  __int64 v12; // rax
  struct _IRP *MasterIrp; // rdi
  __int64 v14; // r8
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v22; // ebx
  __m256i *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  ADAPTER_RENDER ***v28; // r15
  unsigned int v29; // r13d
  int v30; // r12d
  ADAPTER_RENDER **v31; // rcx
  __int64 v32; // r9
  int GpuPartitionInfo; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  ULONG Flags; // eax
  __int64 v40; // rax
  int MitigatedRanges; // eax
  int v42; // eax
  ADAPTER_RENDER **v43; // rcx
  int MitigatedRangeCount; // eax
  int v45; // eax
  __int64 v46; // xmm1_8
  NTSTATUS v47; // eax
  unsigned int v48; // eax
  int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // eax
  NTSTATUS VirtualizationFlags; // eax
  int v59; // eax
  ADAPTER_RENDER **v60; // rcx
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rax
  NTSTATUS v65; // edx
  int v66; // ebx
  CSHORT v67; // cx
  void *v68; // rax
  struct _LIST_ENTRY *v69; // rcx
  DRIVER_CANCEL *v70; // rax
  struct _LIST_ENTRY *v71; // rcx
  void *v72; // rax
  void *v73; // rcx
  struct _LIST_ENTRY *v74; // rax
  ULONG_PTR v75; // rcx
  unsigned int VirtualGpuType; // eax
  __int64 v77; // rbx
  unsigned int v78; // r12d
  unsigned __int8 v79; // zf
  ADAPTER_RENDER ***v80; // r15
  ADAPTER_RENDER **v81; // rcx
  __int64 *v82; // rcx
  ADAPTER_RENDER **v83; // rcx
  __int64 v84; // rax
  unsigned int v85[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct _IRP *v86; // [rsp+50h] [rbp-B0h]
  __int64 v87; // [rsp+58h] [rbp-A8h] BYREF
  ADAPTER_RENDER ***v88; // [rsp+60h] [rbp-A0h]
  __m256i v89; // [rsp+68h] [rbp-98h] BYREF
  unsigned int Data1; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v91[41]; // [rsp+94h] [rbp-6Ch] BYREF
  GUID v92[153]; // [rsp+140h] [rbp+40h] BYREF

  v3 = 0LL;
  DeviceExtension = (PDEVICE_OBJECT *)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v8 = -1073741637;
  v87 = 0LL;
  v88 = (ADAPTER_RENDER ***)DeviceExtension;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( *((_BYTE *)DeviceExtension + 1159) && (!*((_BYTE *)DeviceExtension + 1160) || LowPart != 2345988) )
  {
    v12 = WdLogNewEntry5_WdError(DeviceExtension, CurrentStackLocation, a3);
    *(_QWORD *)(v12 + 24) = -1073741637LL;
LABEL_5:
    WdLogEvent5_WdError(v12);
LABEL_119:
    a2->IoStatus.Status = v8;
    a2->IoStatus.Information = v3;
    IofCompleteRequest(a2, 1);
    return v8;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v14 = 2253900LL;
  if ( LowPart > 0x22644C )
  {
    v50 = LowPart - 2253908;
    if ( !v50 )
    {
      if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
        goto LABEL_41;
      if ( Options >= 0x78 && MasterIrp && (unsigned int)Length >= 0x88 )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v85, a1, a2, 0);
        v8 = (int)v86;
        if ( (int)v86 >= 0 )
        {
          VirtualGpuType = DpiFdoGetVirtualGpuType(a2);
          v77 = *(_QWORD *)&MasterIrp->Flags;
          v78 = VirtualGpuType;
          if ( v77 || MasterIrp->AssociatedIrp.MasterIrp || MasterIrp->ThreadListEntry.Flink )
          {
            memset(v92, 0, sizeof(v92));
            v79 = LOBYTE(MasterIrp->UserBuffer) == 0;
            v80 = v88;
            v92[0].Data1 = (unsigned __int16)MasterIrp->Type;
            *(_QWORD *)&v92[1].Data1 = MasterIrp->AssociatedIrp.MasterIrp;
            v81 = v88[487];
            *(_QWORD *)v92[1].Data4 = MasterIrp->ThreadListEntry.Flink;
            v92[2] = *(GUID *)&MasterIrp->ThreadListEntry.Blink;
            v92[3] = *(GUID *)&MasterIrp->IoStatus.Information;
            v92[4] = *(GUID *)&MasterIrp->UserIosb;
            v92[5] = *(GUID *)&MasterIrp->Overlay.AsynchronousParameters.UserApcRoutine;
            *(_QWORD *)&v92[6].Data1 = MasterIrp->CancelRoutine;
            *(_QWORD *)v92[0].Data4 = v77;
            LODWORD(v86) = DxgkDdiCreateVirtualGpu(v81, v78, v79, v92);
            v8 = (int)v86;
            if ( (int)v86 >= 0 )
            {
              memset(v91, 0, 0x64uLL);
              v82 = (__int64 *)v80[487];
              Data1 = v92[0].Data1;
              LODWORD(v86) = DxgkDdiGetVirtualGpuInfo(
                               v82,
                               v78,
                               &Data1,
                               (PMDL *)((char *)&MasterIrp->MdlAddress + 4),
                               &MasterIrp->Flags + 1);
              v8 = (int)v86;
              if ( (int)v86 < 0 )
              {
                v83 = v80[487];
                LODWORD(v87) = v92[0].Data1;
                DxgkDdiDestroyVirtualGpu(v83, v78, (unsigned int *)&v87);
              }
              else
              {
                v3 = 136LL;
                LOWORD(MasterIrp->MdlAddress) = v92[0].Data1;
                MasterIrp->ThreadListEntry.Blink = *(struct _LIST_ENTRY **)&v91[1];
                MasterIrp->IoStatus.Pointer = *(PVOID *)&v91[3];
                MasterIrp->IoStatus.Information = *(_QWORD *)&v91[5];
                *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)&v91[7];
                MasterIrp->UserIosb = *(PIO_STATUS_BLOCK *)&v91[9];
                MasterIrp->UserEvent = *(PKEVENT *)&v91[11];
                MasterIrp->Overlay.AllocationSize.QuadPart = *(_QWORD *)&v91[13];
                MasterIrp->Overlay.AsynchronousParameters.UserApcContext = *(PVOID *)&v91[15];
                MasterIrp->CancelRoutine = *(PDRIVER_CANCEL *)&v91[17];
                MasterIrp->UserBuffer = *(PVOID *)&v91[19];
                MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = *(struct _LIST_ENTRY **)&v91[21];
                MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = *(struct _LIST_ENTRY **)&v91[23];
              }
            }
          }
          else
          {
            LODWORD(v87) = (unsigned __int16)MasterIrp->Type;
            v8 = DxgkDdiDestroyVirtualGpu(v88[487], VirtualGpuType, (unsigned int *)&v87);
            LODWORD(v86) = v8;
          }
        }
        goto LABEL_22;
      }
      goto LABEL_117;
    }
    v51 = v50 - 4;
    if ( !v51 )
    {
      if ( Options >= 2 && MasterIrp && (unsigned int)Length >= 0x80 )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v85, a1, a2, 1);
        v65 = (int)v86;
        if ( (int)v86 >= 0 )
        {
          v66 = DpiFdoGetVirtualGpuType(a2);
          memset(v91, 0, 0x64uLL);
          Data1 = (unsigned __int16)MasterIrp->Type;
          LODWORD(v86) = DxgkDdiGetVirtualGpuInfo(
                           (__int64 *)v88[487],
                           v66,
                           &Data1,
                           &MasterIrp->Size + 1,
                           (PMDL *)((char *)&MasterIrp->MdlAddress + 4));
          v65 = (int)v86;
          if ( (int)v86 >= 0 )
          {
            v3 = 128LL;
            v67 = Data1;
            *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)&v91[9];
            MasterIrp->UserIosb = *(PIO_STATUS_BLOCK *)&v91[11];
            MasterIrp->UserEvent = *(PKEVENT *)&v91[13];
            MasterIrp->Overlay.AllocationSize.QuadPart = *(_QWORD *)&v91[15];
            v68 = *(void **)&v91[17];
            MasterIrp->Type = v67;
            v69 = *(struct _LIST_ENTRY **)&v91[1];
            MasterIrp->Overlay.AsynchronousParameters.UserApcContext = v68;
            v70 = *(DRIVER_CANCEL **)&v91[19];
            MasterIrp->ThreadListEntry.Flink = v69;
            v71 = *(struct _LIST_ENTRY **)&v91[3];
            MasterIrp->CancelRoutine = v70;
            v72 = *(void **)&v91[21];
            MasterIrp->ThreadListEntry.Blink = v71;
            v73 = *(void **)&v91[5];
            MasterIrp->UserBuffer = v72;
            v74 = *(struct _LIST_ENTRY **)&v91[23];
            MasterIrp->IoStatus.Pointer = v73;
            v75 = *(_QWORD *)&v91[7];
            MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = v74;
            MasterIrp->IoStatus.Information = v75;
          }
        }
        v8 = v65;
        goto LABEL_22;
      }
      goto LABEL_117;
    }
    v52 = v51 - 4;
    if ( !v52 )
      goto LABEL_94;
    v53 = v52 - 4;
    if ( !v53 )
    {
      if ( Options >= 8 && MasterIrp )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v85, a1, a2, 1);
        v8 = (int)v86;
        if ( (int)v86 < 0 )
          goto LABEL_22;
        v59 = DpiFdoGetVirtualGpuType(a2);
        v89.m256i_i32[0] = 0;
        v89.m256i_i32[1] = Options;
        v60 = v88[487];
        v89.m256i_i64[1] = (unsigned int)Length;
        v89.m256i_i64[2] = (__int64)MasterIrp;
        v89.m256i_i64[3] = (__int64)MasterIrp;
        VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid((__int64)v60[320], v59, (struct _LUID *)MasterIrp);
        if ( VirtualGpuByLuid )
        {
          v89.m256i_i32[0] = *((_DWORD *)VirtualGpuByLuid + 6);
          LODWORD(v86) = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, __m256i *))(*(_QWORD *)VirtualGpuByLuid
                                                                                         + 40LL))(
                           VirtualGpuByLuid,
                           &v89);
          v8 = (int)v86;
          if ( (int)v86 >= 0 )
            v3 = v89.m256i_u32[2];
          goto LABEL_22;
        }
        v64 = WdLogNewEntry5_WdError(0LL, v62, v63);
        *(_QWORD *)(v64 + 24) = 1531LL;
        WdLogEvent5_WdError(v64);
        goto LABEL_36;
      }
      goto LABEL_117;
    }
    v54 = v53 - 996;
    if ( !v54 )
    {
      if ( !a2->RequestorMode || DxgkpCheckProcessForVirtualMachineManagementAccess() )
      {
        DpiFdoGetVirtualGpuType(a2);
        VirtualizationFlags = DpiGetVirtualizationFlags(a1, (__int64)MasterIrp, Length, (__int64)&v87);
        v3 = v87;
        v8 = VirtualizationFlags;
        goto LABEL_118;
      }
      goto LABEL_41;
    }
    v55 = v54 - 4;
    if ( v55 )
    {
      v56 = v55 - 20;
      if ( v56 )
      {
        if ( v56 != 91048 )
          goto LABEL_80;
        v47 = DpiIndirectDdiIoControl(
                (_DWORD)DeviceExtension,
                Options,
                (_DWORD)MasterIrp,
                Length,
                (__int64)MasterIrp,
                (__int64)&v87);
      }
      else
      {
        v47 = DpiFlexIovMitigationUpdate(a1, a2, (__int64)MasterIrp, CurrentStackLocation->Parameters.Read.Length);
      }
    }
    else
    {
LABEL_94:
      v47 = DpiSetPartitionVmbus(a1, a2, a2->AssociatedIrp.MasterIrp, Options);
    }
LABEL_95:
    v8 = v47;
    goto LABEL_118;
  }
  if ( LowPart == 2253900 )
  {
    if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
      goto LABEL_41;
    if ( Options < 2 || !MasterIrp )
      goto LABEL_117;
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v85, a1, a2, 1);
    MitigatedRangeCount = (int)v86;
    if ( (int)v86 >= 0 )
    {
      v49 = DpiFdoGetVirtualGpuType(a2);
      LODWORD(v87) = (unsigned __int16)MasterIrp->Type;
      MitigatedRangeCount = DxgkDdiSetGpuPartitionCount(v88[487], v49, (int *)&v87);
      LODWORD(v86) = MitigatedRangeCount;
    }
    goto LABEL_57;
  }
  v15 = LowPart - 2252868;
  if ( !v15 )
  {
    v47 = DpiSriovNotification(a1, a2);
    goto LABEL_95;
  }
  v16 = v15 - 4;
  if ( !v16 )
  {
    if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
      goto LABEL_41;
    v48 = DpiFdoGetVirtualGpuType(a2);
    v47 = DpiSriovEventComplete(a1, v48, MasterIrp, Options);
    goto LABEL_95;
  }
  v17 = v16 - 4;
  if ( !v17 )
  {
    v47 = DpiSriovAttach(a1, a2);
    goto LABEL_95;
  }
  v18 = v17 - 4;
  if ( !v18 )
  {
    if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
      goto LABEL_41;
    DpiFdoGetVirtualGpuType(a2);
    v47 = DpiSriovDetach(a1);
    goto LABEL_95;
  }
  v19 = v18 - 8;
  if ( !v19 )
  {
    if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
      goto LABEL_41;
    if ( Options < 2 || !MasterIrp || (unsigned int)Length < 0x18 )
      goto LABEL_117;
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v85, a1, a2, 1);
    MitigatedRangeCount = (int)v86;
    if ( (int)v86 >= 0 )
    {
      v45 = DpiFdoGetVirtualGpuType(a2);
      v89.m256i_i32[0] = (unsigned __int16)MasterIrp->Type;
      memset((char *)v89.m256i_i64 + 4, 0, 24);
      MitigatedRangeCount = DxgkDdiQueryMitigatedRangeCount(v88[487], v45, (unsigned int *)&v89);
      LODWORD(v86) = MitigatedRangeCount;
      if ( MitigatedRangeCount >= 0 )
      {
        v3 = 24LL;
        v46 = *(__int64 *)((char *)&v89.m256i_i64[2] + 4);
        *(_OWORD *)&MasterIrp->Type = *(_OWORD *)((char *)v89.m256i_i64 + 4);
        *(_QWORD *)&MasterIrp->Flags = v46;
      }
    }
LABEL_57:
    v8 = MitigatedRangeCount;
    goto LABEL_22;
  }
  v20 = v19 - 4;
  if ( v20 )
  {
    v21 = v20 - 1000;
    if ( v21 )
    {
      if ( v21 == 4 )
      {
        if ( Options >= 2 && MasterIrp && (unsigned int)Length >= 0xA8 )
        {
          CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v85, a1, a2, 1);
          v8 = (int)v86;
          if ( (int)v86 >= 0 )
          {
            v22 = DpiFdoGetVirtualGpuType(a2);
            memset(v91, 0, sizeof(v91));
            Data1 = (unsigned __int16)MasterIrp->Type;
            LODWORD(v86) = DxgkDdiGetVirtualGpuProfile(v88[487], v22, (int *)&Data1);
            v8 = (int)v86;
            if ( (int)v86 >= 0 )
            {
              v3 = 168LL;
              *(_DWORD *)&MasterIrp->Type = Data1;
              *(_DWORD *)(&MasterIrp->Size + 1) = v91[0];
              MasterIrp->MdlAddress = *(PMDL *)&v91[1];
              *(_QWORD *)&MasterIrp->Flags = *(_QWORD *)&v91[3];
              MasterIrp->AssociatedIrp.MasterIrp = *(struct _IRP **)&v91[5];
              MasterIrp->ThreadListEntry.Flink = *(struct _LIST_ENTRY **)&v91[7];
              MasterIrp->ThreadListEntry.Blink = *(struct _LIST_ENTRY **)&v91[9];
              MasterIrp->IoStatus.Pointer = *(PVOID *)&v91[11];
              MasterIrp->IoStatus.Information = *(_QWORD *)&v91[13];
              *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)&v91[15];
              MasterIrp->UserIosb = *(PIO_STATUS_BLOCK *)&v91[17];
              MasterIrp->UserEvent = *(PKEVENT *)&v91[19];
              MasterIrp->Overlay.AllocationSize.QuadPart = *(_QWORD *)&v91[21];
              MasterIrp->Overlay.AsynchronousParameters.UserApcContext = *(PVOID *)&v91[23];
              MasterIrp->CancelRoutine = *(PDRIVER_CANCEL *)&v91[25];
              MasterIrp->UserBuffer = *(PVOID *)&v91[27];
              MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = *(struct _LIST_ENTRY **)&v91[29];
              MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = *(struct _LIST_ENTRY **)&v91[31];
              MasterIrp->Tail.Overlay.DriverContext[2] = *(PVOID *)&v91[33];
              MasterIrp->Tail.Overlay.DriverContext[3] = *(PVOID *)&v91[35];
              MasterIrp->Tail.Overlay.Thread = *(PETHREAD *)&v91[37];
              MasterIrp->Tail.Overlay.AuxiliaryBuffer = *(PCHAR *)&v91[39];
            }
          }
          goto LABEL_22;
        }
        goto LABEL_117;
      }
LABEL_80:
      ++a2->CurrentLocation;
      a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return IofCallDriver(DeviceExtension[20], a2);
    }
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v85, a1, a2, 1);
    if ( (int)v86 < 0 )
    {
LABEL_22:
      v23 = (__m256i *)v85;
LABEL_23:
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v23);
      goto LABEL_118;
    }
    memset(&v89, 0, 24);
    if ( !MasterIrp || (unsigned int)Length < 0x18 )
    {
      v40 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      *(_QWORD *)(v40 + 24) = 2253892LL;
      WdLogEvent5_WdWarning(v40);
      v8 = -1073741789;
      goto LABEL_32;
    }
    v27 = DpiFdoGetVirtualGpuType(a2);
    v28 = v88;
    v89.m256i_i64[1] = (__int64)(&MasterIrp->Flags + 1);
    v29 = (unsigned int)(Length - 20) >> 1;
    v30 = v27;
    v31 = v88[487];
    v89.m256i_i32[0] = v29;
    GpuPartitionInfo = DxgkDdiGetGpuPartitionInfo(v31, v27, (struct _DXGKARG_GETGPUPARTITIONINFO *)&v89, v32);
    LODWORD(v86) = GpuPartitionInfo;
    v8 = GpuPartitionInfo;
    if ( GpuPartitionInfo >= 0 )
    {
      if ( v89.m256i_i32[0] <= v29 && v89.m256i_i32[0] )
      {
        *(_DWORD *)&MasterIrp->Type = v89.m256i_i32[0];
        WORD2(MasterIrp->MdlAddress) = v89.m256i_i16[8];
        LOBYTE(v3) = *((_BYTE *)v28 + 1152) != 0;
        MasterIrp->Flags = MasterIrp->Flags & 0xFFFFFFFE | v3;
        DxgkDdiQueryPhysicalFunctionLuid((char *)v28[487], v30, (struct _LUID *)(&MasterIrp->Size + 1));
        v3 = (unsigned int)(2 * v89.m256i_i32[0] + 20);
        goto LABEL_22;
      }
      v37 = WdLogNewEntry5_WdWarning(v35, v34, v36);
      *(_QWORD *)(v37 + 24) = 2253892LL;
      WdLogEvent5_WdWarning(v37);
      v8 = -1073741811;
LABEL_32:
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v85);
      goto LABEL_119;
    }
    if ( GpuPartitionInfo != -1073741789 )
      goto LABEL_22;
    if ( v89.m256i_i32[0] )
    {
      *(_DWORD *)&MasterIrp->Type = v89.m256i_i32[0];
      WORD2(MasterIrp->MdlAddress) = v89.m256i_i16[8];
      v8 = -2147483643;
      Flags = MasterIrp->Flags;
      LOBYTE(v3) = *((_BYTE *)v28 + 1152) != 0;
      LODWORD(v86) = -2147483643;
      MasterIrp->Flags = Flags & 0xFFFFFFFE | v3;
      RtlCopyLuid((PLUID)(&MasterIrp->Size + 1), (PLUID)v28 + 334);
      v3 = 24LL;
      goto LABEL_22;
    }
    v38 = WdLogNewEntry5_WdWarning(v35, v34, v36);
    *(_QWORD *)(v38 + 24) = 2253892LL;
    WdLogEvent5_WdWarning(v38);
LABEL_36:
    v8 = -1073741811;
    LODWORD(v86) = -1073741811;
    goto LABEL_22;
  }
  if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
  {
LABEL_41:
    v12 = WdLogNewEntry5_WdError(DeviceExtension, CurrentStackLocation, v14);
    v8 = -1073741790;
    *(_QWORD *)(v12 + 24) = -1073741790LL;
    goto LABEL_5;
  }
  if ( Options >= 4 && MasterIrp && (unsigned int)Length >= 0x10 )
  {
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&v89, a1, a2, 1);
    MitigatedRanges = v89.m256i_i32[4];
    if ( v89.m256i_i32[4] >= 0 )
    {
      v42 = DpiFdoGetVirtualGpuType(a2);
      v85[0] = (unsigned __int16)MasterIrp->Type;
      v85[1] = LOBYTE(MasterIrp->Size);
      v85[2] = (unsigned int)Length >> 4;
      v43 = v88[487];
      v85[3] = 0;
      v86 = MasterIrp;
      MitigatedRanges = DxgkDdiQueryMitigatedRanges(v43, v42, v85);
      v89.m256i_i32[4] = MitigatedRanges;
      if ( MitigatedRanges >= 0 )
        v3 = Length;
    }
    v8 = MitigatedRanges;
    v23 = &v89;
    goto LABEL_23;
  }
LABEL_117:
  v8 = -1073741789;
  v84 = WdLogNewEntry5_WdError(DeviceExtension, CurrentStackLocation, v14);
  *(_QWORD *)(v84 + 24) = -1073741789LL;
  WdLogEvent5_WdError(v84);
LABEL_118:
  if ( v8 != 259 )
    goto LABEL_119;
  return v8;
}
