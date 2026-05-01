/*
 * XREFs of ?HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18003A1F0
 * Callers:
 *     ?HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z @ 0x180039FB0 (-HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z.c)
 *     ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x18003A024 (-HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x18001A910 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampWakeManagerReleaseLockShared(struct _HAM_WAKE_REFERENCE_MANAGER *a1, __int64 a2)
{
  CempLockTrackerMarkReleased((__int64)a1, a2, 4u);
  RtlReleaseSRWLockShared((char *)a1 + 16);
}
