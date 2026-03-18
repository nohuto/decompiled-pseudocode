/*
 * XREFs of HMPkheFromPhe @ 0x1C0026DE0
 * Callers:
 *     HMRemoveHandleForObjectWorker @ 0x1C0102F08 (HMRemoveHandleForObjectWorker.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

char *__fastcall HMPkheFromPhe(__int64 a1)
{
  GetDomainLockRef(14LL);
  return (char *)gpKernelHandleTable + 24 * (unsigned int)((a1 - (__int64)qword_1C0210758) >> 5);
}
