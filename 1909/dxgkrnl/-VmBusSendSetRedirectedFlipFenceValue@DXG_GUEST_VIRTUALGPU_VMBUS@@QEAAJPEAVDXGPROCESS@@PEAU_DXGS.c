/*
 * XREFs of ?VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGSHAREDSYNCOBJECT@@_K@Z @ 0x1C02269A0
 * Callers:
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C00FB960 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0228000 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E8C0 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetRedirectedFlipFenceValue(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _DXGSHAREDSYNCOBJECT *a3,
        __int64 a4)
{
  int v4; // ebx
  struct _MDL *v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  unsigned int HostProcess; // [rsp+28h] [rbp-30h]
  int v17; // [rsp+2Ch] [rbp-2Ch]
  int v18; // [rsp+30h] [rbp-28h]
  int v19; // [rsp+38h] [rbp-20h]
  __int64 v20; // [rsp+40h] [rbp-18h]

  v4 = *((_DWORD *)a3 + 2);
  v15 = 0LL;
  v17 = 0;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v18 = 35;
  v19 = v4;
  v20 = a4;
  v8 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v15, 0x28u, v7);
  v12 = v8;
  if ( v8 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v12;
}
