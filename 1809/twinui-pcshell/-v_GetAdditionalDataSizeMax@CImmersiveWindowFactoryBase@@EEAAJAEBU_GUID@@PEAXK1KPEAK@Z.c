/*
 * XREFs of ?v_GetAdditionalDataSizeMax@CImmersiveWindowFactoryBase@@EEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x180071220
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LIACoreNavigationClient@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800712B4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LIACoreNavigationClient@@@wil@@CAX_N.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::v_GetAdditionalDataSizeMax(
        unsigned __int64 this,
        const struct _GUID *a2,
        void *a3,
        __int64 a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int v7; // esi
  unsigned int v8; // edi
  __int64 v9; // rdx
  unsigned int v10; // eax
  signed int v11; // ebx
  unsigned int v12; // ecx
  int v14; // eax

  *a7 = 0;
  v7 = -1;
  v8 = -1;
  v9 = *(_BYTE *)(this + 136) != 0 ? 27 : 23;
  v10 = *(_BYTE *)(this + 136) != 0 ? 28 : 24;
  if ( v10 >= (unsigned int)v9 )
    v8 = *(_BYTE *)(this + 136) != 0 ? 28 : 24;
  v11 = v10 < (unsigned int)v9 ? 0x80070216 : 0;
  if ( v10 >= (unsigned int)v9 && *(_BYTE *)(this + 144) )
  {
    this = v8 + 4;
    v9 = v8;
    v14 = -1;
    if ( (unsigned int)this >= v8 )
      v14 = v8 + 4;
    v8 = v14;
    v11 = (unsigned int)this < (unsigned int)v9 ? 0x80070216 : 0;
  }
  wil::Feature<__WilFeatureTraits_Feature_LIACoreNavigationClient>::ReportUsageToService(this, v9, a3);
  if ( v11 >= 0 )
  {
    v12 = v8 + 4;
    if ( v8 + 4 >= v8 )
      v7 = v8 + 4;
    v11 = v12 < v8 ? 0x80070216 : 0;
    if ( v12 >= v8 )
      *a7 = v7;
  }
  return (unsigned int)v11;
}
