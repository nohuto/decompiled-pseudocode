/*
 * XREFs of ?VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021C2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CA64 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C0133E30 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCloseAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rax
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  v6 = v2;
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 24) )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v9,
        (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
      DXGADAPTER::DestroyHandle(*(struct _KTHREAD ***)(*((_QWORD *)a1 + 5) + 88LL), *(unsigned int *)(v6 + 24));
      *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) = 0;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
    }
    else
    {
      v7 = WdLogNewEntry5_WdError(v4, v3, v5);
      *(_QWORD *)(v7 + 24) = 4270LL;
      WdLogEvent5_WdError(v7);
    }
  }
  return 0;
}
