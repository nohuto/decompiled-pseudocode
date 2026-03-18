/*
 * XREFs of _HMPheFromObject @ 0x1C0023E20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

char *__fastcall HMPheFromObject(_DWORD *a1)
{
  GetDomainLockRef(14LL);
  return (char *)qword_1C0213758 + dword_1C0213760 * (unsigned int)(unsigned __int16)*a1;
}
