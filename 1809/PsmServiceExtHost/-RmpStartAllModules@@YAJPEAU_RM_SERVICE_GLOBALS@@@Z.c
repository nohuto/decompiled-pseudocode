/*
 * XREFs of ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180041FAC
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x180041F48 (RmpCreateResourceManagerServer.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18004206C (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z @ 0x180042AF0 (-RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z.c)
 *     ?RmpTelemetryContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180042B70 (-RmpTelemetryContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpSystemNotificationContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180042BD0 (-RmpSystemNotificationContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     CrmGlobalsStart @ 0x180045F50 (CrmGlobalsStart.c)
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
          {
            v3 = CrmGlobalsStart();
            if ( v3 >= 0 )
              return 0;
          }
        }
      }
    }
  }
  return (unsigned int)v3;
}
