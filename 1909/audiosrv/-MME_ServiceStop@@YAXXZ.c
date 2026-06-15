/*
 * XREFs of ?MME_ServiceStop@@YAXXZ @ 0x180104434
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800C1470 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     ?DeletePnpInfo@@YAXXZ @ 0x180104324 (-DeletePnpInfo@@YAXXZ.c)
 */

void MME_ServiceStop(void)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_cdec8e7e3ff63eace1bce253fb909d75_Traceguids);
  }
  if ( (unsigned int)IsMmeServiceStopSupported() )
  {
    DeletePnpInfo();
    if ( AudioEndpointBuilderSid )
      LocalFree(AudioEndpointBuilderSid);
    if ( AudiosrvSid )
      LocalFree(AudiosrvSid);
    AudioEndpointBuilderSid = 0LL;
    AudiosrvSid = 0LL;
  }
}
