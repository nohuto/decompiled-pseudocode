/*
 * XREFs of UserIsUserCritSecInExclusive @ 0x1C002EB70
 * Callers:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002EB20 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C010A1C8 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 UserIsUserCritSecInExclusive()
{
  return ExIsResourceAcquiredExclusiveLite(gpresUser) == 1;
}
