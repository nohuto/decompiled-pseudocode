/*
 * XREFs of ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x180215DD4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CA72C (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSection@@IIIPEAPEAV1@@Z @ 0x180214B60 (-Create@CGenericInkTipPointSource@@SAJPEAVCSharedSection@@IIIPEAPEAV1@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180215E9C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingK.c)
 */

__int64 __fastcall CGenericInk::ProcessTipPointBuffer(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_TIPPOINTBUFFER *a3)
{
  unsigned int v6; // edi
  CDirtyRegion **v7; // rbx
  unsigned int v8; // edx
  __int64 v9; // rcx
  struct CSharedSection *Resource; // rdi
  signed int v11; // eax
  __int64 v12; // rcx

  v6 = 0;
  wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsageToService();
  v7 = (CDirtyRegion **)((char *)this + 224);
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(v7);
  v8 = *((_DWORD *)a3 + 2);
  if ( v8 )
  {
    Resource = (struct CSharedSection *)CResourceTable::GetResource((__int64)a2, v8, 0xA7u);
    if ( Resource )
    {
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(v7);
      v11 = CGenericInkTipPointSource::Create(
              Resource,
              *((_DWORD *)a3 + 3),
              *((_DWORD *)a3 + 4),
              *((_DWORD *)a3 + 5),
              v7);
      v6 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xA7u, 0LL);
    }
    else
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x88980403, 0xA2u, 0LL);
    }
  }
  return v6;
}
