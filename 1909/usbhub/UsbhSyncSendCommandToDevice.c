/*
 * XREFs of UsbhSyncSendCommandToDevice @ 0x1C0012960
 * Callers:
 *     UsbhDisableDeviceForWake @ 0x1C0002540 (UsbhDisableDeviceForWake.c)
 *     UsbhGetStringFromDevice @ 0x1C001DB1C (UsbhGetStringFromDevice.c)
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C0044EB0 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsFeatureDescriptor @ 0x1C00452E4 (UsbhGetMsOsFeatureDescriptor.c)
 *     UsbhSendMsOs20AltEnumCommand @ 0x1C00457E8 (UsbhSendMsOs20AltEnumCommand.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C004DD00 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhEnableDeviceForWake @ 0x1C005B0EC (UsbhEnableDeviceForWake.c)
 *     UsbhGetBosDescriptor @ 0x1C005B198 (UsbhGetBosDescriptor.c)
 *     UsbhGetDeviceDescriptor @ 0x1C005B364 (UsbhGetDeviceDescriptor.c)
 *     UsbhGetQualifierDescriptorFromDevice @ 0x1C005B440 (UsbhGetQualifierDescriptorFromDevice.c)
 * Callees:
 *     UsbhRefPdoDeviceHandle @ 0x1C000EA60 (UsbhRefPdoDeviceHandle.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C000ECA0 (UsbhSyncSendInternalIoctl.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CA00 (memset.c)
 */

__int64 UsbhSyncSendCommandToDevice(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, _WORD *a5, ...)
{
  int *v6; // rbx
  __int64 v9; // rdi
  _DWORD *v10; // r15
  __int64 v11; // rbp
  int *PoolWithTag; // rax
  PIRP v13; // rdx
  int v14; // eax
  bool v15; // zf
  NTSTATUS v16; // eax
  __int64 v17; // r10
  int v18; // r9d
  int v19; // r10d
  KSPIN_LOCK *v20; // r14
  KIRQL v21; // r15
  int v22; // r9d
  _DWORD *v23; // rax
  _DWORD *v25; // [rsp+50h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-40h] BYREF
  __int64 v29; // [rsp+D8h] [rbp+30h] BYREF
  va_list va; // [rsp+D8h] [rbp+30h]
  int *v31; // [rsp+E0h] [rbp+38h]
  va_list va1; // [rsp+E8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v29 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, int *);
  v6 = 0LL;
  v9 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  LODWORD(v29) = 0;
  v10 = FdoExt(a1);
  v25 = PdoExt(a2);
  v11 = UsbhSyncSendInternalIoctl(a1, 0x220013u, (unsigned __int64)va, 0LL);
  Log(a1, 8, 1970303827, v29, v11);
  if ( (v11 & 0xC0000000) == 0xC0000000 )
  {
    v19 = -1073713152;
    goto LABEL_12;
  }
  if ( !a5 )
  {
    LODWORD(v11) = -1073741811;
    v19 = -1073713152;
    goto LABEL_12;
  }
  PoolWithTag = (int *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x88uLL, 0x42554855u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_25;
  memset(PoolWithTag, 0, 0x88uLL);
  v9 = UsbhRefPdoDeviceHandle(a1, a2, (__int64)v6, 0x444E5373u);
  if ( !v9 || (v11 = *((_QWORD *)v10 + 152)) == 0 )
  {
    LODWORD(v11) = -1073741810;
    v19 = -1073713152;
    goto LABEL_12;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v13 = IoBuildDeviceIoControlRequest(0x220003u, (PDEVICE_OBJECT)v11, 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( v13 )
  {
    *((_QWORD *)v6 + 1) = *((_QWORD *)v25 + 145);
    v6[8] = 10;
    v14 = v6[8];
    *v6 = 3276936;
    v15 = *a3 >= 0;
    *((_QWORD *)v6 + 6) = 0LL;
    if ( !v15 )
      v14 = 11;
    v6[14] = 2000;
    v6[8] = v14;
    v6[9] = (unsigned __int16)*a5;
    *((_QWORD *)v6 + 5) = a4;
    *((_QWORD *)v6 + 16) = *(_QWORD *)a3;
    v13->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v6;
    v16 = IofCallDriver((PDEVICE_OBJECT)v11, v13);
    LODWORD(v11) = v16;
    if ( v16 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      LODWORD(v11) = IoStatusBlock.Status;
    }
    else
    {
      IoStatusBlock.Status = v16;
    }
    v17 = v6[1];
    v18 = *((unsigned __int16 *)v6 + 18);
    *a5 = v18;
    Log(a1, 256, 1396925558, v18, v17);
  }
  else
  {
LABEL_25:
    v19 = -1073737728;
    LODWORD(v11) = -1073741670;
  }
LABEL_12:
  if ( v31 )
    *v31 = v19;
  if ( v9 )
  {
    v20 = (KSPIN_LOCK *)(FdoExt(a1) + 930);
    v21 = KeAcquireSpinLockRaiseToDpc(v20);
    Log(a1, 256, 1146498353, v9, (__int64)v6);
    Log(a1, 256, 1146498354, v22, 1145983859LL);
    v23 = FdoExt(a1);
    if ( *((_QWORD *)v23 + 559) )
      (*((void (__fastcall **)(_QWORD, __int64, int *, __int64))v23 + 559))(
        *((_QWORD *)v23 + 529),
        v9,
        v6,
        1145983859LL);
    KeReleaseSpinLock(v20, v21);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v11;
}
