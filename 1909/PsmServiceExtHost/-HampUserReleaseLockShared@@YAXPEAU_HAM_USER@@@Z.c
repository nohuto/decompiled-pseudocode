/*
 * XREFs of ?HampUserReleaseLockShared@@YAXPEAU_HAM_USER@@@Z @ 0x18003A9A0
 * Callers:
 *     ?HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x18003A940 (-HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x18001A910 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampUserReleaseLockShared(struct _HAM_USER *a1, __int64 a2)
{
  CempLockTrackerMarkReleased((__int64)a1, a2, 7u);
  RtlReleaseSRWLockShared((char *)a1 + 168);
}
