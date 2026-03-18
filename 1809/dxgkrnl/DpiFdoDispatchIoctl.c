/*
 * XREFs of DpiFdoDispatchIoctl @ 0x1C0263DD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C0042E3C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C0042F78 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C004419C (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C01DF3E0 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 *     DxgkDdiCreateVirtualGpu @ 0x1C01E0788 (DxgkDdiCreateVirtualGpu.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x1C01E07FC (DxgkDdiDestroyVirtualGpu.c)
 *     DxgkDdiGetGpuPartitionInfo @ 0x1C01E09A8 (DxgkDdiGetGpuPartitionInfo.c)
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C01E0C2C (DxgkDdiGetVirtualGpuInfo.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x1C01E0D08 (DxgkDdiGetVirtualGpuProfile.c)
 *     DxgkDdiQueryMitigatedRangeCount @ 0x1C01E0D74 (DxgkDdiQueryMitigatedRangeCount.c)
 *     DxgkDdiQueryMitigatedRanges @ 0x1C01E0DDC (DxgkDdiQueryMitigatedRanges.c)
 *     DxgkDdiQueryPhysicalFunctionLuid @ 0x1C01E0E50 (DxgkDdiQueryPhysicalFunctionLuid.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x1C01E132C (DxgkDdiSetGpuPartitionCount.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C01E1670 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C0264FC4 (DpiFdoGetVirtualGpuType.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C0267B64 (DpiFlexIovMitigationUpdate.c)
 *     DpiGetVirtualizationFlags @ 0x1C0267D3C (DpiGetVirtualizationFlags.c)
 *     DpiSriovAttach @ 0x1C0267FB0 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C0268120 (DpiSriovDetach.c)
 *     DpiSriovEventComplete @ 0x1C0268304 (DpiSriovEventComplete.c)
 *     DpiSriovNotification @ 0x1C02683F0 (DpiSriovNotification.c)
 *     DpiIndirectDdiIoControl @ 0x1C026FA68 (DpiIndirectDdiIoControl.c)
 */

