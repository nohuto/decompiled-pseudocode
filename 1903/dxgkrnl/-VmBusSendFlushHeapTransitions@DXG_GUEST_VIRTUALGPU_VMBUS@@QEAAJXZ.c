/*
 * XREFs of ?VmBusSendFlushHeapTransitions@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJXZ @ 0x1C0224520
 * Callers:
 *     DxgkFlushHeapTransitions @ 0x1C0140840 (DxgkFlushHeapTransitions.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0227990 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushHeapTransitions(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
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
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+2Ch] [rbp-1Ch]
  int v14; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  v14 = 37;
  v4 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v11, 0x18u, a4);
  v8 = v4;
  if ( v4 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdError(v9);
  }
  return (unsigned int)v8;
}
