/*
 * XREFs of ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000BAD0
 * Callers:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000B9B0 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180023AE0 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampClientReleaseLockExclusive(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  CempLockTrackerMarkReleased(a1, a2, 9LL);
  *((_DWORD *)a1 + 8) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 24);
}