NTSTATUS __fastcall DpiFdoDispatchIoctl(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  ULONG_PTR v2; // rsi
  PDEVICE_OBJECT *DeviceExtension; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  NTSTATUS v7; // ebx
  unsigned int LowPart; // eax
  ULONG_PTR Length; // r13
  unsigned int Options; // r12d
  __int64 v11; // rax
  struct _IRP *MasterIrp; // rdi
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // ebx
  CInterfaceCallContext *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // r15
  unsigned int v27; // r13d
  int v28; // r12d
  ADAPTER_RENDER **v29; // rcx
  __int64 v30; // r9
  int GpuPartitionInfo; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  ULONG Flags; // eax
  __int64 v38; // rax
  int MitigatedRanges; // eax
  int v40; // eax
  int MitigatedRangeCount; // eax
  int v42; // eax
  __int64 v43; // xmm1_8
  NTSTATUS v44; // eax
  unsigned int v45; // eax
  int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  NTSTATUS VirtualizationFlags; // eax
  int v56; // ebx
  __int64 v57; // rcx
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  __int64 v59; // rax
  NTSTATUS v60; // edx
  int v61; // ebx
  CSHORT v62; // cx
  void *v63; // rax
  struct _LIST_ENTRY *v64; // rcx
  DRIVER_CANCEL *v65; // rax
  struct _LIST_ENTRY *v66; // rcx
  void *v67; // rax
  void *v68; // rcx
  struct _LIST_ENTRY *v69; // rax
  ULONG_PTR v70; // rcx
  int VirtualGpuType; // eax
  __int64 v72; // rbx
  int v73; // r12d
  char v74; // zf
  __int64 v75; // r15
  ADAPTER_RENDER **v76; // rcx
  __int64 *v77; // rcx
  _QWORD *v78; // rcx
  __int64 v79; // rax
  __int64 v80; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v81; // [rsp+48h] [rbp-B8h]
  struct _IRP *v82; // [rsp+50h] [rbp-B0h]
  __int64 v83; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v84; // [rsp+60h] [rbp-A0h]
  _BYTE v85[32]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v86[22]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v87[306]; // [rsp+140h] [rbp+40h] BYREF

  v2 = 0LL;
  DeviceExtension = (PDEVICE_OBJECT *)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = -1073741637;
  v83 = 0LL;
  v84 = (__int64)DeviceExtension;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( *((_BYTE *)DeviceExtension + 1151) && (!*((_BYTE *)DeviceExtension + 1152) || LowPart != 2345988) )
  {
    v11 = WdLogNewEntry5_WdError(DeviceExtension);
    *(_QWORD *)(v11 + 24) = -1073741637LL;
LABEL_5:
    WdLogEvent5_WdError(v11);
LABEL_119:
    a2->IoStatus.Status = v7;
    a2->IoStatus.Information = v2;
    IofCompleteRequest(a2, 1);
    return v7;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( LowPart > 0x22644C )
  {
    v47 = LowPart - 2253908;
    if ( !v47 )
    {
      if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
        goto LABEL_41;
      if ( Options >= 0x78 && MasterIrp && (unsigned int)Length >= 0x88 )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&v80, a1, a2, 0);
        v7 = (int)v82;
        if ( (int)v82 >= 0 )
        {
          VirtualGpuType = DpiFdoGetVirtualGpuType(a2);
          v72 = *(_QWORD *)&MasterIrp->Flags;
          v73 = VirtualGpuType;
          if ( v72 || MasterIrp->AssociatedIrp.MasterIrp || MasterIrp->ThreadListEntry.Flink )
          {
            memset(v87, 0, sizeof(v87));
            v74 = LOBYTE(MasterIrp->UserBuffer) == 0;
            v75 = v84;
            LODWORD(v87[0]) = (unsigned __int16)MasterIrp->Type;
            v87[2] = MasterIrp->AssociatedIrp.MasterIrp;
            v76 = *(ADAPTER_RENDER ***)(v84 + 3792);
            v87[3] = MasterIrp->ThreadListEntry.Flink;
            v87[4] = MasterIrp->ThreadListEntry.Blink;
            v87[5] = MasterIrp->IoStatus.Pointer;
            v87[6] = MasterIrp->IoStatus.Information;
            v87[7] = *(_QWORD *)&MasterIrp->RequestorMode;
            v87[8] = MasterIrp->UserIosb;
            v87[9] = MasterIrp->UserEvent;
            v87[10] = MasterIrp->Overlay.AsynchronousParameters.UserApcRoutine;
            v87[11] = MasterIrp->Overlay.AsynchronousParameters.UserApcContext;
            v87[12] = MasterIrp->CancelRoutine;
            v87[1] = v72;
            LODWORD(v82) = DxgkDdiCreateVirtualGpu(v76, v73, v74, (int *)v87);
            v7 = (int)v82;
            if ( (int)v82 >= 0 )
            {
              memset(v86, 0, 0x68uLL);
              v77 = *(__int64 **)(v75 + 3792);
              LODWORD(v86[0]) = v87[0];
              LODWORD(v82) = DxgkDdiGetVirtualGpuInfo(
                               v77,
                               v73,
                               (unsigned int *)v86,
                               (PMDL *)((char *)&MasterIrp->MdlAddress + 4),
                               &MasterIrp->Flags + 1);
              v7 = (int)v82;
              if ( (int)v82 < 0 )
              {
                v78 = *(_QWORD **)(v75 + 3792);
                LODWORD(v83) = v87[0];
                DxgkDdiDestroyVirtualGpu(v78, v73, (unsigned int *)&v83);
              }
              else
              {
                v2 = 136LL;
                LOWORD(MasterIrp->MdlAddress) = v87[0];
                MasterIrp->ThreadListEntry.Blink = (struct _LIST_ENTRY *)v86[1];
                MasterIrp->IoStatus.Pointer = (PVOID)v86[2];
                MasterIrp->IoStatus.Information = v86[3];
                *(_QWORD *)&MasterIrp->RequestorMode = v86[4];
                MasterIrp->UserIosb = (PIO_STATUS_BLOCK)v86[5];
                MasterIrp->UserEvent = (PKEVENT)v86[6];
                MasterIrp->Overlay.AllocationSize.QuadPart = v86[7];
                MasterIrp->Overlay.AsynchronousParameters.UserApcContext = (PVOID)v86[8];
                MasterIrp->CancelRoutine = (PDRIVER_CANCEL)v86[9];
                MasterIrp->UserBuffer = (PVOID)v86[10];
                MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v86[11];
                MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v86[12];
              }
            }
          }
          else
          {
            LODWORD(v83) = (unsigned __int16)MasterIrp->Type;
            v7 = DxgkDdiDestroyVirtualGpu(*(_QWORD **)(v84 + 3792), VirtualGpuType, (unsigned int *)&v83);
            LODWORD(v82) = v7;
          }
        }
        goto LABEL_22;
      }
      goto LABEL_117;
    }
    v48 = v47 - 4;
    if ( !v48 )
    {
      if ( Options >= 2 && MasterIrp && (unsigned int)Length >= 0x80 )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&v80, a1, a2, 1);
        v60 = (int)v82;
        if ( (int)v82 >= 0 )
        {
          v61 = DpiFdoGetVirtualGpuType(a2);
          memset(v86, 0, 0x68uLL);
          LODWORD(v86[0]) = (unsigned __int16)MasterIrp->Type;
          LODWORD(v82) = DxgkDdiGetVirtualGpuInfo(
                           *(__int64 **)(v84 + 3792),
                           v61,
                           (unsigned int *)v86,
                           &MasterIrp->Size + 1,
                           (PMDL *)((char *)&MasterIrp->MdlAddress + 4));
          v60 = (int)v82;
          if ( (int)v82 >= 0 )
          {
            v2 = 128LL;
            v62 = v86[0];
            *(_QWORD *)&MasterIrp->RequestorMode = v86[5];
            MasterIrp->UserIosb = (PIO_STATUS_BLOCK)v86[6];
            MasterIrp->UserEvent = (PKEVENT)v86[7];
            MasterIrp->Overlay.AllocationSize.QuadPart = v86[8];
            v63 = (void *)v86[9];
            MasterIrp->Type = v62;
            v64 = (struct _LIST_ENTRY *)v86[1];
            MasterIrp->Overlay.AsynchronousParameters.UserApcContext = v63;
            v65 = (DRIVER_CANCEL *)v86[10];
            MasterIrp->ThreadListEntry.Flink = v64;
            v66 = (struct _LIST_ENTRY *)v86[2];
            MasterIrp->CancelRoutine = v65;
            v67 = (void *)v86[11];
            MasterIrp->ThreadListEntry.Blink = v66;
            v68 = (void *)v86[3];
            MasterIrp->UserBuffer = v67;
            v69 = (struct _LIST_ENTRY *)v86[12];
            MasterIrp->IoStatus.Pointer = v68;
            v70 = v86[4];
            MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = v69;
            MasterIrp->IoStatus.Information = v70;
          }
        }
        v7 = v60;
        goto LABEL_22;
      }
      goto LABEL_117;
    }
    v49 = v48 - 4;
    if ( !v49 )
      goto LABEL_94;
    v50 = v49 - 4;
    if ( !v50 )
    {
      if ( Options >= 8 && MasterIrp )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&v80, a1, a2, 1);
        v7 = (int)v82;
        if ( (int)v82 < 0 )
          goto LABEL_22;
        v56 = DpiFdoGetVirtualGpuType(a2);
        memset(v85, 0, sizeof(v85));
        *(_DWORD *)&v85[4] = Options;
        *(_DWORD *)&v85[8] = Length;
        *(_QWORD *)&v85[16] = MasterIrp;
        v57 = *(_QWORD *)(v84 + 3792);
        *(_QWORD *)&v85[24] = MasterIrp;
        VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(*(_QWORD *)(v57 + 2528), v56, (struct _LUID *)MasterIrp);
        if ( VirtualGpuByLuid )
        {
          *(_DWORD *)v85 = *((_DWORD *)VirtualGpuByLuid + 6);
          LODWORD(v82) = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, _BYTE *))(*(_QWORD *)VirtualGpuByLuid
                                                                                       + 40LL))(
                           VirtualGpuByLuid,
                           v85);
          v7 = (int)v82;
          if ( (int)v82 >= 0 )
            v2 = *(unsigned int *)&v85[8];
          goto LABEL_22;
        }
        v59 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v59 + 24) = 1421LL;
        WdLogEvent5_WdError(v59);
        goto LABEL_36;
      }
      goto LABEL_117;
    }
    v51 = v50 - 996;
    if ( !v51 )
    {
      if ( !a2->RequestorMode || DxgkpCheckProcessForVirtualMachineManagementAccess() )
      {
        DpiFdoGetVirtualGpuType(a2);
        VirtualizationFlags = DpiGetVirtualizationFlags(a1, (__int64)MasterIrp, Length, (__int64)&v83);
        v2 = v83;
        v7 = VirtualizationFlags;
        goto LABEL_118;
      }
      goto LABEL_41;
    }
    v52 = v51 - 4;
    if ( v52 )
    {
      v53 = v52 - 20;
      if ( v53 )
      {
        if ( v53 != 91048 )
          goto LABEL_80;
        v44 = DpiIndirectDdiIoControl(
                (_DWORD)DeviceExtension,
                Options,
                (_DWORD)MasterIrp,
                Length,
                (__int64)MasterIrp,
                (__int64)&v83);
      }
      else
      {
        v44 = DpiFlexIovMitigationUpdate(a1, a2, (__int64)MasterIrp, CurrentStackLocation->Parameters.Read.Length);
      }
    }
    else
    {
LABEL_94:
      v44 = DpiSetPartitionVmbus(a1, a2, a2->AssociatedIrp.MasterIrp, Options);
    }
