/*
 * XREFs of ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C007A864
 * Callers:
 *     RealInternalRemoveProp @ 0x1C007A420 (RealInternalRemoveProp.c)
 *     DeleteProperties @ 0x1C007A650 (DeleteProperties.c)
 *     HMCleanupGrantedHandle @ 0x1C01057C8 (HMCleanupGrantedHandle.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = GetDomainLockRef(17LL, a2, a3);
  result = a1;
  *(_BYTE *)(a1 + 8) = 0;
  return result;
}
