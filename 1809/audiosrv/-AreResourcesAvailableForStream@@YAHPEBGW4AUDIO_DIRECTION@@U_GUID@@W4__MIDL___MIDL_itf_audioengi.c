/*
 * XREFs of ?AreResourcesAvailableForStream@@YAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x1800D8FDC
 * Callers:
 *     AudioServerIsFormatSupported @ 0x1800043B0 (AudioServerIsFormatSupported.c)
 *     ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x1800376D0 (-UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineend.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?GetAudioResourcePriority@@YAKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHH@Z @ 0x1800CB724 (-GetAudioResourcePriority@@YAKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHH@Z.c)
 */

__int64 __fastcall AreResourcesAvailableForStream(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        int a6)
{
  int AudioResourcePriority; // eax
  __int128 *v10; // r11
  __int128 v12; // [rsp+40h] [rbp-18h] BYREF

  AudioResourcePriority = GetAudioResourcePriority(
                            (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001)(a2 != 0),
                            a5,
                            0,
                            a6);
  v12 = *v10;
  return (*(__int64 (__fastcall **)(struct IAudioResourceManager *, __int64, _QWORD, __int128 *, int, int))(*(_QWORD *)g_AudioResourceManager + 80LL))(
           g_AudioResourceManager,
           a1,
           a2,
           &v12,
           a4,
           AudioResourcePriority);
}