LABEL_95:
    v7 = v44;
    goto LABEL_118;
  }
  if ( LowPart == 2253900 )
  {
    if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
      goto LABEL_41;
    if ( Options < 2 || !MasterIrp )
      goto LABEL_117;
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&v80, a1, a2, 1);
    MitigatedRangeCount = (int)v82;
    if ( (int)v82 >= 0 )
    {
      v46 = DpiFdoGetVirtualGpuType(a2);
      LODWORD(v83) = (unsigned __int16)MasterIrp->Type;
      MitigatedRangeCount = DxgkDdiSetGpuPartitionCount(*(ADAPTER_RENDER ***)(v84 + 3792), v46, (int *)&v83);
      LODWORD(v82) = MitigatedRangeCount;
    }
    goto LABEL_57;
  }
  v13 = LowPart - 2252868;
  if ( !v13 )
  {
    v44 = DpiSriovNotification(a1, a2);
    goto LABEL_95;
  }
  v14 = v13 - 4;
  if ( !v14 )
  {
    if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
      goto LABEL_41;
    v45 = DpiFdoGetVirtualGpuType(a2);
    v44 = DpiSriovEventComplete(a1, v45, MasterIrp, Options);
    goto LABEL_95;
  }
  v15 = v14 - 4;
  if ( !v15 )
  {
    v44 = DpiSriovAttach(a1, a2);
    goto LABEL_95;
  }
  v16 = v15 - 4;
  if ( !v16 )
  {
    if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
      goto LABEL_41;
    DpiFdoGetVirtualGpuType(a2);
    v44 = DpiSriovDetach(a1);
    goto LABEL_95;
  }
  v17 = v16 - 8;
  if ( !v17 )
  {
    if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
      goto LABEL_41;
    if ( Options < 2 || !MasterIrp || (unsigned int)Length < 0x18 )
      goto LABEL_117;
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&v80, a1, a2, 1);
    MitigatedRangeCount = (int)v82;
    if ( (int)v82 >= 0 )
    {
      v42 = DpiFdoGetVirtualGpuType(a2);
      memset(v85, 0, 28);
      *(_DWORD *)v85 = (unsigned __int16)MasterIrp->Type;
      MitigatedRangeCount = DxgkDdiQueryMitigatedRangeCount(*(_QWORD **)(v84 + 3792), v42, (unsigned int *)v85);
      LODWORD(v82) = MitigatedRangeCount;
      if ( MitigatedRangeCount >= 0 )
      {
        v2 = 24LL;
        v43 = *(_QWORD *)&v85[20];
        *(_OWORD *)&MasterIrp->Type = *(_OWORD *)&v85[4];
        *(_QWORD *)&MasterIrp->Flags = v43;
      }
    }
