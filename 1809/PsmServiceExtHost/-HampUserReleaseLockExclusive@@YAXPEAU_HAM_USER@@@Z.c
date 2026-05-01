/*
 * XREFs of ?HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x18006CFB0
 * Callers:
 *     ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18006CEEC (-HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180023AE0 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampUserReleaseLockExclusive(struct _HAM_USER *a1, __int64 a2)
{
  CempLockTrackerMarkReleased((__int64)a1, a2, 7u);
  *((_DWORD *)a1 + 44) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 168);
}
