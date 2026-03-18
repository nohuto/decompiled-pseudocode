/*
 * XREFs of ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01E8050
 * Callers:
 *     ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x1C01E9ABC (-EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C01E7AA4 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C01E87F8 (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::CreateVmBusChannel(struct VMBCHANNEL__ **this, struct _DEVICE_OBJECT *a2)
{
  struct _DEVICE_OBJECT *v2; // rbx
  struct _KEVENT *v4; // rcx
  struct VMBCHANNEL__ *v5; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct VMBCHANNEL__ *v10; // rcx
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  void (*v15)(struct VMBCHANNEL__ *, unsigned int); // [rsp+38h] [rbp-51h]
  union _LARGE_INTEGER Timeout[2]; // [rsp+50h] [rbp-39h] BYREF
  struct _UNICODE_STRING v17; // [rsp+60h] [rbp-29h] BYREF
  _DWORD v18[2]; // [rsp+70h] [rbp-19h] BYREF
  __int64 (__fastcall *v19)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-11h]
  void (__fastcall *v20)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-9h]
  void (__fastcall *v21)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-1h]
  void (__fastcall *v22)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp+7h]
  void (__fastcall *v23)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp+Fh]
  struct _GUID v24; // [rsp+A0h] [rbp+17h] BYREF
  _OWORD v25[2]; // [rsp+B0h] [rbp+27h] BYREF
  wchar_t v26; // [rsp+D0h] [rbp+47h]

  v2 = (struct _DEVICE_OBJECT *)g_pDeviceObject;
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
  v26 = aDxgkGlobalgues[16];
  v17.Buffer = (wchar_t *)v25;
  v19 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelOpened;
  *(_DWORD *)&v17.Length = 2228256;
  v20 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelClosed;
  v18[0] = 1;
  v21 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelSuspend;
  v22 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelStarted;
  v23 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelPostStarted;
  v25[0] = *(_OWORD *)L"DXGK_GlobalGuest";
  v18[1] = 48;
  v25[1] = *(_OWORD *)L"balGuest";
  *(_OWORD *)&Timeout[0].LowPart = DxgkPerVmVmBusChanelInstanceId;
  v24 = (struct _GUID)DxgkPerVmVmBusChannelType;
  v7 = CreateClientVmBusChannel(
         (__int64)this,
         v2,
         &v24,
         (struct _GUID *)Timeout,
         &v17,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v18,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_GUEST_GLOBAL_VMBUS::VmBusChannelProcessPacket,
         v15,
         this);
  v9 = v7;
  if ( v7 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v14 + 24) = v9;
    WdLogEvent5_WdError(v14);
  }
  else
  {
    v10 = this[5];
    Timeout[0].QuadPart = -80000000LL;
    v11 = KeWaitForSingleObject(v10, Executive, 0, 0, Timeout);
    v9 = v11;
    if ( v11 )
    {
      v13 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v13 + 24) = v9;
      WdLogEvent5_WdError(v13);
      LODWORD(v9) = -1073741823;
    }
  }
  if ( (int)v9 >= 0 )
    *((_BYTE *)this + 48) = 1;
  else
    DXG_GUEST_GLOBAL_VMBUS::DestroyVmBusChannel((DXG_GUEST_GLOBAL_VMBUS *)this);
  return (unsigned int)v9;
}
