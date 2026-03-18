/*
 * XREFs of ?VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z @ 0x1C01F6404
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C011CFBC (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C01F797C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalFenceNtSharedByRef(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        int a4,
        unsigned __int64 a5)
{
  struct _MDL *v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  unsigned int HostProcess; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+2Ch] [rbp-2Ch]
  int v17; // [rsp+30h] [rbp-28h]
  int v18; // [rsp+38h] [rbp-20h]
  int v19; // [rsp+3Ch] [rbp-1Ch]
  unsigned __int64 v20; // [rsp+40h] [rbp-18h]

  v14 = 0LL;
  v16 = 0;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v19 = *((_DWORD *)a3 + 7);
  v20 = a5;
  v17 = 27;
  v18 = a4;
  v9 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v14, 0x28u, v8);
  v11 = v9;
  if ( v9 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
  }
  return (unsigned int)v11;
}
