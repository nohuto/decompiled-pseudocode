/*
 * XREFs of ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x180056D00
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800564A0 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 *     GetEndpointFormFactor @ 0x180056C74 (GetEndpointFormFactor.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEBG_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUIPropertyStore@@PEAUIPolicyConfig@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180121148 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEBG_NPEBUSpatialAudioSettings@@PEBUtWA.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUIPolicyConfig@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUSpatialAudioSettings@@@Z @ 0x180121D18 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyS.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBGPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUIPolicyConfig@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180123E6C (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBGPEBUSpatialAudioSettings@@PEBUtWAVEFORMATE.c)
 * Callees:
 *     ??$GetAsUInt32@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x180056D3C (--$GetAsUInt32@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagproper.c)
 */

__int64 __fastcall CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        _DWORD *a4)
{
  int v4; // eax
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]

  v4 = *((_DWORD *)a2 + 4);
  v7 = *a2;
  v8 = v4;
  result = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32<_tagpropertykey>(a1, &v7, a4);
  if ( (_DWORD)result == -2147023728 )
  {
    *a4 = 10;
    return 0LL;
  }
  return result;
}
