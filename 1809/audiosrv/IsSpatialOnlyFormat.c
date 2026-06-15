/*
 * XREFs of IsSpatialOnlyFormat @ 0x180122ECC
 * Callers:
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEBG_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUIPropertyStore@@PEAUIPolicyConfig@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180121148 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEBG_NPEBUSpatialAudioSettings@@PEBUtWA.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUIPolicyConfig@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUSpatialAudioSettings@@@Z @ 0x180121D18 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyS.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEBGAEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x180122F84 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEBGAEBU_tagpropertykey@@PEAUIPropertyStore@@PEA.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBGPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUIPolicyConfig@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180123E6C (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBGPEBUSpatialAudioSettings@@PEBUtWAVEFORMATE.c)
 * Callees:
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062F18 (IsGetDefaultSpatialRenderingModePresent.c)
 */

char __fastcall IsSpatialOnlyFormat(_QWORD *a1, char a2)
{
  char v2; // bl
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  _OWORD v12[3]; // [rsp+20h] [rbp-48h]

  v2 = 0;
  v12[0] = GUID_0000030c_0cea_0010_8000_00aa00389b71;
  v4 = 3;
  v12[1] = GUID_0000010c_0cea_0010_8000_00aa00389b71;
  v12[2] = GUID_0000000c_0cea_0010_8000_00aa00389b71;
  if ( a2
    || IsGetDefaultSpatialRenderingModePresent()
    && (unsigned int)IsDolbyMatSupportedByAudioDriver(v6, v5, v7, v8, *(_QWORD *)&v12[0], *((_QWORD *)&v12[0] + 1)) )
  {
    v4 = 2;
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = *(_QWORD *)&v12[v9] - *a1;
    if ( !v10 )
      v10 = *((_QWORD *)&v12[v9] + 1) - a1[1];
    if ( !v10 )
      break;
    if ( ++v9 >= v4 )
      return v2;
  }
  return 1;
}
