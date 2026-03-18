/*
 * XREFs of ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C005BA80
 * Callers:
 *     AllocQueue @ 0x1C002E6F0 (AllocQueue.c)
 *     NtUserGetAsyncKeyState @ 0x1C005B840 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

void **__fastcall CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>::CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>(
        void **a1,
        __int64 a2,
        __int64 a3)
{
  *a1 = GetDomainLockRef(16LL, a2, a3);
  return a1;
}
