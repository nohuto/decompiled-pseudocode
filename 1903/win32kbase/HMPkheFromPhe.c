/*
 * XREFs of HMPkheFromPhe @ 0x1C00268C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

char *__fastcall HMPkheFromPhe(__int64 a1)
{
  GetDomainLockRef(14LL);
  return (char *)gpKernelHandleTable + 24 * (unsigned int)((a1 - (__int64)qword_1C0213758) >> 5);
}
