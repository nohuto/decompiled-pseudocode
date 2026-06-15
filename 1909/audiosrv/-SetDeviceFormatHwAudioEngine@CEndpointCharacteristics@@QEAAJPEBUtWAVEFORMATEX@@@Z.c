/*
 * XREFs of ?SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011A56C
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180004A8C (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _lambda_20e2f10f5a8b71244438683d67afebd1_::operator() @ 0x18006801C (_lambda_20e2f10f5a8b71244438683d67afebd1_--operator().c)
 * Callees:
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18000508C (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180007840 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?GetOffloadMixFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x18011829C (-GetOffloadMixFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?SetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011A728 (-SetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::SetDeviceFormatHwAudioEngine(
        LPCWSTR *this,
        const struct tWAVEFORMATEX *a2)
{
  int updated; // ebx
  __int64 v5; // rdx
  int v7; // esi
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  struct tWAVEFORMATEX *v12; // [rsp+30h] [rbp-30h] BYREF
  char v13; // [rsp+38h] [rbp-28h]
  __int16 v14; // [rsp+40h] [rbp-20h] BYREF
  int v15; // [rsp+48h] [rbp-18h]
  struct tWAVEFORMATEX *v16; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  struct tWAVEFORMATEX *pv; // [rsp+78h] [rbp+18h]

  if ( !a2 )
  {
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this, 1, eHostProcessConnector, 0LL);
    if ( updated >= 0 )
      return 0LL;
    v5 = 8465LL;
    goto LABEL_4;
  }
  v7 = ValidateUncompressedWaveFormatEx(a2);
  if ( v7 < 0 )
  {
    v8 = 8474LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this, 1, eHostProcessConnector, a2);
  if ( v7 < 0 )
  {
    v8 = 8477LL;
    goto LABEL_8;
  }
  updated = CEndpointCharacteristics::SetOffloadDeviceFormat((CEndpointCharacteristics *)this, a2);
  if ( updated >= 0 )
  {
    pv = 0LL;
    v12 = 0LL;
    v13 = 1;
    updated = CEndpointCharacteristics::GetOffloadMixFormat((CEndpointCharacteristics *)this, &v12);
    if ( v13 )
      pv = v12;
    if ( updated >= 0 )
    {
      v14 = 65;
      v15 = pv->cbSize + 18;
      v16 = pv;
      v11 = (*(__int64 (__fastcall **)(LPCWSTR, __int128 *, __int16 *))(*(_QWORD *)this[5] + 48LL))(
              this[5],
              &PKEY_AudioEngine_HWMixFormat,
              &v14);
      updated = v11;
      if ( v11 >= 0 )
      {
        updated = 0;
LABEL_21:
        if ( pv )
          CoTaskMemFree(pv);
        return (unsigned int)updated;
      }
      v9 = (unsigned int)v11;
      v10 = 8493LL;
    }
    else
    {
      v9 = (unsigned int)updated;
      v10 = 8484LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v9);
    goto LABEL_21;
  }
  v5 = 8480LL;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
