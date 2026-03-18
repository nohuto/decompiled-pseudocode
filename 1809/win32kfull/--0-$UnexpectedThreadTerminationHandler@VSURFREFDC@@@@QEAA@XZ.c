/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@QEAA@XZ @ 0x1C015FC64
 * Callers:
 *     ??0SURFREFDC@@QEAA@XZ @ 0x1C026FA4C (--0SURFREFDC@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 */

void *__fastcall UnexpectedThreadTerminationHandler<SURFREFDC>::UnexpectedThreadTerminationHandler<SURFREFDC>(void *a1)
{
  memset(a1, 0, 0x20uLL);
  PushThreadGuardedObject(a1, a1, UnexpectedThreadTerminationHandler<SURFREFDC>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
