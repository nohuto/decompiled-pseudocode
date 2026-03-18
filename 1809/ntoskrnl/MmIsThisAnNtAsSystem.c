/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x14000EC80
 * Callers:
 *     IopMountVolume @ 0x1405A2E64 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x14071BFE8 (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x14072922C (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x1407292E4 (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x140762DB4 (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_14054019C;
}
