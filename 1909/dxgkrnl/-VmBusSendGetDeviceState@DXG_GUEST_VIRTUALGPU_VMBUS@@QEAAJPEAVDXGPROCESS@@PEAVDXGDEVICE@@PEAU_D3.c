/*
 * XREFs of ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1C0224C58
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1C0132A60 (DxgkGetDeviceStateInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0227D0C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E8C0 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_GETDEVICESTATE *a4)
{
  unsigned int HostProcess; // eax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // r8
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  struct _MDL *v19; // [rsp+28h] [rbp-81h]
  unsigned int v20[4]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v21; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-61h]
  int v23; // [rsp+4Ch] [rbp-5Dh]
  int v24; // [rsp+50h] [rbp-59h]
  __int128 v25; // [rsp+58h] [rbp-51h]
  __int128 v26; // [rsp+68h] [rbp-41h]
  __int128 v27; // [rsp+78h] [rbp-31h]
  __int64 v28; // [rsp+88h] [rbp-21h]
  _OWORD v29[3]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v30; // [rsp+C0h] [rbp+17h]
  int v31; // [rsp+C8h] [rbp+1Fh]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v8 = *(_OWORD *)&a4->hDevice;
  v21 = 0LL;
  v9 = *(_OWORD *)(&a4->PresentQueueState + 1);
  v23 = 0;
  v25 = v8;
  v22 = HostProcess;
  v10 = *(_OWORD *)(&a4->PresentQueueState + 3);
  LODWORD(v25) = *((_DWORD *)a3 + 84);
  v26 = v9;
  v24 = 28;
  *(_QWORD *)&v9 = *((_QWORD *)&a4->PresentQueueState + 5);
  v27 = v10;
  v20[0] = 64;
  v28 = v9;
  v13 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v21, 0x50u, v29, v20, v19);
  if ( v13 < 0 )
    goto LABEL_4;
  v13 = -1073741823;
  if ( v20[0] < 0x40 )
    goto LABEL_4;
  v15 = v29[1];
  v13 = v31;
  *(_OWORD *)&a4->hDevice = v29[0];
  v16 = v29[2];
  *(_OWORD *)(&a4->PresentQueueState + 1) = v15;
  *(_QWORD *)&v15 = v30;
  *(_OWORD *)(&a4->PresentQueueState + 3) = v16;
  *((_QWORD *)&a4->PresentQueueState + 5) = v15;
  if ( v13 < 0 )
  {
LABEL_4:
    v17 = WdLogNewEntry5_WdError(v12, v11, v14);
    *(_QWORD *)(v17 + 24) = v13;
    WdLogEvent5_WdError(v17);
    v13 = 0;
    a4->PresentState.VidPnSourceId = 4;
  }
  return (unsigned int)v13;
}
