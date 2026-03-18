/*
 * XREFs of ?VmBusSendDdiGetNodeMetadata@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C01F3E18
 * Callers:
 *     ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C0159674 (-DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetNodeMetadata(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        struct _DXGK_NODEMETADATA *a3)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int128 v6; // xmm1
  __int16 v7; // ax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  struct _MDL *v12; // [rsp+28h] [rbp-41h]
  unsigned int v13; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+38h] [rbp-31h] BYREF
  int v15; // [rsp+40h] [rbp-29h]
  int v16; // [rsp+44h] [rbp-25h]
  int v17; // [rsp+48h] [rbp-21h]
  int v18; // [rsp+50h] [rbp-19h]
  _OWORD v19[4]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+37h]
  __int16 v21; // [rsp+A8h] [rbp+3Fh]
  int v22; // [rsp+ACh] [rbp+43h]

  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  v18 = a2;
  v17 = 44;
  v13 = 80;
  v5 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v14, 0x20u, v19, &v13, v12);
  if ( v5 < 0 || (v5 = -1073741823, v13 < 0x50) || (v5 = v22, v22 < 0) )
  {
    v10 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v10 + 24) = v5;
    WdLogEvent5_WdError(v10);
  }
  else
  {
    v6 = v19[1];
    v7 = v21;
    *(_OWORD *)&a3->EngineType = v19[0];
    v8 = v19[2];
    *(_OWORD *)&a3->FriendlyName[6] = v6;
    v9 = v19[3];
    *(_OWORD *)&a3->FriendlyName[14] = v8;
    *(_QWORD *)&v8 = v20;
    *(_OWORD *)&a3->FriendlyName[22] = v9;
    *(_QWORD *)&a3->FriendlyName[30] = v8;
    *(_WORD *)&a3->GpuMmuSupported = v7;
  }
  return (unsigned int)v5;
}
