/*
 * XREFs of ?IsExclusiveModeDisabled@@YAHPEBG@Z @ 0x1800D9E38
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180029120 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800D2B5C (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall IsExclusiveModeDisabled(const unsigned __int16 *a1)
{
  unsigned int v1; // ebx
  int PropertyStoreProperty; // eax
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF

  memset(&pvar, 0, sizeof(pvar));
  v1 = 0;
  PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(a1, 0, &PKEY_Endpoint_AllowExclusive, &pvar);
  if ( PropertyStoreProperty >= 0 )
  {
    if ( pvar.vt )
      LOBYTE(v1) = pvar.iVal == 0;
  }
  else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x37u,
      (__int64)&WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids,
      PropertyStoreProperty);
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, (__int64)&WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids, v1);
  }
  return v1;
}
