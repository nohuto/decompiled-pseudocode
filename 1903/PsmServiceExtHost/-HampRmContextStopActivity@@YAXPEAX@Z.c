/*
 * XREFs of ?HampRmContextStopActivity@@YAXPEAX@Z @ 0x180034F64
 * Callers:
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180034DA0 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180036200 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 */

void __fastcall HampRmContextStopActivity(_QWORD *a1)
{
  unsigned __int64 v1; // rdx

  v1 = a1[2];
  if ( v1 != -1LL )
  {
    RmSrvResourceSetReleaseResources(RmSvcGlobals, v1, 0);
    a1[2] = -1LL;
  }
}
