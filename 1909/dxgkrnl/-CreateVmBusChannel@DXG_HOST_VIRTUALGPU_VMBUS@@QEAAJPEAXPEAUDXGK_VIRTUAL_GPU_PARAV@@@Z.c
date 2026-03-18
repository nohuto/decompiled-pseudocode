/*
 * XREFs of ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C02183E0
 * Callers:
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0215EA0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x1C0217B88 (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C021864C (-DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::CreateVmBusChannel(
        struct VMBCHANNEL__ **this,
        __int64 a2,
        struct DXGK_VIRTUAL_GPU_PARAV *a3)
{
  __int64 v6; // rax
  const GUID *v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rax
  struct _UNICODE_STRING v15; // [rsp+60h] [rbp-49h] BYREF
  struct _GUID v16; // [rsp+70h] [rbp-39h] BYREF
  _DWORD v17[2]; // [rsp+80h] [rbp-29h] BYREF
  __int64 (__fastcall *v18)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-21h]
  void (__fastcall *v19)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-19h]
  void (__fastcall *v20)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-11h]
  void (__fastcall *v21)(struct VMBCHANNEL__ *); // [rsp+A0h] [rbp-9h]
  void (__fastcall *v22)(struct VMBCHANNEL__ *); // [rsp+A8h] [rbp-1h]
  struct _GUID v23; // [rsp+B0h] [rbp+7h] BYREF
  _OWORD v24[2]; // [rsp+C0h] [rbp+17h] BYREF

  if ( *this )
    DXG_HOST_GLOBAL_VMBUS::DestroyVmBusChannel((DXG_HOST_GLOBAL_VMBUS *)this);
  *(_QWORD *)v16.Data4 = 0LL;
  v15.Buffer = (wchar_t *)v24;
  *(_QWORD *)&v16.Data1 = *(_QWORD *)((char *)a3 + 28);
  v18 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelOpened;
  v19 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelClosed;
  v20 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v21 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelStarted;
  v22 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelPostStarted;
  v6 = *((_QWORD *)a3 + 2);
  v24[0] = *(_OWORD *)L"DXGK_VirtualGpu";
  *(_QWORD *)&v15.Length = 2097182LL;
  v24[1] = *(_OWORD *)L"tualGpu";
  v17[0] = 1;
  v17[1] = 48;
  v7 = *(const GUID **)(v6 + 192);
  v23 = (struct _GUID)DxgkPerVirtualGpuVmBusChannelType;
  v8 = CreateServerVmBusChannel(
         a2,
         a3,
         v7,
         &v23,
         &v16,
         &v15,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v17,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacket,
         (void (*)(struct VMBCHANNEL__ *, unsigned int))CompositionSurfaceObject::SetPaired,
         0,
         this);
  v12 = v8;
  if ( v8 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdError(v13);
  }
  else
  {
    *((_BYTE *)this + 48) = 1;
  }
  return (unsigned int)v12;
}
