/*
 * XREFs of ?RmpTelemetryContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180042B70
 * Callers:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180041FAC (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z @ 0x180040740 (-RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z.c)
 */

__int64 __fastcall RmpTelemetryContextStart(struct _RM_SERVICE_GLOBALS *a1)
{
  int v2; // ebx
  DWORD TickCount; // eax

  RmpAcquireGlobalLock();
  v2 = *((_DWORD *)a1 + 164);
  *((_DWORD *)a1 + 142) = GetTickCount();
  TickCount = GetTickCount();
  RmpTelemetrySetTimer(a1, (v2 & 1) != 0 ? 3600000 : 900000, TickCount);
  RmpReleaseGlobalLock();
  return 0LL;
}
