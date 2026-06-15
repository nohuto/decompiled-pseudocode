/*
 * XREFs of GetSpatialSettingsMonitoringPKey @ 0x18005A028
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18000A5F0 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18001C728 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ??0CSpatialProperties@@QEAA@XZ @ 0x180059F88 (--0CSpatialProperties@@QEAA@XZ.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x1800E1610 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall GetSpatialSettingsMonitoringPKey(__int64 a1, __int64 a2, const GUID *a3, const GUID *a4)
{
  TLG_STATUS result; // eax
  int v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  const char *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( a1 )
  {
    result = 2;
    *(_OWORD *)a1 = PKEY_SpatialAudio_Signaling_Key;
    *(_DWORD *)(a1 + 16) = 2;
  }
  else if ( (unsigned int)dword_1801B63C0 > 2 )
  {
    v9 = 33LL;
    v8 = "GetSpatialSettingsMonitoringPKey";
    v10 = &v5;
    v12 = &v6;
    v5 = 404;
    v11 = 4LL;
    v6 = -2147467261;
    v13 = 4LL;
    return TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CCCD, a3, a4, 5u, &pData);
  }
  return result;
}
