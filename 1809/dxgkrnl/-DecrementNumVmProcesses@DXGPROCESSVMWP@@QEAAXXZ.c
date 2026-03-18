/*
 * XREFs of ?DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C003DBA8
 * Callers:
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C0228E4C (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 * Callees:
 *     ?DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0228BF8 (-DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSVMWP::DecrementNumVmProcesses(DXGVIRTUALMACHINE **this)
{
  DXGVIRTUALMACHINE::DecrementNumVmProcesses(this[57]);
}
