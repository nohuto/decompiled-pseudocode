/*
 * XREFs of ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@@Z @ 0x1800D4714
 * Callers:
 *     _lambda_f2d43d9fce42a4bdda65a41e87b82fa0_::operator() @ 0x1800CECC8 (_lambda_f2d43d9fce42a4bdda65a41e87b82fa0_--operator().c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@2PEBUSpatialAudioSettings@@@Z @ 0x1800D48B0 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_au.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?GetOffloadMixFormat@@YAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800B0BA8 (-GetOffloadMixFormat@@YAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?SetOffloadDeviceFormat@@YAJPEBGPEAUtWAVEFORMATEX@@@Z @ 0x1800B2B3C (-SetOffloadDeviceFormat@@YAJPEBGPEAUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800D6640 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18010DC04 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::SetDeviceFormatHwAudioEngine(
        struct CEndpointCharacteristics *a1,
        struct tWAVEFORMATEX *a2)
{
  __int64 v4; // rbx
  int updated; // eax
  int OffloadMixFormat; // edi
  __int64 v8; // [rsp+28h] [rbp-18h] BYREF
  __int64 v9; // [rsp+30h] [rbp-10h]
  struct tWAVEFORMATEX *v10; // [rsp+38h] [rbp-8h]
  LPVOID pv; // [rsp+70h] [rbp+30h] BYREF
  struct tWAVEFORMATEX *v12; // [rsp+78h] [rbp+38h] BYREF
  __int64 v13; // [rsp+80h] [rbp+40h]

  v12 = 0LL;
  pv = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v4 = *((_QWORD *)a1 + 2);
  v13 = v4;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( !a2 )
  {
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(a1, 1, eHostProcessConnector, 0LL);
LABEL_9:
    OffloadMixFormat = updated;
    goto LABEL_10;
  }
  OffloadMixFormat = ValidateUncompressedWaveFormatEx(a2);
  if ( OffloadMixFormat >= 0 )
  {
    OffloadMixFormat = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(a1, 1, eHostProcessConnector, a2);
    if ( OffloadMixFormat >= 0 )
    {
      OffloadMixFormat = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v4 + 40LL))(v4, &pv);
      if ( OffloadMixFormat >= 0 )
      {
        OffloadMixFormat = SetOffloadDeviceFormat((const unsigned __int16 *)pv, a2);
        if ( OffloadMixFormat >= 0 )
        {
          OffloadMixFormat = GetOffloadMixFormat((const unsigned __int16 *)pv, &v12);
          if ( OffloadMixFormat >= 0 )
          {
            LOWORD(v8) = 65;
            LODWORD(v9) = v12->cbSize + 18;
            v10 = v12;
            updated = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64 *))(**((_QWORD **)a1 + 5) + 48LL))(
                        *((_QWORD *)a1 + 5),
                        &PKEY_AudioEngine_HWMixFormat,
                        &v8);
            goto LABEL_9;
          }
        }
      }
    }
  }
LABEL_10:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v12 )
  {
    CoTaskMemFree(v12);
    v12 = 0LL;
  }
  if ( OffloadMixFormat < 0
    && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x12u,
      (__int64)&WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids,
      OffloadMixFormat);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)OffloadMixFormat;
}
