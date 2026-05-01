/*
 * XREFs of ?HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x180040820
 * Callers:
 *     ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x1800406A4 (-HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 *     ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18007B3CC (-HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x18001A910 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampUserReleaseLockExclusive(struct _HAM_USER *a1, __int64 a2)
{
  CempLockTrackerMarkReleased((__int64)a1, a2, 7u);
  *((_DWORD *)a1 + 44) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 168);
}
