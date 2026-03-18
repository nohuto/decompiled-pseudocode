/*
 * XREFs of ?IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ @ 0x1C02299A8
 * Callers:
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01ED780 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGVIRTUALMACHINE::IncrementNumVmProcesses(DXGVIRTUALMACHINE *this)
{
  __int64 v1; // rax

  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this) <= 0xFFFF )
    return 0LL;
  v1 = WdLogNewEntry5_WdError(this);
  *(_QWORD *)(v1 + 24) = 5422LL;
  WdLogEvent5_WdError(v1);
  return 3221225473LL;
}
