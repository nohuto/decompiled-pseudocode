/*
 * XREFs of ?VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGSHAREDSYNCOBJECT@@_K@Z @ 0x1C01F6300
 * Callers:
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C00DC06C (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C01F797C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
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
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  unsigned int HostProcess; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+2Ch] [rbp-2Ch]
  int v16; // [rsp+30h] [rbp-28h]
  int v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-18h]

  v4 = *((_DWORD *)a3 + 2);
  v13 = 0LL;
  v15 = 0;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v16 = 35;
  v17 = v4;
  v18 = a4;
  v8 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v13, 0x28u, v7);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdError(v11);
  }
  return (unsigned int)v10;
}
