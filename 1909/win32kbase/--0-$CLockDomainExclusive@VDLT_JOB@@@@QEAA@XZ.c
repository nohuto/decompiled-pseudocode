/*
 * XREFs of ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C000F498
 * Callers:
 *     DeleteProperties @ 0x1C000FC70 (DeleteProperties.c)
 *     RealInternalRemoveProp @ 0x1C0011370 (RealInternalRemoveProp.c)
 *     HMCleanupGrantedHandle @ 0x1C0102D98 (HMCleanupGrantedHandle.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = GetDomainLockRef(17LL);
  result = a1;
  *(_BYTE *)(a1 + 8) = 0;
  return result;
}
