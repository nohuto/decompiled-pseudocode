/*
 * XREFs of ?VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIXZ @ 0x1C0225A48
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01EDB44 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0227D0C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenAdapter(DXG_GUEST_VIRTUALGPU_VMBUS *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // r8
  __int64 v6; // rax
  struct _MDL *v7; // [rsp+28h] [rbp-48h]
  unsigned int v8; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+38h] [rbp-38h] BYREF
  int v10; // [rsp+40h] [rbp-30h]
  int v11; // [rsp+44h] [rbp-2Ch]
  int v12; // [rsp+48h] [rbp-28h]
  int v13; // [rsp+50h] [rbp-20h]
  int v14; // [rsp+54h] [rbp-1Ch]
  unsigned int v15; // [rsp+58h] [rbp-18h] BYREF

  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  v13 = 16;
  v14 = 16;
  v12 = 14;
  v8 = 8;
  v3 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v9, 0x20u, &v15, &v8, v7);
  if ( v3 >= 0 )
  {
    v3 = -1073741823;
    if ( v8 >= 4 )
      return v15;
  }
  v6 = WdLogNewEntry5_WdError(v2, v1, v4);
  *(_QWORD *)(v6 + 24) = v3;
  WdLogEvent5_WdError(v6);
  return 0LL;
}
