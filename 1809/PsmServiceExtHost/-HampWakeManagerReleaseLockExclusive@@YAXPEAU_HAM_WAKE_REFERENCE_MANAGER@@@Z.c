/*
 * XREFs of ?HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18000AACC
 * Callers:
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000A30C (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800233D0 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18006DB10 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180023AE0 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampWakeManagerReleaseLockExclusive(struct _HAM_WAKE_REFERENCE_MANAGER *a1, __int64 a2)
{
  CempLockTrackerMarkReleased(a1, a2, 4LL);
  *((_DWORD *)a1 + 6) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 16);
}
