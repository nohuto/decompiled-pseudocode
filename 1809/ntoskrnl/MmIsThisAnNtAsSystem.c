/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x14000EC80
 * Callers:
 *     IopMountVolume @ 0x1405A2E64 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x14071BFC8 (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x14072920C (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x1407292C4 (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x140762D94 (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_14054019C;
}
