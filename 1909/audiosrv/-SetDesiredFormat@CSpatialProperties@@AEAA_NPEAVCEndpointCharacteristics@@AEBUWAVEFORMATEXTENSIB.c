/*
 * XREFs of ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEAVCEndpointCharacteristics@@AEBUWAVEFORMATEXTENSIBLE@@_N@Z @ 0x18012E834
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18000B570 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertyke.c)
 * Callees:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180004A8C (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001E08C (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 */

bool __fastcall CSpatialProperties::SetDesiredFormat(
        CSpatialProperties *this,
        LPCWSTR *a2,
        struct WAVEFORMATEXTENSIBLE *a3,
        char a4)
{
  DWORD dwChannelMask; // eax
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  unsigned __int64 v11; // r15
  int v12; // ebx
  __int128 v13; // xmm1
  ULONGLONG v14; // xmm0_8
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  int v18; // [rsp+30h] [rbp-A9h] BYREF
  DWORD v19; // [rsp+34h] [rbp-A5h] BYREF
  DWORD nSamplesPerSec; // [rsp+38h] [rbp-A1h] BYREF
  DWORD nAvgBytesPerSec; // [rsp+3Ch] [rbp-9Dh] BYREF
  int v22; // [rsp+40h] [rbp-99h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-89h] BYREF
  __int128 v24; // [rsp+60h] [rbp-79h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-69h] BYREF
  WORD *p_nChannels; // [rsp+80h] [rbp-59h]
  int v27; // [rsp+88h] [rbp-51h]
  int v28; // [rsp+8Ch] [rbp-4Dh]
  int *v29; // [rsp+90h] [rbp-49h]
  int v30; // [rsp+98h] [rbp-41h]
  int v31; // [rsp+9Ch] [rbp-3Dh]
  DWORD *p_nSamplesPerSec; // [rsp+A0h] [rbp-39h]
  int v33; // [rsp+A8h] [rbp-31h]
  int v34; // [rsp+ACh] [rbp-2Dh]
  WORD *p_wBitsPerSample; // [rsp+B0h] [rbp-29h]
  int v36; // [rsp+B8h] [rbp-21h]
  int v37; // [rsp+BCh] [rbp-1Dh]
  union $48F34F6E58318E719B3C17D5DF8D3416::$BF32DB6F8F7ADBF71F90C18AFCE2FD9C *p_Samples; // [rsp+C0h] [rbp-19h]
  int v39; // [rsp+C8h] [rbp-11h]
  int v40; // [rsp+CCh] [rbp-Dh]
  DWORD *p_nAvgBytesPerSec; // [rsp+D0h] [rbp-9h]
  int v42; // [rsp+D8h] [rbp-1h]
  int v43; // [rsp+DCh] [rbp+3h]
  GUID *p_SubFormat; // [rsp+E0h] [rbp+7h]
  int v45; // [rsp+E8h] [rbp+Fh]
  int v46; // [rsp+ECh] [rbp+13h]

  v18 = 1;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateWsz(&pDesc, a2[3]);
    dwChannelMask = a3->dwChannelMask;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v19 = dwChannelMask;
    v29 = (int *)&v19;
    nSamplesPerSec = a3->Format.nSamplesPerSec;
    p_nSamplesPerSec = &nSamplesPerSec;
    p_wBitsPerSample = &a3->Format.wBitsPerSample;
    p_Samples = &a3->Samples;
    nAvgBytesPerSec = a3->Format.nAvgBytesPerSec;
    p_nAvgBytesPerSec = &nAvgBytesPerSec;
    p_SubFormat = &a3->SubFormat;
    p_nChannels = &a3->Format.nChannels;
    v27 = 2;
    v30 = 4;
    v33 = 4;
    v36 = 2;
    v39 = 2;
    v42 = 4;
    v45 = 16;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180179E33, v9, v10, 0xAu, &pData);
  }
  v11 = (unsigned __int64)this + 104;
  v22 = CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(
          (CEndpointCharacteristics *)a2,
          eHostProcessConnector,
          a3,
          (const struct SpatialAudioSettings *)(v11 & -(__int64)(a4 != 0)));
  v12 = v22;
  if ( v22 < 0 && a3->dwChannelMask == 1599 )
  {
    v13 = *(_OWORD *)&a3->Format.cbSize;
    pData = *(EVENT_DATA_DESCRIPTOR *)&a3->Format.wFormatTag;
    v14 = *(_QWORD *)a3->SubFormat.Data4;
    v24 = v13;
    DWORD1(v24) = 255;
    pDesc.Ptr = v14;
    v12 = CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(
            (CEndpointCharacteristics *)a2,
            eHostProcessConnector,
            (WAVEFORMATEXTENSIBLE *)&pData,
            (const struct SpatialAudioSettings *)(v11 & -(__int64)(a4 != 0)));
    v18 = v12;
  }
  if ( (unsigned int)hProvider > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
  {
    TlgCreateWsz(&pDesc, a2[3]);
    v28 = 0;
    v31 = 0;
    v29 = &v18;
    p_nChannels = (WORD *)&v22;
    v27 = 4;
    v30 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180179F42, v15, v16, 5u, &pData);
  }
  return v12 >= 0;
}
