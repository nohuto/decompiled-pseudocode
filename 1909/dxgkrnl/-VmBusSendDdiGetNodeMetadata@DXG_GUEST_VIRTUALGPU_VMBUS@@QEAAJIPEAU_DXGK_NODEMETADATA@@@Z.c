/*
 * XREFs of ?VmBusSendDdiGetNodeMetadata@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C02241B8
 * Callers:
 *     ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C0160444 (-DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0227D0C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetNodeMetadata(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        struct _DXGK_NODEMETADATA *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // r8
  __int128 v8; // xmm1
  __int16 v9; // ax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  struct _MDL *v14; // [rsp+28h] [rbp-41h]
  unsigned int v15; // [rsp+30h] [rbp-39h] BYREF
  __int64 v16; // [rsp+38h] [rbp-31h] BYREF
  int v17; // [rsp+40h] [rbp-29h]
  int v18; // [rsp+44h] [rbp-25h]
  int v19; // [rsp+48h] [rbp-21h]
  int v20; // [rsp+50h] [rbp-19h]
  _OWORD v21[4]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+37h]
  __int16 v23; // [rsp+A8h] [rbp+3Fh]
  int v24; // [rsp+ACh] [rbp+43h]

  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  v20 = a2;
  v19 = 44;
  v15 = 80;
  v6 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v16, 0x20u, v21, &v15, v14);
  if ( v6 < 0 || (v6 = -1073741823, v15 < 0x50) || (v6 = v24, v24 < 0) )
  {
    v12 = WdLogNewEntry5_WdError(v5, v4, v7);
    *(_QWORD *)(v12 + 24) = v6;
    WdLogEvent5_WdError(v12);
  }
  else
  {
    v8 = v21[1];
    v9 = v23;
    *(_OWORD *)&a3->EngineType = v21[0];
    v10 = v21[2];
    *(_OWORD *)&a3->FriendlyName[6] = v8;
    v11 = v21[3];
    *(_OWORD *)&a3->FriendlyName[14] = v10;
    *(_QWORD *)&v10 = v22;
    *(_OWORD *)&a3->FriendlyName[22] = v11;
    *(_QWORD *)&a3->FriendlyName[30] = v10;
    *(_WORD *)&a3->GpuMmuSupported = v9;
  }
  return (unsigned int)v6;
}
