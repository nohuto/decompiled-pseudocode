/*
 * XREFs of ?VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PEAUDXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN@@@Z @ 0x1C0223810
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C011F9F4 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C022769C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreatePagingQueue(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        const struct _D3DKMT_CREATEPAGINGQUEUE *a4,
        struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *a5)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  __int64 v13; // rax
  struct _MDL *v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  int v16; // [rsp+38h] [rbp-40h]
  int v17; // [rsp+3Ch] [rbp-3Ch]
  int v18; // [rsp+40h] [rbp-38h]
  __int128 v19; // [rsp+48h] [rbp-30h]
  __int128 v20; // [rsp+58h] [rbp-20h]
  unsigned int v21; // [rsp+88h] [rbp+10h] BYREF

  v5 = *(_OWORD *)&a4->hDevice;
  v15 = 0LL;
  v6 = *(_OWORD *)&a4->FenceValueCPUVirtualAddress;
  v17 = 0;
  v7 = a5;
  v16 = a2;
  v18 = 9;
  v21 = 24;
  v19 = v5;
  LODWORD(v19) = a3;
  v20 = v6;
  v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v15, 0x38u, a5, &v21, v14);
  if ( v10 >= 0 )
  {
    v10 = -1073741823;
    if ( v21 >= 0x18 )
    {
      if ( *((_DWORD *)v7 + 1) )
        return 0LL;
    }
  }
  v13 = WdLogNewEntry5_WdError(v9, v8, v11);
  *(_QWORD *)(v13 + 24) = v10;
  WdLogEvent5_WdError(v13);
  return (unsigned int)v10;
}
