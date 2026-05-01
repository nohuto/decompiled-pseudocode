/*
 * XREFs of ?v_MarshalAdditionalData@CImmersiveWindowFactoryBase@@EEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x180074A90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LIACoreNavigationClient@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180075010 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LIACoreNavigationClient@@@wil@@CAX_N.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::v_MarshalAdditionalData(
        CImmersiveWindowFactoryBase *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void *a4)
{
  HRESULT v6; // ebx
  char pv; // [rsp+30h] [rbp+8h] BYREF

  v6 = IStream_Write(a2, (char *)this + 108, 0x10u);
  if ( v6 >= 0 )
  {
    v6 = IStream_Write(a2, (char *)this + 124, 4u);
    if ( v6 >= 0 )
    {
      v6 = IStream_Write(a2, (char *)this + 97, 1u);
      if ( v6 >= 0 )
      {
        pv = 0;
        v6 = IStream_Write(a2, &pv, 1u);
        if ( v6 >= 0 )
        {
          v6 = IStream_Write(a2, (char *)this + 136, 1u);
          if ( v6 >= 0 )
          {
            if ( *((_BYTE *)this + 136) )
              v6 = IStream_Write(a2, (char *)this + 140, 4u);
            if ( v6 >= 0 )
            {
              v6 = IStream_Write(a2, (char *)this + 144, 1u);
              if ( v6 >= 0 )
              {
                if ( *((_BYTE *)this + 144) )
                  v6 = IStream_Write(a2, (char *)this + 148, 4u);
              }
            }
          }
        }
        wil::Feature<__WilFeatureTraits_Feature_LIACoreNavigationClient>::ReportUsageToService();
        if ( v6 >= 0 )
          return (unsigned int)IStream_Write(a2, (char *)this + 104, 4u);
      }
    }
  }
  return (unsigned int)v6;
}
