/*
 * XREFs of ?VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIXZ @ 0x1C01F53C4
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01BDF0C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenAdapter(DXG_GUEST_VIRTUALGPU_VMBUS *this)
{
  __int64 v1; // rcx
  int v2; // ebx
  __int64 v4; // rax
  struct _MDL *v5; // [rsp+28h] [rbp-48h]
  unsigned int v6; // [rsp+30h] [rbp-40h] BYREF
  __int64 v7; // [rsp+38h] [rbp-38h] BYREF
  int v8; // [rsp+40h] [rbp-30h]
  int v9; // [rsp+44h] [rbp-2Ch]
  int v10; // [rsp+48h] [rbp-28h]
  int v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+54h] [rbp-1Ch]
  unsigned int v13; // [rsp+58h] [rbp-18h] BYREF

  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  v11 = 16;
  v12 = 16;
  v10 = 14;
  v6 = 8;
  v2 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v7, 0x20u, &v13, &v6, v5);
  if ( v2 >= 0 )
  {
    v2 = -1073741823;
    if ( v6 >= 4 )
      return v13;
  }
  v4 = WdLogNewEntry5_WdError(v1);
  *(_QWORD *)(v4 + 24) = v2;
  WdLogEvent5_WdError(v4);
  return 0LL;
}
