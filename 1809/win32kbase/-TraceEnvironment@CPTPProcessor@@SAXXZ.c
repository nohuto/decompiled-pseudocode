/*
 * XREFs of ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x1C014C26C
 * Callers:
 *     ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0004CA0 (-W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0030480 (TraceLoggingProviderEnabled.c)
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C003CDF0 (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 */

void CPTPProcessor::TraceEnvironment(void)
{
  CBaseInput *v0; // r10

  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters && CBaseInput::_sessionInitialized )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C01C7A38, 0, 1uLL) )
      CBaseInput::EnumDevices(
        v0,
        0LL,
        (unsigned __int8 (__fastcall *)(struct DEVICEINFO *, struct CInpPushLock *))lambda_6734545a6e0e853b7ddbd29772882ff2_::_lambda_invoker_cdecl_);
  }
}
