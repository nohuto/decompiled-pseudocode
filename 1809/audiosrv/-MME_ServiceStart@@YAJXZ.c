/*
 * XREFs of ?MME_ServiceStart@@YAJXZ @ 0x180058F80
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180057C60 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?InitializePnpInfo@@YAHXZ @ 0x180058FFC (-InitializePnpInfo@@YAHXZ.c)
 *     ?ConvertTwoStringSidsToSids@@YAHPEBG0PEAPEAX1@Z @ 0x1800595CC (-ConvertTwoStringSidsToSids@@YAHPEBG0PEAPEAX1@Z.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 */

__int64 MME_ServiceStart(void)
{
  const unsigned __int16 *v0; // rdx
  void **v1; // r8
  void **v2; // r9
  const unsigned __int16 *v3; // rcx

  if ( (unsigned int)IsMmeServiceStartSupported() )
  {
    v3 = (const unsigned __int16 *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_318757207047345406f66bc846efc13e_Traceguids);
    }
    if ( (unsigned int)ConvertTwoStringSidsToSids(v3, v0, v1, v2) && (unsigned int)InitializePnpInfo() )
    {
      RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
      _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
      _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
      RtlReleaseResource(&PnpInfoResource);
    }
  }
  return 0LL;
}
