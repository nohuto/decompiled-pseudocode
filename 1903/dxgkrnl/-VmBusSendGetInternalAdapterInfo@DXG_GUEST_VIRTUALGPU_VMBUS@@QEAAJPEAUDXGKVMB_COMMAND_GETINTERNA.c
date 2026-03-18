/*
 * XREFs of ?VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C022485C
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01ED514 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C022769C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // xmm1_8
  __int64 v9; // rax
  struct _MDL *v10; // [rsp+28h] [rbp-50h]
  unsigned int v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h] BYREF
  int v13; // [rsp+40h] [rbp-38h]
  int v14; // [rsp+44h] [rbp-34h]
  int v15; // [rsp+48h] [rbp-30h]
  __int128 v16; // [rsp+50h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp-18h]

  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  v15 = 36;
  v11 = 24;
  v5 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v12, 0x18u, &v16, &v11, v10);
  if ( v5 < 0 || (v5 = -1073741823, v11 < 0x18) )
  {
    v9 = WdLogNewEntry5_WdError(v4, v3, v6);
    *(_QWORD *)(v9 + 24) = v5;
    WdLogEvent5_WdError(v9);
    return (unsigned int)v5;
  }
  else
  {
    result = 0LL;
    v8 = v17;
    *(_OWORD *)a2 = v16;
    *((_QWORD *)a2 + 2) = v8;
  }
  return result;
}
