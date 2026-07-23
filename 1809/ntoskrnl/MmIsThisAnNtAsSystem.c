/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x14000EC80
 * Callers:
 *     IopMountVolume @ 0x1405A3E64 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x14071D268 (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x14072A3FC (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14072A4B4 (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x140763F84 (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_14054119C;
}
