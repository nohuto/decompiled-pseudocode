/*
 * XREFs of ?VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY@@@Z @ 0x1C0226170
 * Callers:
 *     DxgkSetContextSchedulingPriority @ 0x1C0146510 (DxgkSetContextSchedulingPriority.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0227990 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E230 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetContextSchedulingPriority(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        const struct _D3DKMT_SETCONTEXTSCHEDULINGPRIORITY *a4)
{
  struct _MDL *v7; // r9
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  unsigned int HostProcess; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+2Ch] [rbp-1Ch]
  int v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+38h] [rbp-10h]

  v9 = 0LL;
  v11 = 0;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v13 = (__int64)*a4;
  LODWORD(v13) = *((_DWORD *)a3 + 7);
  v12 = 33;
  return DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v9, 0x20u, v7);
}
