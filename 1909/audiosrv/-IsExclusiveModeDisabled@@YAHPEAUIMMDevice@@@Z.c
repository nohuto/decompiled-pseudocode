/*
 * XREFs of ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18004463C
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180011CE0 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18004473C (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 */

__int64 __fastcall IsExclusiveModeDisabled(struct IMMDevice *a1)
{
  unsigned int v1; // ebx
  int PropertyStoreProperty; // eax
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF

  memset(&pvar, 0, sizeof(pvar));
  v1 = 0;
  PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(a1, 0, &PKEY_Endpoint_AllowExclusive, &pvar);
  if ( PropertyStoreProperty < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        56LL,
        &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids,
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
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 57LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids, v1);
  }
  return v1;
}
