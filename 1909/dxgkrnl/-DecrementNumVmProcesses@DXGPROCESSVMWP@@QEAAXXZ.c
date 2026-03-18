/*
 * XREFs of ?DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C00446C0
 * Callers:
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C025DED0 (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 * Callees:
 *     ?DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C025DCF0 (-DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSVMWP::DecrementNumVmProcesses(DXGVIRTUALMACHINE **this)
{
  DXGVIRTUALMACHINE::DecrementNumVmProcesses(this[54]);
}
