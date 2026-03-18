/*
 * XREFs of ?VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C02266F0
 * Callers:
 *     DxgkReserveGpuVirtualAddress @ 0x1C0156410 (DxgkReserveGpuVirtualAddress.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0227D0C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReserveGpuVirtualAddress(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a4)
{
  __int128 v4; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // rax
  struct _MDL *v15; // [rsp+28h] [rbp-51h]
  unsigned int v16[4]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v17; // [rsp+40h] [rbp-39h] BYREF
  int v18; // [rsp+48h] [rbp-31h]
  int v19; // [rsp+4Ch] [rbp-2Dh]
  int v20; // [rsp+50h] [rbp-29h]
  __int128 v21; // [rsp+58h] [rbp-21h]
  __int128 v22; // [rsp+68h] [rbp-11h]
  __int128 v23; // [rsp+78h] [rbp-1h]
  __int128 v24; // [rsp+88h] [rbp+Fh]
  UINT64 PagingFenceValue; // [rsp+98h] [rbp+1Fh]
  _QWORD v26[2]; // [rsp+A0h] [rbp+27h] BYREF

  v4 = *(_OWORD *)&a4->hPagingQueue;
  v17 = 0LL;
  v6 = *(_OWORD *)&a4->MinimumAddress;
  v19 = 0;
  v21 = v4;
  v18 = a2;
  v7 = *(_OWORD *)&a4->Size;
  LODWORD(v21) = a3;
  v22 = v6;
  v20 = 18;
  v8 = *(_OWORD *)&a4->DriverProtection;
  v16[0] = 16;
  v23 = v7;
  PagingFenceValue = a4->PagingFenceValue;
  v24 = v8;
  v11 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v17, 0x60u, v26, v16, v15);
  if ( v11 < 0 || (v11 = -1073741823, v16[0] < 0x10) )
  {
    v13 = WdLogNewEntry5_WdError(v10, v9, v12);
    *(_QWORD *)(v13 + 24) = v11;
    WdLogEvent5_WdError(v13);
  }
  else
  {
    v11 = 0;
    a4->VirtualAddress = v26[0];
    a4->PagingFenceValue = v26[1];
  }
  return (unsigned int)v11;
}
