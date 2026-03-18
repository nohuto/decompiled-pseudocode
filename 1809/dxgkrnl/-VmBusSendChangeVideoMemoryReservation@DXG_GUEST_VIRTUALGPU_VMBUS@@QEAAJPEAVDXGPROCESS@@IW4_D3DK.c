/*
 * XREFs of ?VmBusSendChangeVideoMemoryReservation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C01F2C60
 * Callers:
 *     ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1C01C5E68 (-ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMOR.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C01F797C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
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
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  int v16; // [rsp+28h] [rbp-40h]
  int v17; // [rsp+2Ch] [rbp-3Ch]
  int v18; // [rsp+30h] [rbp-38h]
  _QWORD v19[4]; // [rsp+38h] [rbp-30h] BYREF

  v15 = 0LL;
  v6 = *((_DWORD *)a2 + 98);
  v17 = 0;
  v16 = v6;
  v18 = 49;
  memset(v19, 0, sizeof(v19));
  v19[2] = a5;
  HIDWORD(v19[1]) = a4;
  LODWORD(v19[3]) = a3;
  v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v15, 0x38u, v9);
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v12;
}
