/*
 * XREFs of ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C002E984
 * Callers:
 *     UserDeleteW32Thread @ 0x1C0010550 (UserDeleteW32Thread.c)
 *     AllocQueue @ 0x1C002E6F0 (AllocQueue.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C002E914 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     zzzDestroyQueue @ 0x1C0034320 (zzzDestroyQueue.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = GetDomainLockRef(5LL, a2, a3);
  *(_WORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 18) = 0;
  result = a1;
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
