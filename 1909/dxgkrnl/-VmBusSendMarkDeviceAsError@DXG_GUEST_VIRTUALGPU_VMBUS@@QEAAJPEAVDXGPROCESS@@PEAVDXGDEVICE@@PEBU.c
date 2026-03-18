/*
 * XREFs of ?VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU_D3DKMT_MARKDEVICEASERROR@@@Z @ 0x1C02259AC
 * Callers:
 *     DxgkMarkDeviceAsError @ 0x1C0233410 (DxgkMarkDeviceAsError.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0228000 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E8C0 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMarkDeviceAsError(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        const struct _D3DKMT_MARKDEVICEASERROR *a4)
{
  struct _MDL *v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  unsigned int HostProcess; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+2Ch] [rbp-1Ch]
  int v18; // [rsp+30h] [rbp-18h]
  __int64 v19; // [rsp+38h] [rbp-10h]

  v15 = 0LL;
  v17 = 0;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v19 = (__int64)*a4;
  LODWORD(v19) = *((_DWORD *)a3 + 84);
  v18 = 29;
  v8 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v15, 0x20u, v7);
  v12 = v8;
  if ( v8 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v12;
}
