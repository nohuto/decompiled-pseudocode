/*
 * XREFs of ?VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C01F49D0
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01BDF0C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *a2)
{
  __int64 v3; // rcx
  int v4; // ebx
  __int64 result; // rax
  __int64 v6; // xmm1_8
  __int64 v7; // rax
  struct _MDL *v8; // [rsp+28h] [rbp-48h]
  unsigned int v9; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h] BYREF
  int v11; // [rsp+40h] [rbp-30h]
  int v12; // [rsp+44h] [rbp-2Ch]
  int v13; // [rsp+48h] [rbp-28h]
  __int128 v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h]

  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  v13 = 36;
  v9 = 24;
  v4 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v10, 0x18u, &v14, &v9, v8);
  if ( v4 < 0 || (v4 = -1073741823, v9 < 0x18) )
  {
    v7 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v7 + 24) = v4;
    WdLogEvent5_WdError(v7);
    return (unsigned int)v4;
  }
  else
  {
    result = 0LL;
    v6 = v15;
    *(_OWORD *)a2 = v14;
    *((_QWORD *)a2 + 2) = v6;
  }
  return result;
}
