/*
 * XREFs of IsSpatialOnlyFormat @ 0x18000BCC4
 * Callers:
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyStore@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUSpatialAudioSettings@@@Z @ 0x1800016FC (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyS.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180003A70 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudio.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18000B570 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertyke.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18012DB70 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpa.c)
 * Callees:
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800675C8 (IsGetDefaultSpatialRenderingModePresent.c)
 */

char __fastcall IsSpatialOnlyFormat(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rcx
  _OWORD v10[3]; // [rsp+20h] [rbp-48h]

  v4 = 0;
  v10[0] = GUID_0000030c_0cea_0010_8000_00aa00389b71;
  v6 = 3;
  v10[1] = GUID_0000010c_0cea_0010_8000_00aa00389b71;
  v10[2] = GUID_0000000c_0cea_0010_8000_00aa00389b71;
  if ( (_BYTE)a2
    || (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(
                          a1,
                          a2,
                          a3,
                          a4,
                          *(_QWORD *)&v10[0],
                          *((_QWORD *)&v10[0] + 1))
    && (unsigned int)IsDolbyMatSupportedByAudioDriver() )
  {
    v6 = 2;
  }
  v7 = 0;
  while ( 1 )
  {
    v8 = *(_QWORD *)&v10[v7] - *a1;
    if ( !v8 )
      v8 = *((_QWORD *)&v10[v7] + 1) - a1[1];
    if ( !v8 )
      break;
    if ( ++v7 >= v6 )
      return v4;
  }
  return 1;
}
