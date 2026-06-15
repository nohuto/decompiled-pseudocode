/*
 * XREFs of ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x180001ABC
 * Callers:
 *     AudioServerIsFormatSupported @ 0x1800043B0 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180001B3C (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 */

__int64 __fastcall IsOffloadDisabled(struct IMMDevice *a1)
{
  unsigned int v1; // ebx
  int PropertyStoreProperty; // eax
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF

  memset(&pvar, 0, sizeof(pvar));
  v1 = 0;
  PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(a1, 0, &PKEY_Endpoint_AllowOffloading, &pvar);
  if ( PropertyStoreProperty < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        59LL,
        &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids,
        (unsigned int)PropertyStoreProperty);
    }
  }
  else if ( pvar.vt )
  {
    LOBYTE(v1) = pvar.iVal == 0;
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 60LL, &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids, v1);
  }
  return v1;
}
