/*
 * XREFs of DpiDoInterfaceDereference @ 0x1C0252220
 * Callers:
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C0040504 (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall DpiDoInterfaceDereference(void *a1)
{
  return ObfDereferenceObject(a1);
}
