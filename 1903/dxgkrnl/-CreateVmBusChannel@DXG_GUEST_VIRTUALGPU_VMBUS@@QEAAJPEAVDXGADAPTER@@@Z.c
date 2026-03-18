/*
 * XREFs of ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02179C0
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01ED514 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpReadDeviceSpace @ 0x1C001EB30 (DpReadDeviceSpace.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C0217214 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C0217FB0 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::CreateVmBusChannel(struct VMBCHANNEL__ **this, struct DXGADAPTER *a2)
{
  struct _KEVENT *v4; // rcx
  struct VMBCHANNEL__ *v5; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  struct _DEVICE_OBJECT *v13; // rdx
  int v14; // eax
  struct VMBCHANNEL__ *v15; // rcx
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  void (*v22)(struct VMBCHANNEL__ *, unsigned int); // [rsp+38h] [rbp-71h]
  union _LARGE_INTEGER Timeout[2]; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING v24; // [rsp+60h] [rbp-49h] BYREF
  _DWORD v25[2]; // [rsp+70h] [rbp-39h] BYREF
  __int64 (__fastcall *v26)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-31h]
  void (__fastcall *v27)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-29h]
  void (__fastcall *v28)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-21h]
  void (__fastcall *v29)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-19h]
  void (__fastcall *v30)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-11h]
  struct _GUID v31; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v32; // [rsp+B0h] [rbp+7h] BYREF
  _OWORD v33[2]; // [rsp+C0h] [rbp+17h] BYREF
  int v34; // [rsp+E0h] [rbp+37h]

  v4 = (struct _KEVENT *)this[5];
  if ( v4 )
  {
    KeClearEvent(v4);
  }
  else
  {
    v5 = (struct VMBCHANNEL__ *)operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    this[5] = v5;
    if ( !v5 )
      return 3221225495LL;
    KeInitializeEvent((PRKEVENT)v5, NotificationEvent, 0);
  }
  this[7] = a2;
  v7 = *((_QWORD *)a2 + 24);
  v34 = *(_DWORD *)L"t";
  v24.Buffer = (wchar_t *)v33;
  v26 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelOpened;
  v27 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed;
  v28 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v29 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelStarted;
  v30 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelPostStarted;
  v32 = 0uLL;
  v33[0] = *(_OWORD *)L"DXGK_AdapterGuest";
  *(_QWORD *)&v24.Length = 2359330LL;
  v33[1] = *(_OWORD *)L"pterGuest";
  v25[0] = 1;
  v25[1] = 48;
  v8 = DpReadDeviceSpace(v7, 0LL, &v32, 0xC0u, 0x10u, (ULONG *)Timeout);
  v12 = v8;
  if ( v8 >= 0
    && Timeout[0].LowPart == 16
    && (v13 = (struct _DEVICE_OBJECT *)*((_QWORD *)a2 + 24),
        *(_OWORD *)&Timeout[0].LowPart = v32,
        v31 = (struct _GUID)DxgkPerVirtualGpuVmBusChannelType,
        v14 = CreateClientVmBusChannel(
                (__int64)a2,
                v13,
                &v31,
                (struct _GUID *)Timeout,
                &v24,
                (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v25,
                (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))CompositionSurfaceObject::SetPaired,
                v22,
                this),
        v12 = v14,
        v14 >= 0) )
  {
    v15 = this[5];
    Timeout[0].QuadPart = -80000000LL;
    v16 = KeWaitForSingleObject(v15, Executive, 0, 0, Timeout);
    v12 = v16;
    if ( v16 )
    {
      v20 = WdLogNewEntry5_WdError(v18, v17, v19);
      *(_QWORD *)(v20 + 24) = v12;
      WdLogEvent5_WdError(v20);
      LODWORD(v12) = -1073741823;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v21 + 24) = v12;
    WdLogEvent5_WdError(v21);
  }
  if ( (int)v12 >= 0 )
    *((_BYTE *)this + 48) = 1;
  else
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXG_GUEST_VIRTUALGPU_VMBUS *)this);
  return (unsigned int)v12;
}
