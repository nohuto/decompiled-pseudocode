/*
 * XREFs of ?VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBVDXGPROCESS@@PEBVDXGPAGINGQUEUE@@PEBVDXGALLOCATION@@PEAUD3DDDI_UPDATEALLOCPROPERTY@@@Z @ 0x1C02282E0
 * Callers:
 *     DxgkUpdateAllocationProperty @ 0x1C02562E0 (DxgkUpdateAllocationProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0227D0C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateAllocationProperty(
        struct _KTHREAD **this,
        const struct DXGPROCESS *a2,
        const struct DXGPAGINGQUEUE *a3,
        const struct DXGALLOCATION *a4,
        struct D3DDDI_UPDATEALLOCPROPERTY *a5)
{
  int v5; // eax
  int v6; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned int v15[4]; // [rsp+30h] [rbp-21h] BYREF
  __int64 v16; // [rsp+40h] [rbp-11h] BYREF
  int v17; // [rsp+48h] [rbp-9h]
  int v18; // [rsp+4Ch] [rbp-5h]
  int v19; // [rsp+50h] [rbp-1h]
  __int128 v20; // [rsp+58h] [rbp+7h]
  __int128 v21; // [rsp+68h] [rbp+17h]
  __int64 v22; // [rsp+78h] [rbp+27h]
  UINT64 v23; // [rsp+80h] [rbp+2Fh] BYREF
  int v24; // [rsp+88h] [rbp+37h]

  v5 = *((_DWORD *)a2 + 92);
  v16 = 0LL;
  v18 = 0;
  v17 = v5;
  v6 = *((_DWORD *)a3 + 7);
  v7 = *(_OWORD *)&a5->hPagingQueue;
  v19 = 56;
  v8 = *(_OWORD *)&a5->Flags.0;
  v15[0] = 16;
  v20 = v7;
  LODWORD(v20) = v6;
  *(_QWORD *)&v7 = *(_QWORD *)&a5->0;
  DWORD1(v20) = *((_DWORD *)a4 + 24);
  v21 = v8;
  v22 = v7;
  v11 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
          this,
          (struct DXGKVMB_COMMAND_BASE *)&v16,
          (const GUID *)0x40,
          (char *)&v23,
          v15);
  if ( v11 < 0 || (v11 = -1073741823, v15[0] < 0x10) || (v11 = v24, v24 < 0) )
  {
    v13 = WdLogNewEntry5_WdError(v10, v9, v12);
    *(_QWORD *)(v13 + 24) = v11;
    WdLogEvent5_WdError(v13);
  }
  else
  {
    a5->PagingFenceValue = v23;
  }
  return (unsigned int)v11;
}
