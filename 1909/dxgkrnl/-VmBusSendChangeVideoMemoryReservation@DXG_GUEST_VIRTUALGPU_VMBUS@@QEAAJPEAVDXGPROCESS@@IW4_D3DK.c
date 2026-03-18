/*
 * XREFs of ?VmBusSendChangeVideoMemoryReservation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C0222FF4
 * Callers:
 *     ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1C01F4E6C (-ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMOR.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0228000 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendChangeVideoMemoryReservation(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a4,
        unsigned __int64 a5)
{
  int v6; // eax
  struct _MDL *v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  int v18; // [rsp+28h] [rbp-40h]
  int v19; // [rsp+2Ch] [rbp-3Ch]
  int v20; // [rsp+30h] [rbp-38h]
  _QWORD v21[4]; // [rsp+38h] [rbp-30h] BYREF

  v17 = 0LL;
  v6 = *((_DWORD *)a2 + 92);
  v19 = 0;
  v18 = v6;
  v20 = 49;
  memset(v21, 0, sizeof(v21));
  v21[2] = a5;
  HIDWORD(v21[1]) = a4;
  LODWORD(v21[3]) = a3;
  v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v17, 0x38u, v9);
  v14 = v10;
  if ( v10 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = v14;
    WdLogEvent5_WdError(v15);
  }
  return (unsigned int)v14;
}
