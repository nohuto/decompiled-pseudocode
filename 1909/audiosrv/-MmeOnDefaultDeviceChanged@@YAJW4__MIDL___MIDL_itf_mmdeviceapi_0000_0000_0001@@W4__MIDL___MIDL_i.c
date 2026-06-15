/*
 * XREFs of ?MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x1801044BC
 * Callers:
 *     s_mmeNotifyDefaultDeviceChanged @ 0x180104770 (s_mmeNotifyDefaultDeviceChanged.c)
 *     ?PublishChangeNotification@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBGK@Z @ 0x18012B1D0 (-PublishChangeNotification@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_i.c)
 * Callees:
 *     WPP_SF_ddS @ 0x1801046CC (WPP_SF_ddS.c)
 */

__int64 __fastcall MmeOnDefaultDeviceChanged(int a1, char a2, __int64 a3)
{
  int v6; // edx
  int v7; // r8d

  if ( (unsigned int)IsMmeDefaultDeviceChangedSupported() )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_ddS(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, v7, a1, a2, a3);
    }
    RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
    RtlReleaseResource(&PnpInfoResource);
  }
  return 0LL;
}
