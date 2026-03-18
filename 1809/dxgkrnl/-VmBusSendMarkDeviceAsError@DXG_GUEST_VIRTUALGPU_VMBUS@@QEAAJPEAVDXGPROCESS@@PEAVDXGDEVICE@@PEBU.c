/*
 * XREFs of ?VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU_D3DKMT_MARKDEVICEASERROR@@@Z @ 0x1C01F5328
 * Callers:
 *     DxgkMarkDeviceAsError @ 0x1C00B2E60 (DxgkMarkDeviceAsError.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C01F797C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMarkDeviceAsError(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        const struct _D3DKMT_MARKDEVICEASERROR *a4)
{
  struct _MDL *v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  unsigned int HostProcess; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+2Ch] [rbp-1Ch]
  int v16; // [rsp+30h] [rbp-18h]
  __int64 v17; // [rsp+38h] [rbp-10h]

  v13 = 0LL;
  v15 = 0;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v17 = (__int64)*a4;
  LODWORD(v17) = *((_DWORD *)a3 + 84);
  v16 = 29;
  v8 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v13, 0x20u, v7);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdError(v11);
  }
  return (unsigned int)v10;
}
