/*
 * XREFs of ?VmBusSendSetIoSpaceRegion@DXG_GUEST_GLOBAL_VMBUS@@QEAAJ_K0I@Z @ 0x1C01F61B0
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01BDF0C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C01F797C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendSetIoSpaceRegion(
        DXG_GUEST_GLOBAL_VMBUS *this,
        __int64 a2,
        __int64 a3,
        struct _MDL *a4)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+2Ch] [rbp-2Ch]
  int v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-18h]
  int v15; // [rsp+48h] [rbp-10h]

  v9 = 0LL;
  v10 = 0;
  v13 = a2;
  v14 = a3;
  v11 = 1;
  v12 = 1010;
  v15 = (int)a4;
  v4 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v9, 0x30u, a4);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
  }
  return (unsigned int)v6;
}
