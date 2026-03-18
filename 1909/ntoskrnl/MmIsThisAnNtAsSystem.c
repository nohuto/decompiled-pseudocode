/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x1400F16A0
 * Callers:
 *     IopMountVolume @ 0x1406A0254 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x140746DEC (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x14075EB78 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14075EC30 (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x14078BD34 (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_1405711AC;
}
