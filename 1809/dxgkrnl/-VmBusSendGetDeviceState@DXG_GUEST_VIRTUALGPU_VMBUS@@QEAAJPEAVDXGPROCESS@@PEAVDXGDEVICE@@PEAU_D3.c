/*
 * XREFs of ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1C01F48B8
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1C00D7D70 (DxgkGetDeviceStateInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
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
  __int64 v11; // rcx
  int v12; // ebx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  struct _MDL *v17; // [rsp+28h] [rbp-81h]
  unsigned int v18[4]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v19; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-61h]
  int v21; // [rsp+4Ch] [rbp-5Dh]
  int v22; // [rsp+50h] [rbp-59h]
  __int128 v23; // [rsp+58h] [rbp-51h]
  __int128 v24; // [rsp+68h] [rbp-41h]
  __int128 v25; // [rsp+78h] [rbp-31h]
  __int64 v26; // [rsp+88h] [rbp-21h]
  _OWORD v27[3]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v28; // [rsp+C0h] [rbp+17h]
  int v29; // [rsp+C8h] [rbp+1Fh]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v8 = *(_OWORD *)&a4->hDevice;
  v19 = 0LL;
  v9 = *(_OWORD *)(&a4->PresentQueueState + 1);
  v21 = 0;
  v23 = v8;
  v20 = HostProcess;
  v10 = *(_OWORD *)(&a4->PresentQueueState + 3);
  LODWORD(v23) = *((_DWORD *)a3 + 84);
  v24 = v9;
  v22 = 28;
  *(_QWORD *)&v9 = *((_QWORD *)&a4->PresentQueueState + 5);
  v25 = v10;
  v18[0] = 64;
  v26 = v9;
  v12 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v19, 0x50u, v27, v18, v17);
  if ( v12 < 0 )
    goto LABEL_4;
  v12 = -1073741823;
  if ( v18[0] < 0x40 )
    goto LABEL_4;
  v13 = v27[1];
  v12 = v29;
  *(_OWORD *)&a4->hDevice = v27[0];
  v14 = v27[2];
  *(_OWORD *)(&a4->PresentQueueState + 1) = v13;
  *(_QWORD *)&v13 = v28;
  *(_OWORD *)(&a4->PresentQueueState + 3) = v14;
  *((_QWORD *)&a4->PresentQueueState + 5) = v13;
  if ( v12 < 0 )
  {
LABEL_4:
    v15 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v15 + 24) = v12;
    WdLogEvent5_WdError(v15);
    v12 = 0;
    a4->PresentState.VidPnSourceId = 4;
  }
  return (unsigned int)v12;
}
