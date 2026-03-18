/*
 * XREFs of ?VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PEAUDXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN@@@Z @ 0x1C01F3AE0
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00E7998 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreatePagingQueue(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        const struct _D3DKMT_CREATEPAGINGQUEUE *a4,
        struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *a5)
{
  __int128 v5; // xmm0
  struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *v6; // rdi
  __int128 v7; // xmm1
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v11; // rax
  struct _MDL *v12; // [rsp+28h] [rbp-48h]
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+38h] [rbp-38h]
  int v15; // [rsp+3Ch] [rbp-34h]
  int v16; // [rsp+40h] [rbp-30h]
  __int128 v17; // [rsp+48h] [rbp-28h]
  __int128 v18; // [rsp+58h] [rbp-18h]
  unsigned int v19; // [rsp+88h] [rbp+18h] BYREF

  v5 = *(_OWORD *)&a4->hDevice;
  v6 = a5;
  v7 = *(_OWORD *)&a4->FenceValueCPUVirtualAddress;
  v13 = 0LL;
  v15 = 0;
  v17 = v5;
  LODWORD(v17) = a3;
  v14 = a2;
  v16 = 9;
  v18 = v7;
  v19 = 24;
  v9 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v13, 0x38u, a5, &v19, v12);
  if ( v9 >= 0 )
  {
    v9 = -1073741823;
    if ( v19 >= 0x18 )
    {
      if ( *((_DWORD *)v6 + 1) )
        return 0LL;
    }
  }
  v11 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v11 + 24) = v9;
  WdLogEvent5_WdError(v11);
  return (unsigned int)v9;
}