LABEL_57:
    v7 = MitigatedRangeCount;
    goto LABEL_22;
  }
  v18 = v17 - 4;
  if ( v18 )
  {
    v19 = v18 - 1000;
    if ( v19 )
    {
      if ( v19 == 4 )
      {
        if ( Options >= 2 && MasterIrp && (unsigned int)Length >= 0xA8 )
        {
          CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&v80, a1, a2, 1);
          v7 = (int)v82;
          if ( (int)v82 >= 0 )
          {
            v20 = DpiFdoGetVirtualGpuType(a2);
            memset(v86, 0, 0xA8uLL);
            LODWORD(v86[0]) = (unsigned __int16)MasterIrp->Type;
            LODWORD(v82) = DxgkDdiGetVirtualGpuProfile(*(ADAPTER_RENDER ***)(v84 + 3792), v20, (int *)v86);
            v7 = (int)v82;
            if ( (int)v82 >= 0 )
            {
              v2 = 168LL;
              *(_QWORD *)&MasterIrp->Type = v86[0];
              MasterIrp->MdlAddress = (PMDL)v86[1];
              *(_QWORD *)&MasterIrp->Flags = v86[2];
              MasterIrp->AssociatedIrp.MasterIrp = (struct _IRP *)v86[3];
              MasterIrp->ThreadListEntry.Flink = (struct _LIST_ENTRY *)v86[4];
              MasterIrp->ThreadListEntry.Blink = (struct _LIST_ENTRY *)v86[5];
              MasterIrp->IoStatus.Pointer = (PVOID)v86[6];
              MasterIrp->IoStatus.Information = v86[7];
              *(_QWORD *)&MasterIrp->RequestorMode = v86[8];
              MasterIrp->UserIosb = (PIO_STATUS_BLOCK)v86[9];
              MasterIrp->UserEvent = (PKEVENT)v86[10];
              MasterIrp->Overlay.AllocationSize.QuadPart = v86[11];
              MasterIrp->Overlay.AsynchronousParameters.UserApcContext = (PVOID)v86[12];
              MasterIrp->CancelRoutine = (PDRIVER_CANCEL)v86[13];
              MasterIrp->UserBuffer = (PVOID)v86[14];
              MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v86[15];
              MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v86[16];
              MasterIrp->Tail.Overlay.DriverContext[2] = (PVOID)v86[17];
              MasterIrp->Tail.Overlay.DriverContext[3] = (PVOID)v86[18];
              MasterIrp->Tail.Overlay.Thread = (PETHREAD)v86[19];
              MasterIrp->Tail.Overlay.AuxiliaryBuffer = (PCHAR)v86[20];
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
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&v80, a1, a2, 1);
    if ( (int)v82 < 0 )
    {
LABEL_22:
      v21 = (CInterfaceCallContext *)&v80;
LABEL_23:
      CInterfaceCallContext::~CInterfaceCallContext(v21);
      goto LABEL_118;
    }
    memset(v85, 0, 24);
    if ( !MasterIrp || (unsigned int)Length < 0x18 )
    {
      v38 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      *(_QWORD *)(v38 + 24) = 2253892LL;
      WdLogEvent5_WdWarning(v38);
      v7 = -1073741789;
      goto LABEL_32;
    }
    v25 = DpiFdoGetVirtualGpuType(a2);
    v26 = v84;
    *(_QWORD *)&v85[8] = &MasterIrp->Flags + 1;
    v27 = (unsigned int)(Length - 20) >> 1;
    v28 = v25;
    v29 = *(ADAPTER_RENDER ***)(v84 + 3792);
    *(_DWORD *)v85 = v27;
    GpuPartitionInfo = DxgkDdiGetGpuPartitionInfo(v29, v25, (struct _DXGKARG_GETGPUPARTITIONINFO *)v85, v30);
    LODWORD(v82) = GpuPartitionInfo;
    v7 = GpuPartitionInfo;
    if ( GpuPartitionInfo >= 0 )
    {
      if ( *(_DWORD *)v85 <= v27 && *(_DWORD *)v85 )
      {
        *(_DWORD *)&MasterIrp->Type = *(_DWORD *)v85;
        WORD2(MasterIrp->MdlAddress) = *(_WORD *)&v85[16];
        LOBYTE(v2) = *(_BYTE *)(v26 + 1144) != 0;
        MasterIrp->Flags = MasterIrp->Flags & 0xFFFFFFFE | v2;
        DxgkDdiQueryPhysicalFunctionLuid(*(char **)(v26 + 3792), v28, (struct _LUID *)(&MasterIrp->Size + 1));
        v2 = (unsigned int)(2 * *(_DWORD *)v85 + 20);
        goto LABEL_22;
      }
      v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
      *(_QWORD *)(v35 + 24) = 2253892LL;
      WdLogEvent5_WdWarning(v35);
      v7 = -1073741811;
LABEL_32:
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v80);
      goto LABEL_119;
    }
    if ( GpuPartitionInfo != -1073741789 )
      goto LABEL_22;
    if ( *(_DWORD *)v85 )
    {
      *(_DWORD *)&MasterIrp->Type = *(_DWORD *)v85;
      WORD2(MasterIrp->MdlAddress) = *(_WORD *)&v85[16];
      v7 = -2147483643;
      Flags = MasterIrp->Flags;
      LOBYTE(v2) = *(_BYTE *)(v26 + 1144) != 0;
      LODWORD(v82) = -2147483643;
      MasterIrp->Flags = Flags & 0xFFFFFFFE | v2;
      RtlCopyLuid((PLUID)(&MasterIrp->Size + 1), (PLUID)(v26 + 2600));
      v2 = 24LL;
      goto LABEL_22;
    }
    v36 = WdLogNewEntry5_WdWarning(v33, v32, v34);
    *(_QWORD *)(v36 + 24) = 2253892LL;
    WdLogEvent5_WdWarning(v36);
LABEL_36:
    v7 = -1073741811;
    LODWORD(v82) = -1073741811;
    goto LABEL_22;
  }
  if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
  {
LABEL_41:
    v11 = WdLogNewEntry5_WdError(DeviceExtension);
    v7 = -1073741790;
    *(_QWORD *)(v11 + 24) = -1073741790LL;
    goto LABEL_5;
  }
  if ( Options >= 4 && MasterIrp && (unsigned int)Length >= 0x10 )
  {
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v85, a1, a2, 1);
    MitigatedRanges = *(_DWORD *)&v85[16];
    if ( *(int *)&v85[16] >= 0 )
    {
      v40 = DpiFdoGetVirtualGpuType(a2);
      v82 = MasterIrp;
      v80 = 0LL;
      v81 = 0LL;
      LODWORD(v80) = (unsigned __int16)MasterIrp->Type;
      HIDWORD(v80) = LOBYTE(MasterIrp->Size);
      v81 = (unsigned int)Length >> 4;
      MitigatedRanges = DxgkDdiQueryMitigatedRanges(*(_QWORD **)(v84 + 3792), v40, (unsigned int *)&v80);
      *(_DWORD *)&v85[16] = MitigatedRanges;
      if ( MitigatedRanges >= 0 )
        v2 = Length;
    }
    v7 = MitigatedRanges;
    v21 = (CInterfaceCallContext *)v85;
    goto LABEL_23;
  }
LABEL_117:
  v7 = -1073741789;
  v79 = WdLogNewEntry5_WdError(DeviceExtension);
  *(_QWORD *)(v79 + 24) = -1073741789LL;
  WdLogEvent5_WdError(v79);
LABEL_118:
  if ( v7 != 259 )
    goto LABEL_119;
  return v7;
}
