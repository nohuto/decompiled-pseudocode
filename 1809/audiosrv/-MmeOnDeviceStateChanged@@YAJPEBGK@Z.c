/*
 * XREFs of ?MmeOnDeviceStateChanged@@YAJPEBGK@Z @ 0x1800F82F8
 * Callers:
 *     s_mmeNotifyDeviceStateChanged @ 0x1800F87E0 (s_mmeNotifyDeviceStateChanged.c)
 * Callees:
 *     WPP_SF_Sd @ 0x1800B69FC (WPP_SF_Sd.c)
 */

__int64 __fastcall MmeOnDeviceStateChanged(const unsigned __int16 *a1)
{
  if ( (unsigned int)IsMmeDeviceStateChangedSupported() )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x19u,
        (__int64)&WPP_318757207047345406f66bc846efc13e_Traceguids,
        a1);
    }
    RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
    RtlReleaseResource(&PnpInfoResource);
  }
  return 0LL;
}
