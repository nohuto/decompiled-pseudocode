/*
 * XREFs of ?VmBusSendSetIoSpaceRegion@DXG_GUEST_GLOBAL_VMBUS@@QEAAJ_K0I@Z @ 0x1C02261E0
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01ED514 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0227990 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendSetIoSpaceRegion(
        DXG_GUEST_GLOBAL_VMBUS *this,
        __int64 a2,
        __int64 a3,
        struct _MDL *a4)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+2Ch] [rbp-2Ch]
  int v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+40h] [rbp-18h]
  int v17; // [rsp+48h] [rbp-10h]

  v11 = 0LL;
  v12 = 0;
  v15 = a2;
  v16 = a3;
  v13 = 1;
  v14 = 1010;
  v17 = (int)a4;
  v4 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v11, 0x30u, a4);
  v8 = v4;
  if ( v4 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdError(v9);
  }
  return (unsigned int)v8;
}
