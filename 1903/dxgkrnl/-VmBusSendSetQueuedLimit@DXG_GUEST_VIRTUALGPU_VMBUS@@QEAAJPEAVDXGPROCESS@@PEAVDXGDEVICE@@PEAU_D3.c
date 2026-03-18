/*
 * XREFs of ?VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLIMIT@@@Z @ 0x1C0226250
 * Callers:
 *     DxgkSetQueuedLimit @ 0x1C0135570 (DxgkSetQueuedLimit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C022769C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E230 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetQueuedLimit(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_SETQUEUEDLIMIT *a4)
{
  unsigned int HostProcess; // eax
  __int128 v8; // xmm0
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  D3DKMT_HANDLE hDevice; // eax
  __int64 v15; // rax
  struct _MDL *v17; // [rsp+28h] [rbp-21h]
  unsigned int v18; // [rsp+30h] [rbp-19h] BYREF
  __int64 v19; // [rsp+38h] [rbp-11h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-9h]
  int v21; // [rsp+44h] [rbp-5h]
  int v22; // [rsp+48h] [rbp-1h]
  __int128 v23; // [rsp+50h] [rbp+7h]
  struct _D3DKMT_SETQUEUEDLIMIT v24; // [rsp+60h] [rbp+17h] BYREF
  int v25; // [rsp+70h] [rbp+27h]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v8 = (__int128)*a4;
  v19 = 0LL;
  v21 = 0;
  v20 = HostProcess;
  v9 = *((_DWORD *)a3 + 84);
  v23 = v8;
  LODWORD(v23) = v9;
  v22 = 31;
  v18 = 24;
  v12 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v19, 0x28u, &v24, &v18, v17);
  if ( v12 < 0
    || (v12 = -1073741823, v18 < 0x14)
    || (hDevice = a4->hDevice, v12 = v25, *a4 = v24, a4->hDevice = hDevice, v12 < 0) )
  {
    v15 = WdLogNewEntry5_WdWarning(v11, v10, v13);
    *(_QWORD *)(v15 + 24) = v12;
    WdLogEvent5_WdWarning(v15);
  }
  return (unsigned int)v12;
}
