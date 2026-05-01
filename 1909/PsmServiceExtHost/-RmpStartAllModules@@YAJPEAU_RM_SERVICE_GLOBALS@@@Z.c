/*
 * XREFs of ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180042EAC
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x180042E48 (RmpCreateResourceManagerServer.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042F60 (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z @ 0x1800432A0 (-RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z.c)
 *     ?RmpTelemetryContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004331C (-RmpTelemetryContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpSystemNotificationContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004337C (-RmpSystemNotificationContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 */

__int64 __fastcall RmpStartAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v2; // rbx
  int v3; // ebx

  v2 = (char *)a1 + 680;
  RmpAcquireGlobalLock();
  v3 = RtlSubscribeWnfStateChangeNotification(
         v2 + 744,
         WNF_AUDC_CPUSET_ID_SYSTEM,
         0LL,
         RmpCpuSetManagerAudioCpuWnfCallback,
         v2,
         0LL,
         0,
         0);
  RmpReleaseGlobalLock();
  if ( v3 >= 0 )
  {
    v3 = RmpSystemNotificationContextStart(a1);
    if ( v3 >= 0 )
    {
      v3 = RmpTelemetryContextStart(a1);
      if ( v3 >= 0 )
      {
        v3 = RmpRpExtStart((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 664));
        if ( v3 >= 0 )
        {
          v3 = HampManagerStart((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 1608));
          if ( v3 >= 0 )
            return 0;
        }
      }
    }
  }
  return (unsigned int)v3;
}
