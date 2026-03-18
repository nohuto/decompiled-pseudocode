/*
 * XREFs of ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z @ 0x1C0218270
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C025EC70 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x1C0217B88 (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C021864C (-DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::CreateVmBusChannel(
        struct VMBCHANNEL__ **this,
        __int64 a2,
        struct DXGPROCESSVMWP *a3)
{
  struct DXGGLOBAL *Global; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rax
  struct _UNICODE_STRING v14; // [rsp+60h] [rbp-39h] BYREF
  _DWORD v15[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 (__fastcall *v16)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-21h]
  void (__fastcall *v17)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-19h]
  void (__fastcall *v18)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-11h]
  void (__fastcall *v19)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-9h]
  void (__fastcall *v20)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-1h]
  struct _GUID v21; // [rsp+A0h] [rbp+7h] BYREF
  struct _GUID v22; // [rsp+B0h] [rbp+17h] BYREF
  __int128 v23; // [rsp+C0h] [rbp+27h] BYREF
  int v24; // [rsp+D0h] [rbp+37h]

  if ( *this )
    DXG_HOST_GLOBAL_VMBUS::DestroyVmBusChannel((DXG_HOST_GLOBAL_VMBUS *)this);
  v24 = *(_DWORD *)L"t";
  v14.Buffer = (wchar_t *)&v23;
  v16 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelOpened;
  v17 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelClosed;
  v18 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelSuspend;
  v23 = *(_OWORD *)L"DXGK_Host";
  v19 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelStarted;
  v20 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelPostStarted;
  *(_QWORD *)&v14.Length = 1310738LL;
  v15[0] = 1;
  v15[1] = 48;
  v21 = (struct _GUID)DxgkPerVmVmBusChanelInstanceId;
  v22 = (struct _GUID)DxgkPerVmVmBusChannelType;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  v7 = CreateServerVmBusChannel(
         a2,
         a3,
         (const GUID *)g_pDeviceObject,
         &v22,
         &v21,
         &v14,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v15,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_HOST_GLOBAL_VMBUS::VmBusChannelProcessPacket,
         (void (*)(struct VMBCHANNEL__ *, unsigned int))CompositionSurfaceObject::SetPaired,
         *((_QWORD *)Global + 170) >> 20,
         this);
  v11 = v7;
  if ( v7 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
  }
  else
  {
    *((_BYTE *)this + 48) = 1;
    this[9] = a3;
  }
  return (unsigned int)v11;
}
