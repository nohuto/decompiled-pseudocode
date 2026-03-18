/*
 * XREFs of _HMPheFromObject @ 0x1C0024340
 * Callers:
 *     HMRemoveHandleForObject @ 0x1C0073480 (HMRemoveHandleForObject.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

char *__fastcall HMPheFromObject(_DWORD *a1)
{
  GetDomainLockRef(14LL);
  return (char *)qword_1C0210758 + dword_1C0210760 * (unsigned int)(unsigned __int16)*a1;
}
