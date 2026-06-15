/*
 * XREFs of ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001B6B0
 * Callers:
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18000508C (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180007840 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800090F0 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18000B570 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertyke.c)
 *     ?IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x18000C3F0 (-IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@PEAPEAUIAudioDeviceGraph@@@Z @ 0x180014DE0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001BC50 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180026450 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18003B330 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_53c21122ac2ea0b62ae7643ed09637d7___ @ 0x1801133C4 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_53c21122ac2ea0b62ae7643ed09637d7.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___ @ 0x180114644 (CEndpointCharacteristics--GetDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___ @ 0x18011475C (CEndpointCharacteristics--GetDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___ @ 0x1801148A4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateWaveFormatEx(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // r8d
  WORD nChannels; // r9
  DWORD nSamplesPerSec; // r10d
  DWORD nAvgBytesPerSec; // r11d
  WORD nBlockAlign; // di
  WORD cbSize; // dx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  WORD wBitsPerSample; // ax
  WORD v11; // dx
  WORD wFormatTag; // ax

  v1 = 0;
  if ( !a1 )
    return (unsigned int)-2147467261;
  nChannels = a1->nChannels;
  if ( !nChannels )
    return (unsigned int)-2147024809;
  nSamplesPerSec = a1->nSamplesPerSec;
  if ( !nSamplesPerSec )
    return (unsigned int)-2147024809;
  nAvgBytesPerSec = a1->nAvgBytesPerSec;
  if ( !nAvgBytesPerSec )
    return (unsigned int)-2147024809;
  nBlockAlign = a1->nBlockAlign;
  if ( !nBlockAlign )
    return (unsigned int)-2147024809;
  cbSize = a1->cbSize;
  if ( cbSize > 0x400u )
    return (unsigned int)-2147024809;
  if ( ((a1->wFormatTag - 1) & 0xFFFD) != 0 )
  {
    if ( a1->wFormatTag != 0xFFFE )
      return v1;
    if ( cbSize < 0x16u )
      return (unsigned int)-2147024809;
    v7 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
      v7 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
    if ( !v7 )
      goto LABEL_16;
    v8 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
      v8 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
    if ( !v8 )
    {
LABEL_16:
      v9 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
      if ( !v9 )
        v9 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
      if ( v9 )
      {
        wBitsPerSample = a1->wBitsPerSample;
        v11 = wBitsPerSample;
        if ( wBitsPerSample != 32 )
        {
          v11 = a1->wBitsPerSample;
          if ( wBitsPerSample != 64 )
            return (unsigned int)-2147024809;
        }
      }
      else
      {
        v11 = a1->wBitsPerSample;
        if ( ((v11 - 8) & 0xFFE7) != 0 )
          return (unsigned int)-2147024809;
      }
      wFormatTag = a1[1].wFormatTag;
      if ( wFormatTag
        && v11 >= wFormatTag
        && nAvgBytesPerSec == (nSamplesPerSec * v11 * nChannels) >> 3
        && nBlockAlign == v11 * nChannels / 8 )
      {
        return v1;
      }
      return (unsigned int)-2147024809;
    }
  }
  else if ( cbSize
         || (a1->wBitsPerSample & 7) != 0
         || nChannels > 2u
         || nAvgBytesPerSec != (nSamplesPerSec * a1->wBitsPerSample * nChannels) >> 3 )
  {
    return (unsigned int)-2147024809;
  }
  return v1;
}
