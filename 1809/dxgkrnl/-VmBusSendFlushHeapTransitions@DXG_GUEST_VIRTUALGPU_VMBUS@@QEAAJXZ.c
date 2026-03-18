/*
 * XREFs of ?VmBusSendFlushHeapTransitions@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJXZ @ 0x1C01F47F0
 * Callers:
 *     DxgkFlushHeapTransitions @ 0x1C01300A0 (DxgkFlushHeapTransitions.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C01F797C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushHeapTransitions(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        __int64 a2,
        __int64 a3,
        struct _MDL *a4)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+2Ch] [rbp-1Ch]
  int v12; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = 37;
  v4 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v9, 0x18u, a4);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
  }
  return (unsigned int)v6;
}
