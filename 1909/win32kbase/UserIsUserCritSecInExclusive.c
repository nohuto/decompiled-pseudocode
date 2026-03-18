/*
 * XREFs of UserIsUserCritSecInExclusive @ 0x1C0030130
 * Callers:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003009C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00300E8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0107858 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 UserIsUserCritSecInExclusive()
{
  return ExIsResourceAcquiredExclusiveLite(gpresUser) == 1;
}
