/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x1400B5880
 * Callers:
 *     IopMountVolume @ 0x140681CF4 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x140744EEC (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x14075A2E8 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14075A3A0 (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x1407898D4 (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_1405711AC;
}
