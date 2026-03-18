/*
 * XREFs of ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C01E824C
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01BDF0C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpReadDeviceSpace @ 0x1C001E750 (DpReadDeviceSpace.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C01E7AA4 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C01E883C (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::CreateVmBusChannel(struct VMBCHANNEL__ **this, struct DXGADAPTER *a2)
{
  struct _KEVENT *v4; // rcx
  struct VMBCHANNEL__ *v5; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  struct _DEVICE_OBJECT *v11; // rdx
  int v12; // eax
  struct VMBCHANNEL__ *v13; // rcx
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  void (*v18)(struct VMBCHANNEL__ *, unsigned int); // [rsp+38h] [rbp-71h]
  union _LARGE_INTEGER Timeout[2]; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING v20; // [rsp+60h] [rbp-49h] BYREF
  _DWORD v21[2]; // [rsp+70h] [rbp-39h] BYREF
  __int64 (__fastcall *v22)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-31h]
  void (__fastcall *v23)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-29h]
  void (__fastcall *v24)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-21h]
  void (__fastcall *v25)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-19h]
  void (__fastcall *v26)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-11h]
  struct _GUID v27; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v28; // [rsp+B0h] [rbp+7h] BYREF
  _OWORD v29[2]; // [rsp+C0h] [rbp+17h] BYREF
  int v30; // [rsp+E0h] [rbp+37h]

  v4 = (struct _KEVENT *)this[5];
  if ( v4 )
  {
    KeClearEvent(v4);
  }
  else
  {
    v5 = (struct VMBCHANNEL__ *)operator new(0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    this[5] = v5;
    if ( !v5 )
      return 3221225495LL;
    KeInitializeEvent((PRKEVENT)v5, NotificationEvent, 0);
  }
  this[7] = a2;
  v7 = *((_QWORD *)a2 + 24);
  v30 = *(_DWORD *)L"t";
  v20.Buffer = (wchar_t *)v29;
  v22 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelOpened;
  v23 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed;
  v24 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v25 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelStarted;
  v26 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelPostStarted;
  v28 = 0uLL;
  v29[0] = *(_OWORD *)L"DXGK_AdapterGuest";
  *(_DWORD *)&v20.Length = 2359330;
  v29[1] = *(_OWORD *)L"pterGuest";
  v21[0] = 1;
  v21[1] = 48;
  v8 = DpReadDeviceSpace(v7, 0LL, &v28, 0xC0u, 0x10u, (ULONG *)Timeout);
  v10 = v8;
  if ( v8 >= 0
    && Timeout[0].LowPart == 16
    && (v11 = (struct _DEVICE_OBJECT *)*((_QWORD *)a2 + 24),
        *(_OWORD *)&Timeout[0].LowPart = v28,
        v27 = (struct _GUID)DxgkPerVirtualGpuVmBusChannelType,
        v12 = CreateClientVmBusChannel(
                (__int64)a2,
                v11,
                &v27,
                (struct _GUID *)Timeout,
                &v20,
                (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v21,
                (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))CompositionSurfaceObject::SetPaired,
                v18,
                this),
        v10 = v12,
        v12 >= 0) )
  {
    v13 = this[5];
    Timeout[0].QuadPart = -80000000LL;
    v14 = KeWaitForSingleObject(v13, Executive, 0, 0, Timeout);
    v10 = v14;
    if ( v14 )
    {
      v16 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v16 + 24) = v10;
      WdLogEvent5_WdError(v16);
      LODWORD(v10) = -1073741823;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v17 + 24) = v10;
    WdLogEvent5_WdError(v17);
  }
  if ( (int)v10 >= 0 )
    *((_BYTE *)this + 48) = 1;
  else
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXG_GUEST_VIRTUALGPU_VMBUS *)this);
  return (unsigned int)v10;
}
