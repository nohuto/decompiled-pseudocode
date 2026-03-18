/*
 * XREFs of ?DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C025DCF0
 * Callers:
 *     ?DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C00446C0 (-DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGVIRTUALMACHINE::DecrementNumVmProcesses(DXGVIRTUALMACHINE *this)
{
  _InterlockedDecrement((volatile signed __int32 *)this);
}
