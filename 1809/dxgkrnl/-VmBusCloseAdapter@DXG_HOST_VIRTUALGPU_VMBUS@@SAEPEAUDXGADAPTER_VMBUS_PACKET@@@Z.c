/*
 * XREFs of ?VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EC2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003651C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00EE924 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCloseAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  v4 = v2;
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 24) )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v7,
        (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
      DXGADAPTER::DestroyHandle(*(struct _KTHREAD ***)(*((_QWORD *)a1 + 5) + 88LL), *(_DWORD *)(v4 + 24));
      *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) = 0;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
    }
    else
    {
      v5 = WdLogNewEntry5_WdError(v3);
      *(_QWORD *)(v5 + 24) = 4340LL;
      WdLogEvent5_WdError(v5);
    }
  }
  return 0;
}
