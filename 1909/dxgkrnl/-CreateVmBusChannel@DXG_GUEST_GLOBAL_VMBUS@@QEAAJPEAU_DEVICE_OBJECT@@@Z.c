/*
 * XREFs of ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0217E30
 * Callers:
 *     ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x1C0219A64 (-EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C0217884 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C02185DC (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::CreateVmBusChannel(struct VMBCHANNEL__ **this, struct _DEVICE_OBJECT *a2)
{
  struct _DEVICE_OBJECT *v2; // rbx
  struct _KEVENT *v4; // rcx
  struct VMBCHANNEL__ *v5; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  struct VMBCHANNEL__ *v12; // rcx
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  void (*v19)(struct VMBCHANNEL__ *, unsigned int); // [rsp+38h] [rbp-51h]
  struct _UNICODE_STRING v20; // [rsp+50h] [rbp-39h] BYREF
  union _LARGE_INTEGER Timeout[2]; // [rsp+60h] [rbp-29h] BYREF
  _DWORD v22[2]; // [rsp+70h] [rbp-19h] BYREF
  __int64 (__fastcall *v23)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-11h]
  void (__fastcall *v24)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-9h]
  void (__fastcall *v25)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-1h]
  void (__fastcall *v26)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp+7h]
  void (__fastcall *v27)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp+Fh]
  struct _GUID v28; // [rsp+A0h] [rbp+17h] BYREF
  _OWORD v29[2]; // [rsp+B0h] [rbp+27h] BYREF
  wchar_t v30; // [rsp+D0h] [rbp+47h]

  v2 = (struct _DEVICE_OBJECT *)g_pDeviceObject;
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
  v30 = aDxgkGlobalgues[16];
  v20.Buffer = (wchar_t *)v29;
  v23 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelOpened;
  *(_QWORD *)&v20.Length = 2228256LL;
  v24 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelClosed;
  v22[0] = 1;
  v25 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelSuspend;
  v26 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelStarted;
  v27 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelPostStarted;
  v29[0] = *(_OWORD *)L"DXGK_GlobalGuest";
  v22[1] = 48;
  v29[1] = *(_OWORD *)L"balGuest";
  *(_OWORD *)&Timeout[0].LowPart = DxgkPerVmVmBusChanelInstanceId;
  v28 = (struct _GUID)DxgkPerVmVmBusChannelType;
  v7 = CreateClientVmBusChannel(
         (__int64)this,
         v2,
         &v28,
         (struct _GUID *)Timeout,
         &v20,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v22,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_GUEST_GLOBAL_VMBUS::VmBusChannelProcessPacket,
         v19,
         this);
  v11 = v7;
  if ( v7 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v18 + 24) = v11;
    WdLogEvent5_WdError(v18);
  }
  else
  {
    v12 = this[5];
    Timeout[0].QuadPart = -80000000LL;
    v13 = KeWaitForSingleObject(v12, Executive, 0, 0, Timeout);
    v11 = v13;
    if ( v13 )
    {
      v17 = WdLogNewEntry5_WdError(v15, v14, v16);
      *(_QWORD *)(v17 + 24) = v11;
      WdLogEvent5_WdError(v17);
      LODWORD(v11) = -1073741823;
    }
  }
  if ( (int)v11 >= 0 )
    *((_BYTE *)this + 48) = 1;
  else
    DXG_GUEST_GLOBAL_VMBUS::DestroyVmBusChannel((DXG_GUEST_GLOBAL_VMBUS *)this);
  return (unsigned int)v11;
}
