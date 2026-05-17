/*
 * XREFs of LdrpInsertModuleToIndex @ 0x18007F3F0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInsertModuleToIndexLockHeld @ 0x18002A4F4 (LdrpInsertModuleToIndexLockHeld.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall LdrpInsertModuleToIndex(__int64 a1, __int64 a2)
{
  __int64 v4; // r8

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  LdrpInsertModuleToIndexLockHeld(a1, a2, v4);
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
