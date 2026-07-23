/*
 * XREFs of VerifierKeInitializeEvent @ 0x14093AA00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140927400 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeEvent(void *a1, unsigned int a2, char a3)
{
  __int64 v6; // r8

  VfUtilSynchronizationObjectSanityChecks(a1, 0x18uLL);
  LOBYTE(v6) = a3;
  return ((__int64 (__fastcall *)(void *, _QWORD, __int64))pXdvKeInitializeEvent)(a1, a2, v6);
}
