/*
 * XREFs of ?RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ @ 0x1801199E8
 * Callers:
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1800DFCF4 (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 * Callees:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180004A8C (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180119B00 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18011A044 (-ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::RefreshConnectorFormats(CEndpointCharacteristics *this)
{
  LPCGUID v2; // r8
  LPCGUID v3; // r9
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v4; // edx
  LPCRITICAL_SECTION lpCriticalSection[3]; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+68h] [rbp-20h] BYREF

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateWsz(&v8, *((LPCWSTR *)this + 3));
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180177225, v2, v3, 3u, &pData);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8544));
  lpCriticalSection[2] = (LPCRITICAL_SECTION)((char *)this + 8544);
  (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *, _QWORD))(*(_QWORD *)g_policyConfigInternal + 24LL))(
    g_policyConfigInternal,
    lpCriticalSection,
    *((_QWORD *)this + 3));
  CEndpointCharacteristics::RefreshDefaultConnectorFormats(this, v4);
  CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(this, eHostProcessConnector, 0LL, 0LL);
  CEndpointCharacteristics::ResetDeviceFormat(this);
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  if ( this != (CEndpointCharacteristics *)-8544LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 8544));
  return 0LL;
}
