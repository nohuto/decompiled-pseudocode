/*
 * XREFs of LdrpInsertModuleToIndex @ 0x1800836E0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x1800207B8 (LdrpInsertModuleToIndexLockHeld.c)
 */

signed __int64 __fastcall LdrpInsertModuleToIndex(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
  LdrpInsertModuleToIndexLockHeld(a1, a2);
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
