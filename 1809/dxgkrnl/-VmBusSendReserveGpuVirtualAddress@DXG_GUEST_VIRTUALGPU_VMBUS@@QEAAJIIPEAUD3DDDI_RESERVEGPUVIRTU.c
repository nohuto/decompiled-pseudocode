/*
 * XREFs of ?VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C01F6050
 * Callers:
 *     DxgkReserveGpuVirtualAddress @ 0x1C0140440 (DxgkReserveGpuVirtualAddress.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
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
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rax
  struct _MDL *v13; // [rsp+28h] [rbp-51h]
  unsigned int v14[4]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v15; // [rsp+40h] [rbp-39h] BYREF
  int v16; // [rsp+48h] [rbp-31h]
  int v17; // [rsp+4Ch] [rbp-2Dh]
  int v18; // [rsp+50h] [rbp-29h]
  __int128 v19; // [rsp+58h] [rbp-21h]
  __int128 v20; // [rsp+68h] [rbp-11h]
  __int128 v21; // [rsp+78h] [rbp-1h]
  __int128 v22; // [rsp+88h] [rbp+Fh]
  UINT64 PagingFenceValue; // [rsp+98h] [rbp+1Fh]
  _QWORD v24[2]; // [rsp+A0h] [rbp+27h] BYREF

  v4 = *(_OWORD *)&a4->hPagingQueue;
  v15 = 0LL;
  v6 = *(_OWORD *)&a4->MinimumAddress;
  v17 = 0;
  v19 = v4;
  v16 = a2;
  v7 = *(_OWORD *)&a4->Size;
  LODWORD(v19) = a3;
  v20 = v6;
  v18 = 18;
  v8 = *(_OWORD *)&a4->DriverProtection;
  v14[0] = 16;
  v21 = v7;
  PagingFenceValue = a4->PagingFenceValue;
  v22 = v8;
  v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v15, 0x60u, v24, v14, v13);
  if ( v10 < 0 || (v10 = -1073741823, v14[0] < 0x10) )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdError(v11);
  }
  else
  {
    v10 = 0;
    a4->VirtualAddress = v24[0];
    a4->PagingFenceValue = v24[1];
  }
  return (unsigned int)v10;
}
