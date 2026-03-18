/*
 * XREFs of ?VmBusSendSignalFence@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_KW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C0226A34
 * Callers:
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C01328C8 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0228000 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendSignalFence(
        DXG_VMBUS_CHANNEL_BASE *a1,
        int a2,
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
  int v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+3Ch] [rbp-1Ch]
  __int64 v17; // [rsp+40h] [rbp-18h]

  v11 = 0LL;
  v12 = 0;
  v15 = a2;
  v17 = a3;
  v13 = 1;
  v14 = 1006;
  v16 = (int)a4;
  v4 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(a1, (struct DXGKVMB_COMMAND_BASE *)&v11, 0x28u, a4);
  v8 = v4;
  if ( v4 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdError(v9);
  }
  return (unsigned int)v8;
}
